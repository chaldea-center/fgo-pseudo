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
  __int64 v2; // x2
  BattleModelObjectVisibleControlComponent___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x19
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__7_0; // x20
  Il2CppObject *v8; // x21
  struct BattleModelObjectVisibleControlComponent___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596FB33 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    sub_2213A60(&Method_BattleModelObjectVisibleControlComponent___c__Awake_b__7_0__);
    sub_2213A60(&BattleModelObjectVisibleControlComponent___c_TypeInfo);
    byte_596FB33 = 1;
  }
  v4 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
  if ( !*(&BattleModelObjectVisibleControlComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleModelObjectVisibleControlComponent___c_TypeInfo, method, v2);
    v4 = BattleModelObjectVisibleControlComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__7_0 = (System_Action_object__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    System_Action_object____ctor(_9__7_0, v8, Method_BattleModelObjectVisibleControlComponent___c__Awake_b__7_0__, 0);
    v9 = BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields;
    v9->__9__7_0 = (struct System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__o *)_9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__7_0, (int32_t)_9__7_0, v10, v11, v12, v13, v14, v15);
  }
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
}


bool BattleModelObjectVisibleControlComponent__EndProc(
        BattleModelObjectVisibleControlComponent_o *this,
        VisibleControlInfo_o *visibleControlInfo,
        const MethodInfo *method)
{
  bool IsMatchCond; // w20
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x21
  System_Action_object__o *v7; // x22

  if ( (byte_596FB35 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    sub_2213A60(&Method_BattleModelObjectVisibleControlComponent__EndProc_b__10_0__);
    byte_596FB35 = 1;
  }
  IsMatchCond = BattleModelObjectVisibleControlComponent__IsMatchCond(this, visibleControlInfo, method);
  if ( IsMatchCond )
  {
    visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
    v7 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    System_Action_object____ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattleModelObjectVisibleControlComponent__EndProc_b__10_0__,
      0);
    BasicHelper__ForEach_object_(
      visibleChangeObjects,
      (System_Action_T__o *)v7,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
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

  if ( (byte_596FB34 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    sub_2213A60(&Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__9_0__);
    byte_596FB34 = 1;
  }
  IsMatchCond = BattleModelObjectVisibleControlComponent__IsMatchCond(this, visibleControlInfo, method);
  if ( IsMatchCond )
  {
    visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
    v7 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    System_Action_object____ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattleModelObjectVisibleControlComponent__ExecuteProc_b__9_0__,
      0);
    BasicHelper__ForEach_object_(
      visibleChangeObjects,
      (System_Action_T__o *)v7,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
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
    sub_2213CDC(this, visibleControlInfo);
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
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *visibleChangeObjects; // x19
  System_Action_object__o *v7; // x21

  if ( (byte_596FB36 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
    sub_2213A60(&Method_BattleModelObjectVisibleControlComponent___c__DisplayClass11_0__IsSkinnedMesh_b__0__);
    sub_2213A60(&BattleModelObjectVisibleControlComponent___c__DisplayClass11_0_TypeInfo);
    byte_596FB36 = 1;
  }
  v3 = sub_2213CCC(BattleModelObjectVisibleControlComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  visibleChangeObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.visibleChangeObjects;
  *(_BYTE *)(v3 + 16) = 0;
  v7 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__TypeInfo);
  System_Action_object____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_BattleModelObjectVisibleControlComponent___c__DisplayClass11_0__IsSkinnedMesh_b__0__,
    0);
  BasicHelper__ForEach_object_(
    visibleChangeObjects,
    (System_Action_T__o *)v7,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___);
  return *(_BYTE *)(v3 + 16);
}


void BattleModelObjectVisibleControlComponent___EndProc_b__10_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, !this->fields.visible, method);
}


void BattleModelObjectVisibleControlComponent___ExecuteProc_b__9_0(
        BattleModelObjectVisibleControlComponent_o *this,
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(x, this->fields.visible, method);
}


void BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct___ctor(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596FB3A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    byte_596FB3A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.skinnedMeshList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skinnedMeshList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__Initialize(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *ComponentInChildren_object; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *skinnedMeshList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0

  if ( (byte_596FB37 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___);
    sub_2213A60(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB37 = 1;
  }
  gameObject = (UnityEngine_Object_o *)this->fields.gameObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0, 0) )
  {
    v6 = this->fields.gameObject;
    if ( v6 )
    {
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     v6,
                                     (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_SkinnedMeshRenderer___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                         (UnityEngine_Object_o *)ComponentInChildren_object,
                                         0,
                                         0);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      skinnedMeshList = (System_Collections_Generic_List_object__o *)this->fields.skinnedMeshList;
      if ( skinnedMeshList )
      {
        items = skinnedMeshList->fields._items;
        v18 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
        ++skinnedMeshList->fields._version;
        if ( items )
        {
          size = skinnedMeshList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              skinnedMeshList,
              ComponentInChildren_object,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            skinnedMeshList->fields._size = size + 1;
            v20[4] = (Il2CppClass *)ComponentInChildren_object;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v20 + 4),
              (int32_t)ComponentInChildren_object,
              v10,
              v11,
              v12,
              v13,
              v14,
              v15);
          }
          return;
        }
      }
    }
    sub_2213CDC(v6, v5);
  }
}


bool BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        const MethodInfo *method)
{
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *v2; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *skinnedMeshList; // x8

  v2 = this;
  if ( (byte_596FB39 & 1) == 0 )
  {
    this = (BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *)sub_2213A60(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__);
    byte_596FB39 = 1;
  }
  skinnedMeshList = v2->fields.skinnedMeshList;
  if ( !skinnedMeshList )
    sub_2213CDC(this, method);
  return skinnedMeshList->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
void BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__SetVisible(
        BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596FB38 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    byte_596FB38 = 1;
  }
  memset(&v8, 0, sizeof(v8));
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
    sub_2213CDC(gameObject, v5);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skinnedMeshList;
  if ( !gameObject )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)gameObject,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_2213CDC(0, v7);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v8.fields._current, flg, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
}


void BattleModelObjectVisibleControlComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596FB3B & 1) == 0 )
  {
    sub_2213A60(&BattleModelObjectVisibleControlComponent___c_TypeInfo);
    byte_596FB3B = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleModelObjectVisibleControlComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields->__9 = (struct BattleModelObjectVisibleControlComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleModelObjectVisibleControlComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__Initialize(x, (const MethodInfo *)x);
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
    sub_2213CDC(this, 0);
  isSkinned = this->fields.isSkinned;
  this->fields.isSkinned = isSkinned
                         | BattleModelObjectVisibleControlComponent_ServantObjVisibleCtrCompStruct__IsSkinnedMesh(
                             x,
                             (const MethodInfo *)x);
}