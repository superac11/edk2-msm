// Mainline device tree blob
#FILE FREEFORM = 25462CDA-221F-47DF-AC1D-259CFAA4E326 {
#  SECTION RAW = Platform/Razer/sdm845/FdtBlob_compat/linus.dtb
#}

// ACPI Tables
FILE FREEFORM = 7E374E25-8E01-4FEE-87F2-390C23C606CD {   
  SECTION RAW = Platform/Razer/sdm845/AcpiTables/DSDT.aml
  SECTION RAW = Silicon/Qualcomm/sdm845/AcpiTables/DBG2.aml
  SECTION RAW = Silicon/Qualcomm/sdm845/AcpiTables/MADT.aml
  SECTION RAW = Silicon/Qualcomm/sdm845/AcpiTables/FADT.aml
  SECTION RAW = Silicon/Qualcomm/sdm845/AcpiTables/GTDT.aml
  SECTION RAW = Silicon/Qualcomm/sdm845/AcpiTables/IORT.aml
  SECTION RAW = Silicon/Qualcomm/sdm845/AcpiTables/PPTT.aml
  SECTION UI = "AcpiTables"
}
