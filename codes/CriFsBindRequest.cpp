void CriFsBindRequest___ctor(
        CriFsBindRequest_o *this,
        int32_t type,
        CriFsBinder_o *targetBinder,
        CriFsBinder_o *srcBinder,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Guid_o v11; // kr00_16
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  uint32_t v15; // w0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x0
  System_Exception_o *v19; // x19
  System_String_o *v20; // x0
  __int64 v21; // x0

  if ( (byte_59696A0 & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    byte_59696A0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v11 = System_Guid__NewGuid(0);
  this->fields._path_k__BackingField = path;
  this->fields.guid = v11;
  v12 = sub_2213A04(&this->fields._path_k__BackingField, path);
  if ( type == 2 )
  {
    if ( !targetBinder )
      goto LABEL_15;
    v15 = CriFsBinder__BindFile(targetBinder, srcBinder, path, v14);
  }
  else
  {
    if ( type != 1 )
    {
      if ( type )
      {
        v18 = sub_2213A74(&System_Exception_TypeInfo);
        v19 = (System_Exception_o *)sub_2213CCC(v18);
        v20 = (System_String_o *)sub_2213A74(&StringLiteral_8179/*"Invalid bind type."*/);
        System_Exception___ctor_77375268(v19, v20, 0);
        v21 = sub_2213A74(&Method_CriFsBindRequest__ctor__);
        sub_2213BA0(v19, v21);
      }
      if ( targetBinder )
      {
        v15 = CriFsBinder__BindCpk(targetBinder, srcBinder, path, v14);
        goto LABEL_12;
      }
LABEL_15:
      sub_2213CDC(v12, v13);
    }
    if ( !targetBinder )
      goto LABEL_15;
    v15 = CriFsBinder__BindDirectory(targetBinder, srcBinder, path, v14);
  }
LABEL_12:
  this->fields._bindId_k__BackingField = v15;
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v16, v17);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v17);
}


// local variable allocation has failed, the output may be wrong!
void CriFsBindRequest__Dispose(CriFsBindRequest_o *this, bool disposing, const MethodInfo *method)
{
  if ( (byte_59696A2 & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    byte_59696A2 = 1;
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, disposing, method);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
}


void CriFsBindRequest__Stop(CriFsBindRequest_o *this, const MethodInfo *method)
{
  ;
}


void CriFsBindRequest__Update(CriFsBindRequest_o *this, const MethodInfo *method)
{
  int32_t Status; // w0
  __int64 v4; // x1
  struct CriFsRequest_DoneDelegate_o *doneDelegate_k__BackingField; // x8

  if ( (byte_59696A1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6397/*"Error occurred."*/);
    byte_59696A1 = 1;
  }
  if ( !this->fields._isDone_k__BackingField )
  {
    Status = CriFsBinder__GetStatus(this->fields._bindId_k__BackingField, method);
    if ( Status != 1 )
    {
      if ( Status == 6 )
      {
        v4 = StringLiteral_6397/*"Error occurred."*/;
        this->fields._error_k__BackingField = (struct System_String_o *)StringLiteral_6397/*"Error occurred."*/;
        sub_2213A04(&this->fields._error_k__BackingField, v4);
      }
      doneDelegate_k__BackingField = this->fields._doneDelegate_k__BackingField;
      this->fields._isDone_k__BackingField = 1;
      if ( doneDelegate_k__BackingField )
        ((void (__fastcall *)(intptr_t, CriFsBindRequest_o *, intptr_t))doneDelegate_k__BackingField->fields.invoke_impl)(
          doneDelegate_k__BackingField->fields.method_code,
          this,
          doneDelegate_k__BackingField->fields.method);
    }
  }
}


uint32_t CriFsBindRequest__get_bindId(CriFsBindRequest_o *this, const MethodInfo *method)
{
  return this->fields._bindId_k__BackingField;
}


System_String_o *CriFsBindRequest__get_path(CriFsBindRequest_o *this, const MethodInfo *method)
{
  return this->fields._path_k__BackingField;
}


void CriFsBindRequest__set_bindId(CriFsBindRequest_o *this, uint32_t value, const MethodInfo *method)
{
  this->fields._bindId_k__BackingField = value;
}


void CriFsBindRequest__set_path(CriFsBindRequest_o *this, System_String_o *value, const MethodInfo *method)
{
  this->fields._path_k__BackingField = value;
  sub_2213A04(&this->fields._path_k__BackingField, value);
}