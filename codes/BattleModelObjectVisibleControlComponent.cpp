void __fastcall BattleModelObjectVisibleControlComponent___ctor(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  this->fields.executeTiming = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent__Awake(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleModelObjectVisibleControlComponent___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x19
  System_Action_object__o *_9__5_0; // x20
  Il2CppObject *v9; // x21
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A6F2B1 & 1) == 0 )
  {
    sub_1B90010(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      method);
    sub_1B90010(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v3);
    sub_1B90010(&Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__, v4);
    sub_1B90010(&BattleModelObjectVisibleControlComponent___c_TypeInfo, v5);
    byte_4A6F2B1 = 1;
  }
  v6 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
  if ( !BattleModelObjectVisibleControlComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleModelObjectVisibleControlComponent___c_TypeInfo);
    v6 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  }
  _9__5_0 = (System_Action_object__o *)v6->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__5_0 = (System_Action_object__o *)sub_1B9025C(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    System_Action_object____ctor(_9__5_0, v9, Method_BattleModelObjectVisibleControlComponent___c__Awake_b__5_0__, 0LL);
    static_fields = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__o *)_9__5_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v11, v12);
  }
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)_9__5_0,
    (const MethodInfo_2E7B5D4 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
}


bool __fastcall BattleModelObjectVisibleControlComponent__CheckTiming(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_array *visibleChangeObjects; // x8

  visibleChangeObjects = this->fields.visibleChangeObjects;
  if ( !visibleChangeObjects )
    sub_1B9026C(this, timing);
  return *(_QWORD *)&visibleChangeObjects->max_length && this->fields.executeTiming == timing;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleModelObjectVisibleControlComponent__EndProc(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x21
  System_Action_object__o *v8; // x20

  v4 = this;
  if ( (byte_4A6F2B3 & 1) == 0 )
  {
    sub_1B90010(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      *(_QWORD *)&timing);
    sub_1B90010(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v5);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_1B90010(
                                                           &Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__,
                                                           v6);
    byte_4A6F2B3 = 1;
  }
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)v4->fields.visibleChangeObjects;
  if ( !visibleChangeObjects )
    sub_1B9026C(this, *(_QWORD *)&timing);
  if ( !visibleChangeObjects[1].monitor || v4->fields.executeTiming != timing )
    return 0;
  v8 = (System_Action_object__o *)sub_1B9025C(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)v4,
    Method_BattleModelObjectVisibleControlComponent__EndProc_b__8_0__,
    0LL);
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)v8,
    (const MethodInfo_2E7B5D4 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleModelObjectVisibleControlComponent__ExecuteProc(
        BattleModelObjectVisibleControlComponent_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x21
  System_Action_object__o *v8; // x20

  v4 = this;
  if ( (byte_4A6F2B2 & 1) == 0 )
  {
    sub_1B90010(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      *(_QWORD *)&timing);
    sub_1B90010(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v5);
    this = (BattleModelObjectVisibleControlComponent_o *)sub_1B90010(
                                                           &Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__,
                                                           v6);
    byte_4A6F2B2 = 1;
  }
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)v4->fields.visibleChangeObjects;
  if ( !visibleChangeObjects )
    sub_1B9026C(this, *(_QWORD *)&timing);
  if ( !visibleChangeObjects[1].monitor || v4->fields.executeTiming != timing )
    return 0;
  v8 = (System_Action_object__o *)sub_1B9025C(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)v4,
    Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__7_0__,
    0LL);
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)v8,
    (const MethodInfo_2E7B5D4 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return 1;
}


bool __fastcall BattleModelObjectVisibleControlComponent__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x19
  System_Action_object__o *v10; // x21

  if ( (byte_4A6F2B4 & 1) == 0 )
  {
    sub_1B90010(
      &System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo,
      method);
    sub_1B90010(
      &Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___,
      v3);
    sub_1B90010(&Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__, v4);
    sub_1B90010(&BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo, v5);
    byte_4A6F2B4 = 1;
  }
  v6 = sub_1B9025C(BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_1B9026C(v7, v8);
  *(_BYTE *)(v6 + 16) = 0;
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
  v10 = (System_Action_object__o *)sub_1B9025C(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
  System_Action_object____ctor(
    v10,
    (Il2CppObject *)v6,
    Method_BattleModelObjectVisibleControlComponent___c__DisplayClass9_0__IsSkinnedMesh_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)v10,
    (const MethodInfo_2E7B5D4 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return *(_BYTE *)(v6 + 16);
}


void __fastcall BattleModelObjectVisibleControlComponent___EndProc_b__8_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, !this->fields.visible, method);
}


