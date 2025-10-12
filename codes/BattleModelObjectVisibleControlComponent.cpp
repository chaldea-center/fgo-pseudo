void BattleModelObjectVisibleControlComponent___ctor(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  this->fields.executeTiming = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleModelObjectVisibleControlComponent__Awake(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x19
  System_Action_object__o *_9__7_0; // x20
  Il2CppObject *v6; // x21
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C36D44 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    sub_1C32C20(&Method_BattleModelObjectVisibleControlComponent___c__Awake_b__7_0__);
    sub_1C32C20(&BattleModelObjectVisibleControlComponent___c_TypeInfo);
    byte_4C36D44 = 1;
  }
  v3 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
  if ( !BattleModelObjectVisibleControlComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleModelObjectVisibleControlComponent___c_TypeInfo);
    v3 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  }
  _9__7_0 = (System_Action_object__o *)v3->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__7_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    System_Action_object____ctor(_9__7_0, v6, Method_BattleModelObjectVisibleControlComponent___c__Awake_b__7_0__, 0);
    static_fields = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__o *)_9__7_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v8, v9);
  }
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
}


bool BattleModelObjectVisibleControlComponent__EndProc(
        BattleModelObjectVisibleControlComponent_o *this,
        VisibleControlInfo_o *visibleControlInfo,
        const MethodInfo *method)
{
  bool IsMatchCond; // w20
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x21
  System_Action_object__o *v7; // x22

  if ( (byte_4C36D46 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    sub_1C32C20(&Method_BattleModelObjectVisibleControlComponent__EndProc_b__10_0__);
    byte_4C36D46 = 1;
  }
  IsMatchCond = BattleModelObjectVisibleControlComponent__IsMatchCond(this, visibleControlInfo, method);
  if ( IsMatchCond )
  {
    visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
    v7 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    System_Action_object____ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattleModelObjectVisibleControlComponent__EndProc_b__10_0__,
      0);
    BasicHelper__ForEach_object_(
      visibleChangeObjects,
      (System_Action_T__o *)v7,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  }
  return IsMatchCond;
}


bool BattleModelObjectVisibleControlComponent__ExecuteProc(
        BattleModelObjectVisibleControlComponent_o *this,
        VisibleControlInfo_o *visibleControlInfo,
        const MethodInfo *method)
{
  bool IsMatchCond; // w20
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x21
  System_Action_object__o *v7; // x22

  if ( (byte_4C36D45 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    sub_1C32C20(&Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__9_0__);
    byte_4C36D45 = 1;
  }
  IsMatchCond = BattleModelObjectVisibleControlComponent__IsMatchCond(this, visibleControlInfo, method);
  if ( IsMatchCond )
  {
    visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
    v7 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    System_Action_object____ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__9_0__,
      0);
    BasicHelper__ForEach_object_(
      visibleChangeObjects,
      (System_Action_T__o *)v7,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  }
  return IsMatchCond;
}


bool BattleModelObjectVisibleControlComponent__IsMatchCond(
        BattleModelObjectVisibleControlComponent_o *this,
        VisibleControlInfo_o *visibleControlInfo,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_array *visibleChangeObjects; // x8
  int32_t treasureDeviceRangeSet; // w8
  int32_t functionTargetTypeSet; // w8

  visibleChangeObjects = this->fields.visibleChangeObjects;
  if ( !visibleChangeObjects )
    goto LABEL_12;
  if ( !visibleChangeObjects->max_length )
    return 0;
  treasureDeviceRangeSet = this->fields.treasureDeviceRangeSet;
  if ( treasureDeviceRangeSet )
  {
    if ( !visibleControlInfo )
      goto LABEL_12;
    if ( treasureDeviceRangeSet != visibleControlInfo->fields._TreasureDeviceRange_k__BackingField )
      return 0;
  }
  functionTargetTypeSet = this->fields.functionTargetTypeSet;
  if ( !functionTargetTypeSet )
  {
    if ( visibleControlInfo )
      return this->fields.executeTiming == visibleControlInfo->fields._Timing_k__BackingField;
LABEL_12:
    sub_1C32E7C(this);
  }
  if ( !visibleControlInfo )
    goto LABEL_12;
  if ( functionTargetTypeSet != visibleControlInfo->fields._FunctionActorType_k__BackingField )
    return 0;
  return this->fields.executeTiming == visibleControlInfo->fields._Timing_k__BackingField;
}


bool BattleModelObjectVisibleControlComponent__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_o *this,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent___c__DisplayClass11_0_o *v3; // x20
  __int64 v4; // x0
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x19
  System_Action_object__o *v6; // x21

  if ( (byte_4C36D47 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    sub_1C32C20(&Method_BattleModelObjectVisibleControlComponent___c__DisplayClass11_0__IsSkinnedMesh_b__0__);
    sub_1C32C20(&BattleModelObjectVisibleControlComponent___c__DisplayClass11_0_TypeInfo);
    byte_4C36D47 = 1;
  }
  v3 = (BattleModelObjectVisibleControlComponent___c__DisplayClass11_0_o *)sub_1C32E6C(BattleModelObjectVisibleControlComponent___c__DisplayClass11_0_TypeInfo);
  BattleModelObjectVisibleControlComponent___c__DisplayClass11_0___ctor(v3, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  v3->fields.isSkinned = 0;
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
  v6 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
  System_Action_object____ctor(
    v6,
    (Il2CppObject *)v3,
    Method_BattleModelObjectVisibleControlComponent___c__DisplayClass11_0__IsSkinnedMesh_b__0__,
    0);
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)v6,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return v3->fields.isSkinned;
}


void BattleModelObjectVisibleControlComponent___EndProc_b__10_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, !this->fields.visible, method);
}


