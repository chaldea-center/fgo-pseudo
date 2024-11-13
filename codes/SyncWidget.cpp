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
  __int64 v11; // x2
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  struct SyncWidget_SyncParamType_array **v16; // x8
  struct SyncWidget_SyncParamType_array *v17; // x1
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  long double v25; // q0
  _QWORD *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x0
  struct System_Action_array **v30; // x8
  struct System_Action_array *v31; // x1

  if ( (byte_4B176C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_Action___, method, v2);
    sub_1BCA7E0(&Method_System_Array_Empty_SyncWidget_SyncParamType___, v10, v11);
    byte_4B176C1 = 1;
  }
  v12 = Method_System_Array_Empty_SyncWidget_SyncParamType___;
  v13 = *((_QWORD *)Method_System_Array_Empty_SyncWidget_SyncParamType___ + 7);
  if ( !v13 )
  {
    sub_1C1C718(Method_System_Array_Empty_SyncWidget_SyncParamType___, method);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14, method);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC(inited);
  v16 = *(struct SyncWidget_SyncParamType_array ***)(v15 + 184);
  v17 = *v16;
  this->fields.syncParamTypeArray = *v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.syncParamTypeArray, (int64_t)v17, v2, v3, v4, v5, v6, v7);
  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v18, v19);
    byte_4B108BA = 1;
  }
  *(struct UnityEngine_Vector2_o *)&v25 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.blankSize = *(struct UnityEngine_Vector2_o *)&v25;
  v26 = Method_System_Array_Empty_Action___;
  v27 = *((_QWORD *)Method_System_Array_Empty_Action___ + 7);
  if ( !v27 )
  {
    sub_1C1C718(Method_System_Array_Empty_Action___, v18);
    v27 = v26[7];
  }
  v28 = *(_QWORD *)(v27 + 16);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C1C6BC(v25);
  if ( !*(_DWORD *)(v28 + 224) )
    v25 = j_il2cpp_runtime_class_init_0(v28, v18);
  v29 = *(_QWORD *)(v26[7] + 16LL);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1C1C6BC(v25);
  v30 = *(struct System_Action_array ***)(v29 + 184);
  v31 = *v30;
  this->fields.syncActionArray = *v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.syncActionArray, (int64_t)v31, v19, v20, v21, v22, v23, v24);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SyncWidget__Awake(SyncWidget_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *syncParamTypeArray; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Func_T__TResult__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Object_array *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B176BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_Action___, v6, v7);
    sub_1BCA7E0(&System_Func_SyncWidget_SyncParamType__Action__TypeInfo, v8, v9);
    byte_4B176BE = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.self = (struct UIWidget_o *)Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.self, (int64_t)Component_object, v11, v12, v13, v14, v15, v16);
  syncParamTypeArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.syncParamTypeArray;
  v21 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_SyncWidget_SyncParamType__Action__TypeInfo, v18, v19, v20);
  System_Func_Int32Enum__object____ctor(
    v21,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._5_InitSync.methodPtr,
    0LL);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_Int32Enum__object_(
                                                               syncParamTypeArray,
                                                               (System_Func_TSource__TResult__o *)v21,
                                                               (const MethodInfo_2F42260 *)Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___);
  v23 = System_Linq_Enumerable__ToArray_object_(
          v22,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_Action___);
  this->fields.syncActionArray = (struct System_Action_array *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.syncActionArray, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  ((void (__fastcall *)(SyncWidget_o *, Il2CppMethodPointer))this->klass->vtable._5_InitSync.method)(
    this,
    this->klass->vtable._6_DisabledSync.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
System_Action_o *__fastcall SyncWidget__ConvertTypeToAction(SyncWidget_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x0
  __int64 *v19; // x8
  SyncWidget___c_c *v20; // x0
  System_Action_o *_9__9_3; // x19
  Il2CppObject *v22; // x20
  struct SyncWidget___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Action_o *result; // x0
  System_Action_o *v31; // x20

  if ( (byte_4B176C0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_SyncWidget_SyncColorAlpha__, v6, v7);
    sub_1BCA7E0(&Method_SyncWidget__ConvertTypeToAction_b__9_0__, v8, v9);
    sub_1BCA7E0(&Method_SyncWidget__ConvertTypeToAction_b__9_1__, v10, v11);
    sub_1BCA7E0(&Method_SyncWidget__ConvertTypeToAction_b__9_2__, v12, v13);
    sub_1BCA7E0(&Method_SyncWidget___c__ConvertTypeToAction_b__9_3__, v14, v15);
    sub_1BCA7E0(&SyncWidget___c_TypeInfo, v16, v17);
    byte_4B176C0 = 1;
  }
  switch ( type )
  {
    case 0:
      v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&type, method, v3);
      v19 = &Method_SyncWidget__ConvertTypeToAction_b__9_0__;
      goto LABEL_15;
    case 1:
      v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&type, method, v3);
      v19 = &Method_SyncWidget__ConvertTypeToAction_b__9_1__;
      goto LABEL_15;
    case 2:
      v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&type, method, v3);
      v19 = &Method_SyncWidget__ConvertTypeToAction_b__9_2__;
      goto LABEL_15;
    case 3:
      v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&type, method, v3);
      v19 = &Method_SyncWidget_SyncColorAlpha__;
