// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase___ctor(DataMasterBase_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_String_o *Name; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B4464B & 1) == 0 )
  {
    sub_1BDB878(&DataNameKind_TypeInfo, *(_QWORD *)&kind);
    byte_4B4464B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._MasterKind_k__BackingField = kind;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
  Name = DataNameKind__GetName(kind, 0LL);
  this->fields._MasterName_k__BackingField = Name;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._MasterName_k__BackingField, (int32_t)Name, v6, v7);
}


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_3033B58 *method)
{
  long double v1; // q0
  const MethodInfo_3033B58_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C2BF64();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C2BF08(v1);
  return **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184);
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_3033B90 *method)
{
  long double v1; // q0
  const MethodInfo_3033B90_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C2BF64();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C2BF08(v1);
  return *(System_String_o **)(*(_QWORD *)(_1_DataMasterBase_Registration_TMaster + 184) + 8LL);
}


bool __fastcall DataMasterBase__Modified(DataMasterBase_o *this, int32_t revision, const MethodInfo *method)
{
  return this->fields.revision != revision;
}


void __fastcall DataMasterBase__RegisterKindAndName_object_(
        int32_t kind,
        System_String_o *name,
        const MethodInfo_3033BC8 *method)
{
  const MethodInfo *v3; // x3
  long double v4; // q0
  const MethodInfo_3033BC8_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0
  Il2CppClass *v10; // x0
  Il2CppClass *v11; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C2BF64();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C2BF08(v4);
  **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184) = kind;
  v10 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
    v10 = (Il2CppClass *)sub_1C2BF08(v4);
  *((_QWORD *)v10->static_fields + 1) = name;
  v11 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
    v11 = (Il2CppClass *)sub_1C2BF08(v4);
  sub_1BDB81C((CGThumbnailListItem_o *)((char *)v11->static_fields + 8), (int32_t)name, (int32_t)method, v3);
}


int32_t __fastcall DataMasterBase__Revision(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields.revision;
}


int32_t __fastcall DataMasterBase__get_MasterKind(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields._MasterKind_k__BackingField;
}


System_String_o *__fastcall DataMasterBase__get_MasterName(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields._MasterName_k__BackingField;
}


bool __fastcall DataMasterBase__preProcess(DataMasterBase_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall DataMasterBase__set_MasterKind(DataMasterBase_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MasterKind_k__BackingField = value;
}


void __fastcall DataMasterBase__set_MasterName(
        DataMasterBase_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MasterName_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._MasterName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall DataMasterBase___c__DisplayClass23_0_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31FEE00 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataMasterBase___c__DisplayClass23_0_object__object____Il2CppFullySharedGenericType____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_31FEE08 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1BDBAD4(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo_31FEE08 *))item->klass->vtable[4].method)(
                            item,
                            item->klass->vtable[5].methodPtr,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}


void __fastcall DataMasterBase___c__DisplayClass23_0_object__object__int____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31FED4C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataMasterBase___c__DisplayClass23_0_object__object__int____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_31FED54 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1BDBAD4(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo_31FED54 *))item->klass->vtable[4].method)(
                            item,
                            item->klass->vtable[5].methodPtr,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}


void __fastcall DataMasterBase___c__DisplayClass23_0_object__object__long____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31FED88 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataMasterBase___c__DisplayClass23_0_object__object__long____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_31FED90 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1BDBAD4(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo_31FED90 *))item->klass->vtable[4].method)(
                            item,
                            item->klass->vtable[5].methodPtr,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}


void __fastcall DataMasterBase___c__DisplayClass23_0_object__object__object____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31FEDC4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataMasterBase___c__DisplayClass23_0_object__object__object____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_31FEDCC *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1BDBAD4(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo_31FEDCC *))item->klass->vtable[4].method)(
                            item,
                            item->klass->vtable[5].methodPtr,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}


void __fastcall DataMasterBase___c_object__object____Il2CppFullySharedGenericType____cctor(
        const MethodInfo_31FA480 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  __int64 v8; // x0
  void (__fastcall *v9)(__int64, _QWORD); // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C2BF08();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C2BF08();
  v4 = sub_1BDBAC4(v3);
  v5 = (__int64)method->klass;
  v6 = v4;
  v7 = *(_WORD *)(v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = (__int64)method->klass;
  }
  else
  {
    v8 = sub_1C2BF08();
    v5 = (__int64)method->klass;
    v7 = *(_WORD *)(v5 + 309);
  }
  v9 = **(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(v8 + 192) + 8LL);
  if ( (v7 & 1) == 0 )
    v5 = sub_1C2BF08();
  v9(v6, *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL));
  v12 = (__int64)method->klass;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C2BF08();
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C2BF08();
  **(_QWORD **)(v13 + 184) = v6;
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C2BF08();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C2BF08();
  sub_1BDB81C(*(CGThumbnailListItem_o **)(v15 + 184), v6, v10, v11);
}


void __fastcall DataMasterBase___c_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31FA574 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataMasterBase___c_object__object____Il2CppFullySharedGenericType____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31FA57C *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object____Il2CppFullySharedGenericType____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31FA580 *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__int____cctor(const MethodInfo_31FA21C *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C2BF08();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C2BF08();
  v4 = (Il2CppObject *)sub_1BDBAC4(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C2BF08();
  System_Object___ctor(v4, 0LL);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C2BF08();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C2BF08();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C2BF08();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C2BF08();
  sub_1BDB81C(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall DataMasterBase___c_object__object__int____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31FA2D8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataMasterBase___c_object__object__int____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31FA2E0 *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__int____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31FA2E4 *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__long____cctor(const MethodInfo_31FA2E8 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C2BF08();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C2BF08();
  v4 = (Il2CppObject *)sub_1BDBAC4(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C2BF08();
  System_Object___ctor(v4, 0LL);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C2BF08();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C2BF08();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C2BF08();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C2BF08();
  sub_1BDB81C(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall DataMasterBase___c_object__object__long____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31FA3A4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataMasterBase___c_object__object__long____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31FA3AC *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__long____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31FA3B0 *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__object____cctor(const MethodInfo_31FA3B4 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C2BF08();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C2BF08();
  v4 = (Il2CppObject *)sub_1BDBAC4(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C2BF08();
  System_Object___ctor(v4, 0LL);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C2BF08();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C2BF08();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C2BF08();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C2BF08();
  sub_1BDB81C(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall DataMasterBase___c_object__object__object____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31FA470 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataMasterBase___c_object__object__object____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31FA478 *method)
{
  ;
}


void __fastcall DataMasterBase___c_object__object__object____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_31FA47C *method)
{
  ;
}