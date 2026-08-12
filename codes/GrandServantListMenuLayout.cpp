void GrandServantListMenuLayout___ctor(GrandServantListMenuLayout_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListMenuLayout__Initialize(
        GrandServantListMenuLayout_o *this,
        PlayMakerFSM_o *fsm,
        GrandServantListItemDraw_o *prefab,
        int8_t displayKind,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct PlayMakerFSM_o *v24; // x1
  struct PlayMakerFSM_o **p_fsm; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Action_GrandServantListItemSlot__c *v32; // x0
  System_Collections_Generic_IEnumerable_T__o *v33; // x21
  System_Action_object__o *v34; // x19

  if ( (byte_596B342 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GrandServantListItemSlot__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_GrandServantListItemSlot___);
    sub_2213A60(&Method_GrandServantListMenuLayout___c__DisplayClass3_0__Initialize_b__0__);
    sub_2213A60(&GrandServantListMenuLayout___c__DisplayClass3_0_TypeInfo);
    byte_596B342 = 1;
  }
  v9 = sub_2213CCC(GrandServantListMenuLayout___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = fsm;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)fsm, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = prefab;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)prefab, v18, v19, v20, v21, v22, v23);
  v24 = *(struct PlayMakerFSM_o **)(v9 + 16);
  this->fields.fsm = v24;
  p_fsm = &this->fields.fsm;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_fsm, (int32_t)v24, v26, v27, v28, v29, v30, v31);
  v32 = System_Action_GrandServantListItemSlot__TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_T__o *)*(p_fsm - 2);
  *((_BYTE *)p_fsm - 8) = displayKind;
  v34 = (System_Action_object__o *)sub_2213CCC(v32);
  System_Action_object____ctor(
    v34,
    (Il2CppObject *)v9,
    Method_GrandServantListMenuLayout___c__DisplayClass3_0__Initialize_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v33,
    (System_Action_T__o *)v34,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_GrandServantListItemSlot___);
}


void GrandServantListMenuLayout__Release(GrandServantListMenuLayout_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  GrandServantListMenuLayout___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *slots; // x19
  struct GrandServantListMenuLayout___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__4_0; // x20
  Il2CppObject *v8; // x21
  struct GrandServantListMenuLayout___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596B343 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GrandServantListItemSlot__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_GrandServantListItemSlot___);
    sub_2213A60(&Method_GrandServantListMenuLayout___c__Release_b__4_0__);
    sub_2213A60(&GrandServantListMenuLayout___c_TypeInfo);
    byte_596B343 = 1;
  }
  v4 = GrandServantListMenuLayout___c_TypeInfo;
  slots = (System_Collections_Generic_IEnumerable_T__o *)this->fields.slots;
  if ( !*(&GrandServantListMenuLayout___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListMenuLayout___c_TypeInfo, method, v2);
    v4 = GrandServantListMenuLayout___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__4_0 = (System_Action_object__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = GrandServantListMenuLayout___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Action_object__o *)sub_2213CCC(System_Action_GrandServantListItemSlot__TypeInfo);
    System_Action_object____ctor(_9__4_0, v8, Method_GrandServantListMenuLayout___c__Release_b__4_0__, 0);
    v9 = GrandServantListMenuLayout___c_TypeInfo->static_fields;
    v9->__9__4_0 = (struct System_Action_GrandServantListItemSlot__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__4_0, (int32_t)_9__4_0, v10, v11, v12, v13, v14, v15);
  }
  BasicHelper__ForEach_object_(
    slots,
    (System_Action_T__o *)_9__4_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_GrandServantListItemSlot___);
}


void GrandServantListMenuLayout__SetItemSlotActive(
        GrandServantListMenuLayout_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Component_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct GrandServantListItemSlot_array *slots; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Parent; // x0

  IsNullOrEmpty = (UnityEngine_Component_o *)BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)this->fields.slots,
                                               0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    slots = this->fields.slots;
    if ( !slots )
      goto LABEL_6;
    if ( !LODWORD(slots->max_length) )
      sub_2213CE4(IsNullOrEmpty);
    IsNullOrEmpty = (UnityEngine_Component_o *)slots->m_Items[0];
    if ( !IsNullOrEmpty )
LABEL_6:
      sub_2213CDC(IsNullOrEmpty, v6);
    gameObject = UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0);
    Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0);
    BasicHelper__SetActiveSafely(Parent, value, 0);
  }
}


void GrandServantListMenuLayout__UpdateView(
        GrandServantListMenuLayout_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_T__o *slots; // x19
  System_Action_object__o *v15; // x20

  if ( (byte_596B344 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GrandServantListItemSlot__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_GrandServantListItemSlot___);
    sub_2213A60(&Method_GrandServantListMenuLayout___c__DisplayClass5_0__UpdateView_b__0__);
    sub_2213A60(&GrandServantListMenuLayout___c__DisplayClass5_0_TypeInfo);
    byte_596B344 = 1;
  }
  v5 = sub_2213CCC(GrandServantListMenuLayout___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = grandServantListData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)grandServantListData, v8, v9, v10, v11, v12, v13);
  slots = (System_Collections_Generic_IEnumerable_T__o *)this->fields.slots;
  v15 = (System_Action_object__o *)sub_2213CCC(System_Action_GrandServantListItemSlot__TypeInfo);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_GrandServantListMenuLayout___c__DisplayClass5_0__UpdateView_b__0__,
    0);
  BasicHelper__ForEach_object_(
    slots,
    (System_Action_T__o *)v15,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_GrandServantListItemSlot___);
}


void GrandServantListMenuLayout___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B345 & 1) == 0 )
  {
    sub_2213A60(&GrandServantListMenuLayout___c_TypeInfo);
    byte_596B345 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(GrandServantListMenuLayout___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantListMenuLayout___c_TypeInfo->static_fields->__9 = (struct GrandServantListMenuLayout___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GrandServantListMenuLayout___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListMenuLayout___c___ctor(GrandServantListMenuLayout___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListMenuLayout___c___Release_b__4_0(
        GrandServantListMenuLayout___c_o *this,
        GrandServantListItemSlot_o *slot,
        const MethodInfo *method)
{
  if ( !slot )
    sub_2213CDC(this, 0);
  GrandServantListItemSlot__Release(slot, (const MethodInfo *)slot);
}


void GrandServantListMenuLayout___c__DisplayClass3_0___ctor(
        GrandServantListMenuLayout___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListMenuLayout___c__DisplayClass3_0___Initialize_b__0(
        GrandServantListMenuLayout___c__DisplayClass3_0_o *this,
        GrandServantListItemSlot_o *slot,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !slot )
    sub_2213CDC(this, 0);
  GrandServantListItemSlot__Initialize(slot, this->fields.fsm, this->fields.prefab, v3);
}


void GrandServantListMenuLayout___c__DisplayClass5_0___ctor(
        GrandServantListMenuLayout___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListMenuLayout___c__DisplayClass5_0___UpdateView_b__0(
        GrandServantListMenuLayout___c__DisplayClass5_0_o *this,
        GrandServantListItemSlot_o *slot,
        const MethodInfo *method)
{
  if ( !slot )
    sub_2213CDC(this, 0);
  GrandServantListItemSlot__UpdateView(slot, this->fields.grandServantListData, method);
}