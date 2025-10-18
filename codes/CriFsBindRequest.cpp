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
  const MethodInfo *v13; // x3
  uint32_t v14; // w0
  const MethodInfo *v15; // x2
  __int64 v16; // x0
  System_Exception_o *v17; // x19
  System_String_o *v18; // x0
  __int64 v19; // x0

  if ( (byte_4C3C508 & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    byte_4C3C508 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v11 = System_Guid__NewGuid(0);
  this->fields._path_k__BackingField = path;
  this->fields.guid = v11;
  v12 = sub_1C36FFC(&this->fields._path_k__BackingField, path);
  if ( type == 2 )
  {
    if ( !targetBinder )
      goto LABEL_15;
    v14 = CriFsBinder__BindFile(targetBinder, srcBinder, path, v13);
  }
  else
  {
    if ( type != 1 )
    {
      if ( type )
      {
        v16 = sub_1C3706C(&System_Exception_TypeInfo);
        v17 = (System_Exception_o *)sub_1C372A4(v16);
        v18 = (System_String_o *)sub_1C3706C(&StringLiteral_7844/*"Invalid bind type."*/);
        System_Exception___ctor_65309304(v17, v18, 0);
        v19 = sub_1C3706C(&Method_CriFsBindRequest__ctor__);
        sub_1C37180(v17, v19);
      }
      if ( targetBinder )
      {
        v14 = CriFsBinder__BindCpk(targetBinder, srcBinder, path, v13);
        goto LABEL_12;
      }
LABEL_15:
      sub_1C372B4(v12);
    }
    if ( !targetBinder )
      goto LABEL_15;
    v14 = CriFsBinder__BindDirectory(targetBinder, srcBinder, path, v13);
  }
LABEL_12:
  this->fields._bindId_k__BackingField = v14;
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 2, v15);
}


// local variable allocation has failed, the output may be wrong!
void CriFsBindRequest__Dispose(CriFsBindRequest_o *this, bool disposing, const MethodInfo *method)
{
  if ( (byte_4C3C50A & 1) == 0 )
  {
    sub_1C37058(&CriDisposableObjectManager_TypeInfo);
    byte_4C3C50A = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
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

  if ( (byte_4C3C509 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6139/*"Error occurred."*/);
    byte_4C3C509 = 1;
  }
  if ( !this->fields._isDone_k__BackingField )
  {
    Status = CriFsBinder__GetStatus(this->fields._bindId_k__BackingField, method);
    if ( Status != 1 )
    {
      if ( Status == 6 )
      {
        v4 = StringLiteral_6139/*"Error occurred."*/;
        this->fields._error_k__BackingField = (struct System_String_o *)StringLiteral_6139/*"Error occurred."*/;
        sub_1C36FFC(&this->fields._error_k__BackingField, v4);
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
  sub_1C36FFC(&this->fields._path_k__BackingField, value);
}