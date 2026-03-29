void CriFsInstallRequest___ctor(CriFsInstallRequest_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.guid = System_Guid__NewGuid(0);
}


System_String_o *CriFsInstallRequest__get_destinationPath(CriFsInstallRequest_o *this, const MethodInfo *method)
{
  return this->fields._destinationPath_k__BackingField;
}


float CriFsInstallRequest__get_progress(CriFsInstallRequest_o *this, const MethodInfo *method)
{
  return this->fields._progress_k__BackingField;
}


System_String_o *CriFsInstallRequest__get_sourcePath(CriFsInstallRequest_o *this, const MethodInfo *method)
{
  return this->fields._sourcePath_k__BackingField;
}


void CriFsInstallRequest__set_destinationPath(
        CriFsInstallRequest_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._destinationPath_k__BackingField = value;
  sub_1C93A78(&this->fields._destinationPath_k__BackingField, value);
}


void CriFsInstallRequest__set_progress(CriFsInstallRequest_o *this, float value, const MethodInfo *method)
{
  this->fields._progress_k__BackingField = value;
}


void CriFsInstallRequest__set_sourcePath(CriFsInstallRequest_o *this, System_String_o *value, const MethodInfo *method)
{
  this->fields._sourcePath_k__BackingField = value;
  sub_1C93A78(&this->fields._sourcePath_k__BackingField, value);
}