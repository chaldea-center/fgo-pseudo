void EventInfoReleaseCraftItemDialog___ctor(EventInfoReleaseCraftItemDialog_o *this, const MethodInfo *method)
{
  if ( (byte_593A437 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593A437 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoReleaseCraftItemDialog__CreateCraftItem(
        EventInfoReleaseCraftItemDialog_o *this,
        EventTradeGoodsEntity_o *eventTradeGoodsEntity,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *craftItemParent; // x20
  Il2CppObject *craftItemPrefab; // x21
  Il2CppObject *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_593A434 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventInfoCraftItemComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A434 = 1;
  }
  if ( eventTradeGoodsEntity )
  {
    craftItemPrefab = (Il2CppObject *)this->fields.craftItemPrefab;
    craftItemParent = this->fields.craftItemParent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventTradeGoodsEntity);
    v7 = UnityEngine_Object__Instantiate_object__59506996(
           craftItemPrefab,
           craftItemParent,
           (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0, 0);
    if ( !v8 )
    {
      if ( v7 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, 1, 0);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v7,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCraftItemComponent___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( v8 )
          return;
        if ( Component_object )
        {
          EventInfoCraftItemComponent__Setup(
            (EventInfoCraftItemComponent_o *)Component_object,
            eventTradeGoodsEntity,
            0);
          return;
        }
      }
      sub_21FFECC(v8, v9);
    }
  }
}


void EventInfoReleaseCraftItemDialog__OnClose(EventInfoReleaseCraftItemDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_593A436 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoReleaseCraftItemDialog_OnClose__);
    sub_21FFC50(&Method_EventInfoReleaseCraftItemDialog__OnClose_b__11_0__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A436 = 1;
  }
  if ( this->fields.canTap )
  {
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    this->fields.canTap = 0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
    v4 = Method_EventInfoReleaseCraftItemDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoReleaseCraftItemDialog_OnClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_EventInfoReleaseCraftItemDialog_OnClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__OnClose_b__11_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void EventInfoReleaseCraftItemDialog__OnToCraft(EventInfoReleaseCraftItemDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_593A435 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoReleaseCraftItemDialog_OnToCraft__);
    sub_21FFC50(&Method_EventInfoReleaseCraftItemDialog__OnToCraft_b__10_0__);
    byte_593A435 = 1;
  }
  if ( this->fields.canTap )
  {
    this->fields.canTap = 0;
    v3 = Method_EventInfoReleaseCraftItemDialog_OnToCraft__;
    if ( (*((_BYTE *)Method_EventInfoReleaseCraftItemDialog_OnToCraft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventInfoReleaseCraftItemDialog_OnToCraft__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__OnToCraft_b__10_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoReleaseCraftItemDialog__SetStoreLabel(
        EventInfoReleaseCraftItemDialog_o *this,
        int32_t eventId,
        int32_t releaseCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *storeLabel; // x22
  __int64 v8; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v10; // x1
  EventTradeStoreMaster_o *v11; // x21
  UILabel_o *v12; // x20
  int v13; // w22
  System_String_o *v14; // x19
  Il2CppObject *v15; // x22
  Il2CppObject *v16; // x0
  int MasterName_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593A433 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_4057/*"CRAFT_RELEASE_DIALOG_RELEASE_STORE_DESCRIPTION"*/);
    byte_593A433 = 1;
  }
  storeLabel = (UnityEngine_Object_o *)this->fields.storeLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
  if ( !UnityEngine_Object__op_Equality(storeLabel, 0, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    Master_object = (EventTradeStoreMaster_o *)EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                                 Master_object,
                                                 eventId,
                                                 0);
    if ( !Master_object )
      goto LABEL_15;
    v11 = Master_object;
    v12 = this->fields.storeLabel;
    v13 = LODWORD(Master_object->fields._MasterName_k__BackingField) - releaseCount;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_4057/*"CRAFT_RELEASE_DIALOG_RELEASE_STORE_DESCRIPTION"*/, 0);
    v18 = v13;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v18);
    MasterName_k__BackingField = (int)v11->fields._MasterName_k__BackingField;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &MasterName_k__BackingField);
    Master_object = (EventTradeStoreMaster_o *)System_String__Format_75484576(v14, v15, v16, 0);
    if ( !v12 )
LABEL_15:
      sub_21FFECC(Master_object, v10);
    UILabel__set_text(v12, (System_String_o *)Master_object, 0);
  }
}


void EventInfoReleaseCraftItemDialog__Setup(
        EventInfoReleaseCraftItemDialog_o *this,
        int32_t eventId,
        EventTradeGoodsEntity_array *releaseCraftItems,
        EventTradeStoreEntity_array *releaseTradeStoreEntities,
        System_Action_o *inOnToCraft,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  __int64 v13; // x1
  UnityEngine_Object_o *closeBtn; // x25
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x3
  int32_t max_length; // w2
  __int64 v29; // x0
  const MethodInfo *v30; // x2
  il2cpp_array_size_t v31; // x8
  unsigned __int64 v32; // x21
  System_Action_o *v33; // x20

  if ( (byte_593A432 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoReleaseCraftItemDialog__Setup_b__7_0__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A432 = 1;
  }
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  this->fields.onClosed = inOnClosed;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClosed,
    (int32_t)inOnClosed,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.onToCraft = inOnToCraft;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onToCraft,
    (int32_t)inOnToCraft,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( releaseTradeStoreEntities )
    max_length = releaseTradeStoreEntities->max_length;
  else
    max_length = 0;
  EventInfoReleaseCraftItemDialog__SetStoreLabel(this, eventId, max_length, v27);
  if ( releaseCraftItems )
  {
    TransformHelper__DestroyChildren(this->fields.craftItemParent, 0, 0);
    v31 = releaseCraftItems->max_length;
    if ( (int)v31 >= 1 )
    {
      v32 = 0;
      do
      {
        if ( v32 >= (unsigned int)v31 )
          sub_21FFED4(v29);
        EventInfoReleaseCraftItemDialog__CreateCraftItem(this, releaseCraftItems->m_Items[v32], v30);
        LODWORD(v31) = releaseCraftItems->max_length;
        ++v32;
      }
      while ( (__int64)v32 < (int)v31 );
    }
    v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__Setup_b__7_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0, 0);
  }
}


void EventInfoReleaseCraftItemDialog___OnClose_b__11_0(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_593A439 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A439 = 1;
  }
  ActionExtensions__Call(this->fields.onClosed, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
}


void EventInfoReleaseCraftItemDialog___OnToCraft_b__10_0(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_593A438 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A438 = 1;
  }
  ActionExtensions__Call(this->fields.onToCraft, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
}


void EventInfoReleaseCraftItemDialog___Setup_b__7_0(EventInfoReleaseCraftItemDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}