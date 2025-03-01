void __fastcall SyncWidget___ctor(SyncWidget_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  __int64 v10; // x1
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  struct SyncWidget_SyncParamType_array **v15; // x8
  struct SyncWidget_SyncParamType_array *v16; // x1
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  long double v24; // q0
  _QWORD *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x0
  struct System_Action_array **v29; // x8
  struct System_Action_array *v30; // x1

  if ( (byte_4BFECD3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Empty_Action___, method);
    sub_1C2E12C(&Method_System_Array_Empty_SyncWidget_SyncParamType___, v10);
    byte_4BFECD3 = 1;
  }
  v11 = Method_System_Array_Empty_SyncWidget_SyncParamType___;
  v12 = *((_QWORD *)Method_System_Array_Empty_SyncWidget_SyncParamType___ + 7);
  if ( !v12 )
  {
    sub_1C80064(Method_System_Array_Empty_SyncWidget_SyncParamType___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C80008(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C80008(inited);
  v15 = *(struct SyncWidget_SyncParamType_array ***)(v14 + 184);
  v16 = *v15;
  this->fields.syncParamTypeArray = *v15;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.syncParamTypeArray, (int64_t)v16, v2, v3, v4, v5, v6, v7);
  if ( !byte_4BF7C8A )
  {
    sub_1C2E12C(&UnityEngine_Vector2_TypeInfo, v17);
    byte_4BF7C8A = 1;
  }
  *(struct UnityEngine_Vector2_o *)&v24 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.blankSize = *(struct UnityEngine_Vector2_o *)&v24;
  v25 = Method_System_Array_Empty_Action___;
  v26 = *((_QWORD *)Method_System_Array_Empty_Action___ + 7);
  if ( !v26 )
  {
    sub_1C80064(Method_System_Array_Empty_Action___);
    v26 = v25[7];
  }
  v27 = *(_QWORD *)(v26 + 16);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C80008(v24);
  if ( !*(_DWORD *)(v27 + 224) )
    v24 = j_il2cpp_runtime_class_init_0(v27);
  v28 = *(_QWORD *)(v25[7] + 16LL);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C80008(v24);
  v29 = *(struct System_Action_array ***)(v28 + 184);
  v30 = *v29;
  this->fields.syncActionArray = *v29;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.syncActionArray, (int64_t)v30, v18, v19, v20, v21, v22, v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SyncWidget__Awake(SyncWidget_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_IEnumerable_TSource__o *syncParamTypeArray; // x20
  System_Func_T__TResult__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BFECD0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___, v3);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_Action___, v4);
    sub_1C2E12C(&System_Func_SyncWidget_SyncParamType__Action__TypeInfo, v5);
    byte_4BFECD0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.self = (struct UIWidget_o *)Component_object;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.self, (int64_t)Component_object, v7, v8, v9, v10, v11, v12);
  syncParamTypeArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.syncParamTypeArray;
  v14 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_SyncWidget_SyncParamType__Action__TypeInfo);
  System_Func_Int32Enum__object____ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._5_InitSync.methodPtr,
    0LL);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_Int32Enum__object_(
                                                               syncParamTypeArray,
                                                               (System_Func_TSource__TResult__o *)v14,
                                                               (const MethodInfo_3002380 *)Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___);
  v16 = System_Linq_Enumerable__ToArray_object_(
          v15,
          (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_Action___);
  this->fields.syncActionArray = (struct System_Action_array *)v16;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.syncActionArray, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  ((void (__fastcall *)(SyncWidget_o *, Il2CppMethodPointer))this->klass->vtable._5_InitSync.method)(
    this,
    this->klass->vtable._6_DisabledSync.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
System_Action_o *__fastcall SyncWidget__ConvertTypeToAction(SyncWidget_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Action_o *v11; // x0
  __int64 *v12; // x8
  SyncWidget___c_c *v13; // x0
  System_Action_o *_9__9_3; // x19
  Il2CppObject *v15; // x20
  struct SyncWidget___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Action_o *result; // x0
  System_Action_o *v24; // x20

  if ( (byte_4BFECD2 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1C2E12C(&Method_SyncWidget_SyncColorAlpha__, v5);
    sub_1C2E12C(&Method_SyncWidget__ConvertTypeToAction_b__9_0__, v6);
    sub_1C2E12C(&Method_SyncWidget__ConvertTypeToAction_b__9_1__, v7);
    sub_1C2E12C(&Method_SyncWidget__ConvertTypeToAction_b__9_2__, v8);
    sub_1C2E12C(&Method_SyncWidget___c__ConvertTypeToAction_b__9_3__, v9);
    sub_1C2E12C(&SyncWidget___c_TypeInfo, v10);
    byte_4BFECD2 = 1;
  }
  switch ( type )
  {
    case 0:
      v11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      v12 = &Method_SyncWidget__ConvertTypeToAction_b__9_0__;
      goto LABEL_15;
    case 1:
      v11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      v12 = &Method_SyncWidget__ConvertTypeToAction_b__9_1__;
      goto LABEL_15;
    case 2:
      v11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      v12 = &Method_SyncWidget__ConvertTypeToAction_b__9_2__;
      goto LABEL_15;
    case 3:
      v11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      v12 = &Method_SyncWidget_SyncColorAlpha__;
LABEL_15:
      v24 = v11;
      System_Action___ctor(v11, (Il2CppObject *)this, *v12, 0LL);
      result = v24;
      break;
    default:
      v13 = SyncWidget___c_TypeInfo;
      if ( !SyncWidget___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo);
        v13 = SyncWidget___c_TypeInfo;
      }
      _9__9_3 = v13->static_fields->__9__9_3;
      if ( !_9__9_3 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = SyncWidget___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__9_3 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(_9__9_3, v15, Method_SyncWidget___c__ConvertTypeToAction_b__9_3__, 0LL);
        static_fields = SyncWidget___c_TypeInfo->static_fields;
        static_fields->__9__9_3 = _9__9_3;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&static_fields->__9__9_3,
          (int64_t)_9__9_3,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      result = _9__9_3;
      break;
  }
  return result;
}


bool __fastcall SyncWidget__DisabledSync(SyncWidget_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall SyncWidget__InitSync(SyncWidget_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall SyncWidget__LateUpdate(SyncWidget_o *this, const MethodInfo *method)
{
  SyncWidget__Sync(this, method);
}


void __fastcall SyncWidget__Sync(SyncWidget_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *self; // x20
  UnityEngine_Object_o *syncFrom; // x20
  System_Collections_Generic_IEnumerable_T__o *syncActionArray; // x19
  SyncWidget___c_c *v10; // x0
  System_Action_object__o *_9__8_0; // x20
  Il2CppObject *v12; // x21
  struct SyncWidget___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BFECD1 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_Action__TypeInfo, method);
    sub_1C2E12C(&Method_BasicHelper_ForEach_Action___, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&Method_SyncWidget___c__Sync_b__8_0__, v5);
    sub_1C2E12C(&SyncWidget___c_TypeInfo, v6);
    byte_4BFECD1 = 1;
  }
  self = (UnityEngine_Object_o *)this->fields.self;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(self, 0LL, 0LL) )
  {
    syncFrom = (UnityEngine_Object_o *)this->fields.syncFrom;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(syncFrom, 0LL, 0LL)
      && (((__int64 (__fastcall *)(SyncWidget_o *, void *))this->klass->vtable._6_DisabledSync.method)(
            this,
            this->klass[1]._1.image) & 1) == 0 )
    {
      syncActionArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.syncActionArray;
      v10 = SyncWidget___c_TypeInfo;
      if ( !SyncWidget___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo);
        v10 = SyncWidget___c_TypeInfo;
      }
      _9__8_0 = (System_Action_object__o *)v10->static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = SyncWidget___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__8_0 = (System_Action_object__o *)sub_1C2E378(System_Action_Action__TypeInfo);
        System_Action_object____ctor(_9__8_0, v12, Method_SyncWidget___c__Sync_b__8_0__, 0LL);
        static_fields = SyncWidget___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Action_Action__o *)_9__8_0;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
          (int64_t)_9__8_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      BasicHelper__ForEach_object_(
        syncActionArray,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_Action___);
    }
  }
}


