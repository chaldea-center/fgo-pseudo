void EventInfoReleaseCraftItemDialog___ctor(EventInfoReleaseCraftItemDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DD1C & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D2DD1C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  Il2CppObject *Component_object; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4D2DD19 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_EventInfoCraftItemComponent___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DD19 = 1;
  }
  if ( eventTradeGoodsEntity )
  {
    craftItemPrefab = (Il2CppObject *)this->fields.craftItemPrefab;
    craftItemParent = this->fields.craftItemParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__Instantiate_object__52598436(
           craftItemPrefab,
           craftItemParent,
           (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0, 0);
    if ( !v8 )
    {
      if ( v7 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, 1, 0);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v7,
                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCraftItemComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( v8 )
          return;
        if ( Component_object )
        {
          EventInfoCraftItemComponent__Setup(
            (EventInfoCraftItemComponent_o *)Component_object,
            eventTradeGoodsEntity,
            v11);
          return;
        }
      }
      sub_1C942F0(v8, v9);
    }
  }
}


void EventInfoReleaseCraftItemDialog__OnClose(EventInfoReleaseCraftItemDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4D2DD1B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EventInfoReleaseCraftItemDialog_OnClose__);
    sub_1C94098(&Method_EventInfoReleaseCraftItemDialog__OnClose_b__11_0__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DD1B = 1;
  }
  if ( this->fields.canTap )
  {
    this->fields.canTap = 0;
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
    v4 = Method_EventInfoReleaseCraftItemDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoReleaseCraftItemDialog_OnClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_EventInfoReleaseCraftItemDialog_OnClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__OnClose_b__11_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void EventInfoReleaseCraftItemDialog__OnToCraft(EventInfoReleaseCraftItemDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D2DD1A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EventInfoReleaseCraftItemDialog_OnToCraft__);
    sub_1C94098(&Method_EventInfoReleaseCraftItemDialog__OnToCraft_b__10_0__);
    byte_4D2DD1A = 1;
  }
  if ( this->fields.canTap )
  {
    this->fields.canTap = 0;
    v3 = Method_EventInfoReleaseCraftItemDialog_OnToCraft__;
    if ( (*((_BYTE *)Method_EventInfoReleaseCraftItemDialog_OnToCraft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_EventInfoReleaseCraftItemDialog_OnToCraft__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__OnToCraft_b__10_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoReleaseCraftItemDialog__SetStoreLabel(
        EventInfoReleaseCraftItemDialog_o *this,
        int32_t eventId,
        int32_t releaseCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *storeLabel; // x22
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v9; // x1
  EventTradeStoreMaster_o *v10; // x21
  UILabel_o *v11; // x20
  int v12; // w22
  System_String_o *v13; // x19
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  int MasterName_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2DD18 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_3923/*"CRAFT_RELEASE_DIALOG_RELEASE_STORE_DESCRIPTION"*/);
    byte_4D2DD18 = 1;
  }
  storeLabel = (UnityEngine_Object_o *)this->fields.storeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(storeLabel, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    Master_object = (EventTradeStoreMaster_o *)EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                                 Master_object,
                                                 eventId,
                                                 0);
    if ( !Master_object )
      goto LABEL_15;
    v10 = Master_object;
    v11 = this->fields.storeLabel;
    v12 = LODWORD(Master_object->fields._MasterName_k__BackingField) - releaseCount;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3923/*"CRAFT_RELEASE_DIALOG_RELEASE_STORE_DESCRIPTION"*/, 0);
    v17 = v12;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    MasterName_k__BackingField = (int)v10->fields._MasterName_k__BackingField;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MasterName_k__BackingField);
    Master_object = (EventTradeStoreMaster_o *)System_String__Format_64459052(v13, v14, v15, 0);
    if ( !v11 )
LABEL_15:
      sub_1C942F0(Master_object, v9);
    UILabel__set_text(v11, (System_String_o *)Master_object, 0);
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
  UnityEngine_Object_o *closeBtn; // x25
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x3
  int32_t max_length; // w2
  __int64 v28; // x0
  const MethodInfo *v29; // x2
  il2cpp_array_size_t v30; // x8
  unsigned __int64 v31; // x21
  System_Action_o *v32; // x20

  if ( (byte_4D2DD17 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EventInfoReleaseCraftItemDialog__Setup_b__7_0__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DD17 = 1;
  }
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  this->fields.onClosed = inOnClosed;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onClosed, (int32_t)inOnClosed, v14, v15, v16, v17, v18, v19);
  this->fields.onToCraft = inOnToCraft;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onToCraft,
    (int32_t)inOnToCraft,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( releaseTradeStoreEntities )
    max_length = releaseTradeStoreEntities->max_length;
  else
    max_length = 0;
  EventInfoReleaseCraftItemDialog__SetStoreLabel(this, eventId, max_length, v26);
  if ( releaseCraftItems )
  {
    TransformHelper__DestroyChildren(this->fields.craftItemParent, 0, 0);
    v30 = releaseCraftItems->max_length;
    if ( (int)v30 >= 1 )
    {
      v31 = 0;
      do
      {
        if ( v31 >= (unsigned int)v30 )
          sub_1C942F8(v28);
        EventInfoReleaseCraftItemDialog__CreateCraftItem(this, releaseCraftItems->m_Items[v31], v29);
        LODWORD(v30) = releaseCraftItems->max_length;
        ++v31;
      }
      while ( (__int64)v31 < (int)v30 );
    }
    v32 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__Setup_b__7_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0, 0);
  }
}


void EventInfoReleaseCraftItemDialog___OnClose_b__11_0(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D2DD1E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DD1E = 1;
  }
  ActionExtensions__Call(this->fields.onClosed, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972(gameObject, 0);
}


void EventInfoReleaseCraftItemDialog___OnToCraft_b__10_0(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D2DD1D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DD1D = 1;
  }
  ActionExtensions__Call(this->fields.onToCraft, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972(gameObject, 0);
}


void EventInfoReleaseCraftItemDialog___Setup_b__7_0(EventInfoReleaseCraftItemDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}