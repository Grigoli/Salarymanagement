# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.Salary.Debug:
/Users/gigavashakidze/Downloads/Assign4_Vashakidze/XSalary/Salarymanagement/Build/Debug/Salary:
	/bin/rm -f /Users/gigavashakidze/Downloads/Assign4_Vashakidze/XSalary/Salarymanagement/Build/Debug/Salary


PostBuild.Salary.Release:
/Users/gigavashakidze/Downloads/Assign4_Vashakidze/XSalary/Salarymanagement/Build/Release/Salary:
	/bin/rm -f /Users/gigavashakidze/Downloads/Assign4_Vashakidze/XSalary/Salarymanagement/Build/Release/Salary


PostBuild.Salary.MinSizeRel:
/Users/gigavashakidze/Downloads/Assign4_Vashakidze/XSalary/Salarymanagement/Build/MinSizeRel/Salary:
	/bin/rm -f /Users/gigavashakidze/Downloads/Assign4_Vashakidze/XSalary/Salarymanagement/Build/MinSizeRel/Salary


PostBuild.Salary.RelWithDebInfo:
/Users/gigavashakidze/Downloads/Assign4_Vashakidze/XSalary/Salarymanagement/Build/RelWithDebInfo/Salary:
	/bin/rm -f /Users/gigavashakidze/Downloads/Assign4_Vashakidze/XSalary/Salarymanagement/Build/RelWithDebInfo/Salary




# For each target create a dummy ruleso the target does not have to exist