void BattleModelObjectVisibleControlComponent___ExecuteProc_b__9_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, this->fields.visible, method);
}


void BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C36D4B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    byte_4C36D4B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.skinnedMeshList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skinnedMeshList, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__Initialize(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *skinnedMeshList; // x0
  Il2CppObject *ComponentInChildren_object; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v9; // x9
  __int64 klass_low; // x10
  intptr_t v11; // x8

  if ( (byte_4C36D48 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36D48 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0, 0) )
  {
    skinnedMeshList = this->fields.gameObject;
    if ( skinnedMeshList )
    {
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     skinnedMeshList,
                                     (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object, 0, 0) )
        return;
      skinnedMeshList = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
      if ( skinnedMeshList )
      {
        m_CachedPtr = skinnedMeshList->fields.m_CachedPtr;
        v9 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
        ++HIDWORD(skinnedMeshList[1].klass);
        if ( m_CachedPtr )
        {
          klass_low = SLODWORD(skinnedMeshList[1].klass);
          if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)skinnedMeshList,
              ComponentInChildren_object,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
          }
          else
          {
            v11 = m_CachedPtr + 8 * klass_low;
            LODWORD(skinnedMeshList[1].klass) = klass_low + 1;
            *(_QWORD *)(v11 + 32) = ComponentInChildren_object;
            sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), (int32_t)ComponentInChildren_object, v6, v7);
          }
          return;
        }
      }
    }
    sub_1C32E7C(skinnedMeshList);
  }
}


bool BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *v2; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *skinnedMeshList; // x8

  v2 = this;
  if ( (byte_4C36D4A & 1) == 0 )
  {
    this = (BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *)sub_1C32C20(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__);
    byte_4C36D4A = 1;
  }
  skinnedMeshList = v2->fields.skinnedMeshList;
  if ( !skinnedMeshList )
    sub_1C32E7C(this);
  return skinnedMeshList->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
void BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C36D49 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    byte_4C36D49 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
          this,
          (const MethodInfo *)flg) )
  {
    gameObject = this->fields.gameObject;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, flg, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(gameObject);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
  if ( !gameObject )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)gameObject,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1C32E7C(0);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v6.fields._current, flg, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
}


void BattleModelObjectVisibleControlComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C36D4C & 1) == 0 )
  {
    sub_1C32C20(&BattleModelObjectVisibleControlComponent___c_TypeInfo);
    byte_4C36D4C = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleModelObjectVisibleControlComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields->__9 = (struct BattleModelObjectVisibleControlComponent___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void BattleModelObjectVisibleControlComponent___c___ctor(
        BattleModelObjectVisibleControlComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleModelObjectVisibleControlComponent___c___Awake_b__7_0(
        BattleModelObjectVisibleControlComponent___c_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__Initialize(x, 0);
}


void BattleModelObjectVisibleControlComponent___c__DisplayClass11_0___ctor(
        BattleModelObjectVisibleControlComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleModelObjectVisibleControlComponent___c__DisplayClass11_0___IsSkinnedMesh_b__0(
        BattleModelObjectVisibleControlComponent___c__DisplayClass11_0_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  bool isSkinned; // w20

  if ( !x )
    sub_1C32E7C(this);
  isSkinned = this->fields.isSkinned;
  this->fields.isSkinned = isSkinned
                         | BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(x, 0);
}