LABEL_15:
      v31 = v18;
      System_Action___ctor(v18, (Il2CppObject *)this, *v19, 0LL);
      result = v31;
      break;
    default:
      v20 = SyncWidget___c_TypeInfo;
      if ( !SyncWidget___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo, *(_QWORD *)&type);
        v20 = SyncWidget___c_TypeInfo;
      }
      _9__9_3 = v20->static_fields->__9__9_3;
      if ( !_9__9_3 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20, *(_QWORD *)&type);
          v20 = SyncWidget___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__9_3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&type, method, v3);
        System_Action___ctor(_9__9_3, v22, Method_SyncWidget___c__ConvertTypeToAction_b__9_3__, 0LL);
        static_fields = SyncWidget___c_TypeInfo->static_fields;
        static_fields->__9__9_3 = _9__9_3;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__9_3,
          (int64_t)_9__9_3,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *self; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *syncFrom; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_IEnumerable_T__o *syncActionArray; // x19
  SyncWidget___c_c *v19; // x0
  System_Action_object__o *_9__8_0; // x20
  Il2CppObject *v21; // x21
  struct SyncWidget___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B176BF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_Action__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_Action___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SyncWidget___c__Sync_b__8_0__, v8, v9);
    sub_1BCA7E0(&SyncWidget___c_TypeInfo, v10, v11);
    byte_4B176BF = 1;
  }
  self = (UnityEngine_Object_o *)this->fields.self;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(self, 0LL, 0LL) )
  {
    syncFrom = (UnityEngine_Object_o *)this->fields.syncFrom;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( !UnityEngine_Object__op_Equality(syncFrom, 0LL, 0LL)
      && (((__int64 (__fastcall *)(SyncWidget_o *, void *))this->klass->vtable._6_DisabledSync.method)(
            this,
            this->klass[1]._1.image) & 1) == 0 )
    {
      syncActionArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.syncActionArray;
      v19 = SyncWidget___c_TypeInfo;
      if ( !SyncWidget___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo, v15);
        v19 = SyncWidget___c_TypeInfo;
      }
      _9__8_0 = (System_Action_object__o *)v19->static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19, v15);
          v19 = SyncWidget___c_TypeInfo;
        }
        v21 = (Il2CppObject *)v19->static_fields->__9;
        _9__8_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v15, v16, v17);
        System_Action_object____ctor(_9__8_0, v21, Method_SyncWidget___c__Sync_b__8_0__, 0LL);
        static_fields = SyncWidget___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Action_Action__o *)_9__8_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
          (int64_t)_9__8_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      BasicHelper__ForEach_object_(
        syncActionArray,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_Action___);
    }
  }
}


void __fastcall SyncWidget__SyncColorAlpha(SyncWidget_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UIWidget_o *self; // x9
  struct UIWidget_o *syncFrom; // x8
  SyncWidget_o *v5; // x19
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v10; // s12
  float v11; // s1
  float v12; // s2
  float v13; // s0
  float Epsilon; // s3
  struct UIWidget_o *v15; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  self = this->fields.self;
  if ( !self )
    goto LABEL_14;
  syncFrom = this->fields.syncFrom;
  v5 = this;
  if ( !syncFrom )
    goto LABEL_14;
  r = self->fields.mColor.fields.r;
  g = self->fields.mColor.fields.g;
  b = self->fields.mColor.fields.b;
  a = self->fields.mColor.fields.a;
  v10 = syncFrom->fields.mColor.fields.a;
  if ( !byte_4B109C5 )
  {
    this = (SyncWidget_o *)sub_1BCA7E0(&UnityEngine_Mathf_TypeInfo, method, v2);
    byte_4B109C5 = 1;
  }
  v11 = fabsf(a);
  v12 = fabsf(v10);
  if ( v11 <= v12 )
    v11 = v12;
  v13 = v11 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v11 * 0.000001) <= (float)(Epsilon * 8.0) )
    v13 = Epsilon * 8.0;
  if ( vabds_f32(v10, a) >= v13 )
  {
    v15 = v5->fields.syncFrom;
    if ( v15 )
    {
      this = (SyncWidget_o *)v5->fields.self;
      if ( this )
      {
        v16.fields.a = v15->fields.mColor.fields.a;
        v16.fields.r = r;
        v16.fields.g = g;
        v16.fields.b = b;
        UIWidget__set_color((UIWidget_o *)this, v16, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(self, method);
  }
  UnityEngine_Transform__set_localScale(v5, *(UnityEngine_Vector3_o *)&v6, 0LL);
}


void __fastcall SyncWidget___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B176C2 & 1) == 0 )
  {
    sub_1BCA7E0(&SyncWidget___c_TypeInfo, v1, v2);
    byte_4B176C2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SyncWidget___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SyncWidget___c_TypeInfo->static_fields->__9 = (struct SyncWidget___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SyncWidget___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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