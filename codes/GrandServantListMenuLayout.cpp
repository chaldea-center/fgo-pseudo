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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct PlayMakerFSM_o *v24; // x1
  struct PlayMakerFSM_o **p_fsm; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_IEnumerable_T__o *v32; // x19
  System_Action_object__o *v33; // x20

  if ( (byte_4CE934A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_GrandServantListItemSlot__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_GrandServantListItemSlot___);
    sub_1C7BAE8(&Method_GrandServantListMenuLayout___c__DisplayClass3_0__Initialize_b__0__);
    sub_1C7BAE8(&GrandServantListMenuLayout___c__DisplayClass3_0_TypeInfo);
    byte_4CE934A = 1;
  }
  v9 = sub_1C7BD34(GrandServantListMenuLayout___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C7BD40(v10, v11);
  *(_QWORD *)(v9 + 16) = fsm;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)fsm, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = prefab;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)prefab, v18, v19, v20, v21, v22, v23);
  v24 = *(struct PlayMakerFSM_o **)(v9 + 16);
  this->fields.fsm = v24;
  p_fsm = &this->fields.fsm;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_fsm, (int32_t)v24, v26, v27, v28, v29, v30, v31);
  *((_BYTE *)p_fsm - 8) = displayKind;
  v32 = (System_Collections_Generic_IEnumerable_T__o *)*(p_fsm - 2);
  v33 = (System_Action_object__o *)sub_1C7BD34(System_Action_GrandServantListItemSlot__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)v9,
    Method_GrandServantListMenuLayout___c__DisplayClass3_0__Initialize_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v32,
    (System_Action_T__o *)v33,
    (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_GrandServantListItemSlot___);
}


void GrandServantListMenuLayout__Release(GrandServantListMenuLayout_o *this, const MethodInfo *method)
{
  GrandServantListMenuLayout___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *slots; // x19
  System_Action_object__o *_9__4_0; // x20
  Il2CppObject *v6; // x21
  struct GrandServantListMenuLayout___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CE934B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_GrandServantListItemSlot__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_GrandServantListItemSlot___);
    sub_1C7BAE8(&Method_GrandServantListMenuLayout___c__Release_b__4_0__);
    sub_1C7BAE8(&GrandServantListMenuLayout___c_TypeInfo);
    byte_4CE934B = 1;
  }
  v3 = GrandServantListMenuLayout___c_TypeInfo;
  slots = (System_Collections_Generic_IEnumerable_T__o *)this->fields.slots;
  if ( !GrandServantListMenuLayout___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListMenuLayout___c_TypeInfo);
    v3 = GrandServantListMenuLayout___c_TypeInfo;
  }
  _9__4_0 = (System_Action_object__o *)v3->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = GrandServantListMenuLayout___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__4_0 = (System_Action_object__o *)sub_1C7BD34(System_Action_GrandServantListItemSlot__TypeInfo);
    System_Action_object____ctor(_9__4_0, v6, Method_GrandServantListMenuLayout___c__Release_b__4_0__, 0);
    static_fields = GrandServantListMenuLayout___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Action_GrandServantListItemSlot__o *)_9__4_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v8, v9, v10, v11, v12, v13);
  }
  BasicHelper__ForEach_object_(
    slots,
    (System_Action_T__o *)_9__4_0,
    (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_GrandServantListItemSlot___);
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
      sub_1C7BD48(IsNullOrEmpty);
    IsNullOrEmpty = (UnityEngine_Component_o *)slots->m_Items[0];
    if ( !IsNullOrEmpty )
LABEL_6:
      sub_1C7BD40(IsNullOrEmpty, v6);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_T__o *slots; // x19
  System_Action_object__o *v15; // x20

  if ( (byte_4CE934C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_GrandServantListItemSlot__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_GrandServantListItemSlot___);
    sub_1C7BAE8(&Method_GrandServantListMenuLayout___c__DisplayClass5_0__UpdateView_b__0__);
    sub_1C7BAE8(&GrandServantListMenuLayout___c__DisplayClass5_0_TypeInfo);
    byte_4CE934C = 1;
  }
  v5 = sub_1C7BD34(GrandServantListMenuLayout___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 16) = grandServantListData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)grandServantListData, v8, v9, v10, v11, v12, v13);
  slots = (System_Collections_Generic_IEnumerable_T__o *)this->fields.slots;
  v15 = (System_Action_object__o *)sub_1C7BD34(System_Action_GrandServantListItemSlot__TypeInfo);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_GrandServantListMenuLayout___c__DisplayClass5_0__UpdateView_b__0__,
    0);
  BasicHelper__ForEach_object_(
    slots,
    (System_Action_T__o *)v15,
    (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_GrandServantListItemSlot___);
}


void GrandServantListMenuLayout___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CE934D & 1) == 0 )
  {
    sub_1C7BAE8(&GrandServantListMenuLayout___c_TypeInfo);
    byte_4CE934D = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(GrandServantListMenuLayout___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantListMenuLayout___c_TypeInfo->static_fields->__9 = (struct GrandServantListMenuLayout___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)GrandServantListMenuLayout___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
  GrandServantListItemSlot__UpdateView(slot, this->fields.grandServantListData, method);
}