void __fastcall BattleModelObjectVisibleControlComponent___ExecuteProc_b__7_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, this->fields.visible, method);
}


void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A6F2B8 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, method);
    sub_1B90010(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v3);
    byte_4A6F2B8 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.skinnedMeshList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.skinnedMeshList, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__Initialize(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *skinnedMeshList; // x0
  Il2CppObject *ComponentInChildren_object; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 klass_low; // x10
  __int64 v14; // x8

  if ( (byte_4A6F2B5 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___, method);
    sub_1B90010(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    byte_4A6F2B5 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    skinnedMeshList = this->fields.gameObject;
    if ( skinnedMeshList )
    {
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     skinnedMeshList,
                                     (const MethodInfo_2EDD9CC *)Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object, 0LL, 0LL) )
        return;
      skinnedMeshList = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
      if ( skinnedMeshList )
      {
        v11 = *(_QWORD *)&skinnedMeshList->fields.m_CachedPtr;
        v12 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
        ++HIDWORD(skinnedMeshList[1].klass);
        if ( v11 )
        {
          klass_low = SLODWORD(skinnedMeshList[1].klass);
          if ( (unsigned int)klass_low >= *(_DWORD *)(v11 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)skinnedMeshList,
              ComponentInChildren_object,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = v11 + 8 * klass_low;
            LODWORD(skinnedMeshList[1].klass) = klass_low + 1;
            *(_QWORD *)(v14 + 32) = ComponentInChildren_object;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)ComponentInChildren_object, v9, v10);
          }
          return;
        }
      }
    }
    sub_1B9026C(skinnedMeshList, v6);
  }
}


bool __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *v2; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *skinnedMeshList; // x8

  v2 = this;
  if ( (byte_4A6F2B7 & 1) == 0 )
  {
    this = (BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *)sub_1B90010(
                                                                                          &Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__,
                                                                                          method);
    byte_4A6F2B7 = 1;
  }
  skinnedMeshList = v2->fields.skinnedMeshList;
  if ( !skinnedMeshList )
    sub_1B9026C(this, method);
  return skinnedMeshList->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A6F2B6 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, flg);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v7);
    byte_4A6F2B6 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
          this,
          (const MethodInfo *)flg) )
  {
    gameObject = this->fields.gameObject;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, flg, 0LL);
      return;
    }
LABEL_14:
    sub_1B9026C(gameObject, v8);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
  if ( !gameObject )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)gameObject,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1B9026C(0LL, v10);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v11.fields._current, flg, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
}


void __fastcall BattleModelObjectVisibleControlComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6F2B9 & 1) == 0 )
  {
    sub_1B90010(&BattleModelObjectVisibleControlComponent___c_TypeInfo, v1);
    byte_4A6F2B9 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(BattleModelObjectVisibleControlComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields->__9 = (struct BattleModelObjectVisibleControlComponent___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleModelObjectVisibleControlComponent___c___ctor(
        BattleModelObjectVisibleControlComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent___c___Awake_b__5_0(
        BattleModelObjectVisibleControlComponent___c_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__Initialize(x, (const MethodInfo *)x);
}


void __fastcall BattleModelObjectVisibleControlComponent___c__DisplayClass9_0___ctor(
        BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleModelObjectVisibleControlComponent___c__DisplayClass9_0___IsSkinnedMesh_b__0(
        BattleModelObjectVisibleControlComponent___c__DisplayClass9_0_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  bool isSkinned; // w20

  if ( !x )
    sub_1B9026C(this, 0LL);
  isSkinned = this->fields.isSkinned;
  this->fields.isSkinned = isSkinned | BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
                                         x,
                                         (const MethodInfo *)x);
}