void __fastcall SyncWidget__SyncColorAlpha(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *self; // x9
  struct UIWidget_o *syncFrom; // x8
  SyncWidget_o *v4; // x19
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v9; // s12
  float v10; // s1
  float v11; // s2
  float v12; // s0
  float Epsilon; // s3
  struct UIWidget_o *v14; // x8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  self = this->fields.self;
  if ( !self )
    goto LABEL_14;
  syncFrom = this->fields.syncFrom;
  v4 = this;
  if ( !syncFrom )
    goto LABEL_14;
  r = self->fields.mColor.fields.r;
  g = self->fields.mColor.fields.g;
  b = self->fields.mColor.fields.b;
  a = self->fields.mColor.fields.a;
  v9 = syncFrom->fields.mColor.fields.a;
  if ( !byte_4BF7D95 )
  {
    this = (SyncWidget_o *)sub_1C2E12C(&UnityEngine_Mathf_TypeInfo, method);
    byte_4BF7D95 = 1;
  }
  v10 = fabsf(a);
  v11 = fabsf(v9);
  if ( v10 <= v11 )
    v10 = v11;
  v12 = v10 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v10 * 0.000001) <= (float)(Epsilon * 8.0) )
    v12 = Epsilon * 8.0;
  if ( vabds_f32(v9, a) >= v12 )
  {
    v14 = v4->fields.syncFrom;
    if ( v14 )
    {
      this = (SyncWidget_o *)v4->fields.self;
      if ( this )
      {
        v15.fields.a = v14->fields.mColor.fields.a;
        v15.fields.r = r;
        v15.fields.g = g;
        v15.fields.b = b;
        UIWidget__set_color((UIWidget_o *)this, v15, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1C2E388(this, method);
  }
}


void __fastcall SyncWidget___ConvertTypeToAction_b__9_0(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v3; // x8
  int32_t mWidth; // w9
  float v5; // s0
  int v6; // w8

  syncFrom = this->fields.syncFrom;
  if ( !syncFrom || (v3 = this, (this = (SyncWidget_o *)this->fields.self) == 0LL) )
    sub_1C2E388(this, method);
  mWidth = syncFrom->fields.mWidth;
  v5 = v3->fields.blankSize.fields.x + v3->fields.blankSize.fields.x;
  v6 = (int)v5;
  if ( v5 == INFINITY )
    v6 = 0x80000000;
  UIWidget__set_width((UIWidget_o *)this, v6 + mWidth, 0LL);
}


void __fastcall SyncWidget___ConvertTypeToAction_b__9_1(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v3; // x8
  int32_t mHeight; // w9
  float v5; // s0
  int v6; // w8

  syncFrom = this->fields.syncFrom;
  if ( !syncFrom || (v3 = this, (this = (SyncWidget_o *)this->fields.self) == 0LL) )
    sub_1C2E388(this, method);
  mHeight = syncFrom->fields.mHeight;
  v5 = v3->fields.blankSize.fields.y + v3->fields.blankSize.fields.y;
  v6 = (int)v5;
  if ( v5 == INFINITY )
    v6 = 0x80000000;
  UIWidget__set_height((UIWidget_o *)this, v6 + mHeight, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SyncWidget___ConvertTypeToAction_b__9_2(SyncWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *self; // x0
  UnityEngine_Component_o *syncFrom; // x8
  UnityEngine_Transform_o *v5; // x19
  int v6; // s0

  self = (UnityEngine_Component_o *)this->fields.self;
  if ( !self
    || (self = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(self, 0LL),
        (syncFrom = (UnityEngine_Component_o *)this->fields.syncFrom) == 0LL)
    || (v5 = (UnityEngine_Transform_o *)self,
        (self = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(syncFrom, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)self, 0LL), !v5) )
  {
    sub_1C2E388(self, method);
  }
  UnityEngine_Transform__set_localScale(v5, *(UnityEngine_Vector3_o *)&v6, 0LL);
}


void __fastcall SyncWidget___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFECD4 & 1) == 0 )
  {
    sub_1C2E12C(&SyncWidget___c_TypeInfo, v1);
    byte_4BFECD4 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(SyncWidget___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SyncWidget___c_TypeInfo->static_fields->__9 = (struct SyncWidget___c_o *)v2;
  sub_1C2E0D0((PartyOrganizationUtility_o *)SyncWidget___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
}


void __fastcall SyncWidget___c___ctor(SyncWidget___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SyncWidget___c___ConvertTypeToAction_b__9_3(SyncWidget___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SyncWidget___c___Sync_b__8_0(SyncWidget___c_o *this, System_Action_o *x, const MethodInfo *method)
{
  ActionExtensions__Call(x, 0LL);
}