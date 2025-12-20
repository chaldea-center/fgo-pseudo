void SyncWidget___ctor(SyncWidget_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct SyncWidget_SyncParamType_array **v14; // x8
  struct SyncWidget_SyncParamType_array *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  long double v22; // q0
  _QWORD *v23; // x20
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  struct System_Action_array **v27; // x8
  struct System_Action_array *v28; // x1

  if ( (byte_4D2E080 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_Action___);
    sub_1C94098(&Method_System_Array_Empty_SyncWidget_SyncParamType___);
    byte_4D2E080 = 1;
  }
  v10 = Method_System_Array_Empty_SyncWidget_SyncParamType___;
  v11 = *((_QWORD *)Method_System_Array_Empty_SyncWidget_SyncParamType___ + 7);
  if ( !v11 )
  {
    sub_1C6A188(Method_System_Array_Empty_SyncWidget_SyncParamType___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C6A12C(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C6A12C(inited);
  v14 = *(struct SyncWidget_SyncParamType_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.syncParamTypeArray = *v14;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.syncParamTypeArray, (int32_t)v15, v2, v3, v4, v5, v6, v7);
  if ( !byte_4D25DF9 )
  {
    sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    byte_4D25DF9 = 1;
  }
  *(struct UnityEngine_Vector2_o *)&v22 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.blankSize = *(struct UnityEngine_Vector2_o *)&v22;
  v23 = Method_System_Array_Empty_Action___;
  v24 = *((_QWORD *)Method_System_Array_Empty_Action___ + 7);
  if ( !v24 )
  {
    sub_1C6A188(Method_System_Array_Empty_Action___);
    v24 = v23[7];
  }
  v25 = *(_QWORD *)(v24 + 16);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C6A12C(v22);
  if ( !*(_DWORD *)(v25 + 224) )
    v22 = j_il2cpp_runtime_class_init_0(v25);
  v26 = *(_QWORD *)(v23[7] + 16LL);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C6A12C(v22);
  v27 = *(struct System_Action_array ***)(v26 + 184);
  v28 = *v27;
  this->fields.syncActionArray = *v27;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.syncActionArray, (int32_t)v28, v16, v17, v18, v19, v20, v21);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SyncWidget__Awake(SyncWidget_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_IEnumerable_TSource__o *syncParamTypeArray; // x20
  System_Func_T__TResult__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Object_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2E07D & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_Action___);
    sub_1C94098(&System_Func_SyncWidget_SyncParamType__Action__TypeInfo);
    byte_4D2E07D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.self = (struct UIWidget_o *)Component_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.self, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  syncParamTypeArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.syncParamTypeArray;
  v11 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_SyncWidget_SyncParamType__Action__TypeInfo);
  System_Func_Int32Enum__object____ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._4_ConvertTypeToAction.method,
    0);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_Int32Enum__object_(
                                                               syncParamTypeArray,
                                                               (System_Func_TSource__TResult__o *)v11,
                                                               (const MethodInfo_31D12F4 *)Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___);
  v13 = System_Linq_Enumerable__ToArray_object_(
          v12,
          (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_Action___);
  this->fields.syncActionArray = (struct System_Action_array *)v13;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.syncActionArray, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  ((void (__fastcall *)(SyncWidget_o *, const MethodInfo *))this->klass->vtable._5_InitSync.methodPtr)(
    this,
    this->klass->vtable._5_InitSync.method);
}


System_Action_o *SyncWidget__ConvertTypeToAction(SyncWidget_o *this, int32_t type, const MethodInfo *method)
{
  System_Action_o *v5; // x0
  intptr_t *v6; // x8
  SyncWidget___c_c *v7; // x0
  System_Action_o *_9__9_3; // x19
  Il2CppObject *v9; // x20
  struct SyncWidget___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Action_o *result; // x0
  System_Action_o *v18; // x20

  if ( (byte_4D2E07F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SyncWidget_SyncColorAlpha__);
    sub_1C94098(&Method_SyncWidget__ConvertTypeToAction_b__9_0__);
    sub_1C94098(&Method_SyncWidget__ConvertTypeToAction_b__9_1__);
    sub_1C94098(&Method_SyncWidget__ConvertTypeToAction_b__9_2__);
    sub_1C94098(&Method_SyncWidget___c__ConvertTypeToAction_b__9_3__);
    sub_1C94098(&SyncWidget___c_TypeInfo);
    byte_4D2E07F = 1;
  }
  switch ( type )
  {
    case 0:
      v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      v6 = &Method_SyncWidget__ConvertTypeToAction_b__9_0__;
      goto LABEL_15;
    case 1:
      v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      v6 = &Method_SyncWidget__ConvertTypeToAction_b__9_1__;
      goto LABEL_15;
    case 2:
      v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      v6 = &Method_SyncWidget__ConvertTypeToAction_b__9_2__;
      goto LABEL_15;
    case 3:
      v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      v6 = &Method_SyncWidget_SyncColorAlpha__;
LABEL_15:
      v18 = v5;
      System_Action___ctor(v5, (Il2CppObject *)this, *v6, 0);
      result = v18;
      break;
    default:
      v7 = SyncWidget___c_TypeInfo;
      if ( !SyncWidget___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo);
        v7 = SyncWidget___c_TypeInfo;
      }
      _9__9_3 = v7->static_fields->__9__9_3;
      if ( !_9__9_3 )
      {
        if ( !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7);
          v7 = SyncWidget___c_TypeInfo;
        }
        v9 = (Il2CppObject *)v7->static_fields->__9;
        _9__9_3 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(_9__9_3, v9, Method_SyncWidget___c__ConvertTypeToAction_b__9_3__, 0);
        static_fields = SyncWidget___c_TypeInfo->static_fields;
        static_fields->__9__9_3 = _9__9_3;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__9_3,
          (int32_t)_9__9_3,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      result = _9__9_3;
      break;
  }
  return result;
}


bool SyncWidget__DisabledSync(SyncWidget_o *this, const MethodInfo *method)
{
  return 0;
}


void SyncWidget__InitSync(SyncWidget_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void SyncWidget__LateUpdate(SyncWidget_o *this, const MethodInfo *method)
{
  SyncWidget__Sync(this, method);
}


void SyncWidget__Sync(SyncWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *self; // x20
  UnityEngine_Object_o *syncFrom; // x20
  System_Collections_Generic_IEnumerable_T__o *syncActionArray; // x19
  SyncWidget___c_c *v6; // x0
  System_Action_object__o *_9__8_0; // x20
  Il2CppObject *v8; // x21
  struct SyncWidget___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2E07E & 1) == 0 )
  {
    sub_1C94098(&System_Action_Action__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_Action___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SyncWidget___c__Sync_b__8_0__);
    sub_1C94098(&SyncWidget___c_TypeInfo);
    byte_4D2E07E = 1;
  }
  self = (UnityEngine_Object_o *)this->fields.self;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(self, 0, 0) )
  {
    syncFrom = (UnityEngine_Object_o *)this->fields.syncFrom;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(syncFrom, 0, 0)
      && (((__int64 (__fastcall *)(SyncWidget_o *, const MethodInfo *))this->klass->vtable._6_DisabledSync.methodPtr)(
            this,
            this->klass->vtable._6_DisabledSync.method)
        & 1) == 0 )
    {
      syncActionArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.syncActionArray;
      v6 = SyncWidget___c_TypeInfo;
      if ( !SyncWidget___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo);
        v6 = SyncWidget___c_TypeInfo;
      }
      _9__8_0 = (System_Action_object__o *)v6->static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = SyncWidget___c_TypeInfo;
        }
        v8 = (Il2CppObject *)v6->static_fields->__9;
        _9__8_0 = (System_Action_object__o *)sub_1C942E4(System_Action_Action__TypeInfo);
        System_Action_object____ctor(_9__8_0, v8, Method_SyncWidget___c__Sync_b__8_0__, 0);
        static_fields = SyncWidget___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Action_Action__o *)_9__8_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0,
          (int32_t)_9__8_0,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      BasicHelper__ForEach_object_(
        syncActionArray,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_Action___);
    }
  }
}


void SyncWidget__SyncColorAlpha(SyncWidget_o *this, const MethodInfo *method)
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
  if ( !byte_4D25F1D )
  {
    this = (SyncWidget_o *)sub_1C94098(&UnityEngine_Mathf_TypeInfo);
    byte_4D25F1D = 1;
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
        UIWidget__set_color((UIWidget_o *)this, v15, 0);
        return;
      }
    }
LABEL_14:
    sub_1C942F0(this, method);
  }
}


void SyncWidget___ConvertTypeToAction_b__9_0(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v3; // x8
  int32_t mWidth; // w9
  float v5; // s0
  int v6; // w8

  syncFrom = this->fields.syncFrom;
  if ( !syncFrom || (v3 = this, (this = (SyncWidget_o *)this->fields.self) == 0) )
    sub_1C942F0(this, method);
  mWidth = syncFrom->fields.mWidth;
  v5 = v3->fields.blankSize.fields.x + v3->fields.blankSize.fields.x;
  v6 = (int)v5;
  if ( v5 == INFINITY )
    v6 = 0x80000000;
  UIWidget__set_width((UIWidget_o *)this, v6 + mWidth, 0);
}


void SyncWidget___ConvertTypeToAction_b__9_1(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v3; // x8
  int32_t mHeight; // w9
  float v5; // s0
  int v6; // w8

  syncFrom = this->fields.syncFrom;
  if ( !syncFrom || (v3 = this, (this = (SyncWidget_o *)this->fields.self) == 0) )
    sub_1C942F0(this, method);
  mHeight = syncFrom->fields.mHeight;
  v5 = v3->fields.blankSize.fields.y + v3->fields.blankSize.fields.y;
  v6 = (int)v5;
  if ( v5 == INFINITY )
    v6 = 0x80000000;
  UIWidget__set_height((UIWidget_o *)this, v6 + mHeight, 0);
}


void SyncWidget___ConvertTypeToAction_b__9_2(SyncWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *self; // x0
  UnityEngine_Component_o *syncFrom; // x8
  UnityEngine_Transform_o *v5; // x19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  self = (UnityEngine_Component_o *)this->fields.self;
  if ( !self
    || (self = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(self, 0),
        (syncFrom = (UnityEngine_Component_o *)this->fields.syncFrom) == 0)
    || (v5 = (UnityEngine_Transform_o *)self,
        (self = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(syncFrom, 0)) == 0)
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)self, 0), !v5) )
  {
    sub_1C942F0(self, method);
  }
  UnityEngine_Transform__set_localScale(v5, localScale, 0);
}


void SyncWidget___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E081 & 1) == 0 )
  {
    sub_1C94098(&SyncWidget___c_TypeInfo);
    byte_4D2E081 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(SyncWidget___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SyncWidget___c_TypeInfo->static_fields->__9 = (struct SyncWidget___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)SyncWidget___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SyncWidget___c___ctor(SyncWidget___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SyncWidget___c___ConvertTypeToAction_b__9_3(SyncWidget___c_o *this, const MethodInfo *method)
{
  ;
}


void SyncWidget___c___Sync_b__8_0(SyncWidget___c_o *this, System_Action_o *x, const MethodInfo *method)
{
  ActionExtensions__Call(x, 0);
}