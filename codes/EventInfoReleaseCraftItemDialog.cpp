void __fastcall EventInfoReleaseCraftItemDialog___ctor(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B177E9 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B177E9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoReleaseCraftItemDialog__CreateCraftItem(
        EventInfoReleaseCraftItemDialog_o *this,
        EventTradeGoodsEntity_o *eventTradeGoodsEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Transform_o *craftItemParent; // x20
  Il2CppObject *craftItemPrefab; // x21
  Il2CppObject *v11; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B177E6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_EventInfoCraftItemComponent___,
      eventTradeGoodsEntity,
      method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B177E6 = 1;
  }
  if ( eventTradeGoodsEntity )
  {
    craftItemPrefab = (Il2CppObject *)this->fields.craftItemPrefab;
    craftItemParent = this->fields.craftItemParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventTradeGoodsEntity);
    v11 = UnityEngine_Object__Instantiate_object__49903816(
            craftItemPrefab,
            craftItemParent,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    if ( !v12 )
    {
      if ( v11 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, 1, 0LL);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v11,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCraftItemComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( v12 )
          return;
        if ( Component_object )
        {
          EventInfoCraftItemComponent__Setup(
            (EventInfoCraftItemComponent_o *)Component_object,
            eventTradeGoodsEntity,
            0LL);
          return;
        }
      }
      sub_1BCAA3C(v12, v13);
    }
  }
}


void __fastcall EventInfoReleaseCraftItemDialog__OnClose(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x20

  if ( (byte_4B177E8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoReleaseCraftItemDialog_OnClose__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoReleaseCraftItemDialog__OnClose_b__11_0__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B177E8 = 1;
  }
  if ( this->fields.canTap )
  {
    this->fields.canTap = 0;
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
    v11 = Method_EventInfoReleaseCraftItemDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoReleaseCraftItemDialog_OnClose__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_EventInfoReleaseCraftItemDialog_OnClose__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0LL);
    v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__OnClose_b__11_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
  }
}


void __fastcall EventInfoReleaseCraftItemDialog__OnToCraft(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B177E7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoReleaseCraftItemDialog_OnToCraft__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoReleaseCraftItemDialog__OnToCraft_b__10_0__, v6, v7);
    byte_4B177E7 = 1;
  }
  if ( this->fields.canTap )
  {
    this->fields.canTap = 0;
    v8 = Method_EventInfoReleaseCraftItemDialog_OnToCraft__;
    if ( (*((_BYTE *)Method_EventInfoReleaseCraftItemDialog_OnToCraft__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventInfoReleaseCraftItemDialog_OnToCraft__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__OnToCraft_b__10_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoReleaseCraftItemDialog__SetStoreLabel(
        EventInfoReleaseCraftItemDialog_o *this,
        int32_t eventId,
        int32_t releaseCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *storeLabel; // x22
  __int64 v18; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v20; // x1
  EventTradeStoreMaster_o *v21; // x21
  UILabel_o *v22; // x20
  int v23; // w22
  System_String_o *v24; // x19
  Il2CppObject *v25; // x22
  Il2CppObject *v26; // x0
  int MasterName_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B177E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeStoreMaster___, *(_QWORD *)&eventId, *(_QWORD *)&releaseCount);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_3997/*"CRAFT_RELEASE_DIALOG_RELEASE_STORE_DESCRIPTION"*/, v15, v16);
    byte_4B177E5 = 1;
  }
  storeLabel = (UnityEngine_Object_o *)this->fields.storeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
  if ( !UnityEngine_Object__op_Equality(storeLabel, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    Master_object = (EventTradeStoreMaster_o *)EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                                 Master_object,
                                                 eventId,
                                                 0LL);
    if ( !Master_object )
      goto LABEL_15;
    v21 = Master_object;
    v22 = this->fields.storeLabel;
    v23 = LODWORD(Master_object->fields._MasterName_k__BackingField) - releaseCount;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3997/*"CRAFT_RELEASE_DIALOG_RELEASE_STORE_DESCRIPTION"*/, 0LL);
    v28 = v23;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    MasterName_k__BackingField = (int)v21->fields._MasterName_k__BackingField;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MasterName_k__BackingField);
    Master_object = (EventTradeStoreMaster_o *)System_String__Format_62415592(v24, v25, v26, 0LL);
    if ( !v22 )
LABEL_15:
      sub_1BCAA3C(Master_object, v20);
    UILabel__set_text(v22, (System_String_o *)Master_object, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoReleaseCraftItemDialog__Setup(
        EventInfoReleaseCraftItemDialog_o *this,
        int32_t eventId,
        EventTradeGoodsEntity_array *releaseCraftItems,
        EventTradeStoreEntity_array *releaseTradeStoreEntities,
        System_Action_o *inOnToCraft,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  UnityEngine_Object_o *closeBtn; // x25
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x3
  il2cpp_array_size_t max_length; // w2
  __int64 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  __int64 v36; // x3
  __int64 v37; // x8
  unsigned __int64 v38; // x21
  System_Action_o *v39; // x20

  if ( (byte_4B177E4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, releaseCraftItems);
    sub_1BCA7E0(&Method_EventInfoReleaseCraftItemDialog__Setup_b__7_0__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B177E4 = 1;
  }
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  this->fields.onClosed = inOnClosed;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onClosed, (int64_t)inOnClosed, v19, v20, v21, v22, v23, v24);
  this->fields.onToCraft = inOnToCraft;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onToCraft, (int64_t)inOnToCraft, v25, v26, v27, v28, v29, v30);
  if ( releaseTradeStoreEntities )
    max_length = releaseTradeStoreEntities->max_length;
  else
    max_length = 0;
  EventInfoReleaseCraftItemDialog__SetStoreLabel(this, eventId, max_length, v31);
  if ( releaseCraftItems )
  {
    TransformHelper__DestroyChildren(this->fields.craftItemParent, 0LL);
    v37 = *(_QWORD *)&releaseCraftItems->max_length;
    if ( (int)v37 >= 1 )
    {
      v38 = 0LL;
      do
      {
        if ( v38 >= (unsigned int)v37 )
          sub_1BCAA44(v33, v34);
        EventInfoReleaseCraftItemDialog__CreateCraftItem(this, releaseCraftItems->m_Items[v38], v35);
        LODWORD(v37) = releaseCraftItems->max_length;
        ++v38;
      }
      while ( (__int64)v38 < (int)v37 );
    }
    v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__Setup_b__7_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
  }
}


void __fastcall EventInfoReleaseCraftItemDialog___OnClose_b__11_0(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B177EB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B177EB = 1;
  }
  ActionExtensions__Call(this->fields.onClosed, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


void __fastcall EventInfoReleaseCraftItemDialog___OnToCraft_b__10_0(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B177EA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B177EA = 1;
  }
  ActionExtensions__Call(this->fields.onToCraft, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


void __fastcall EventInfoReleaseCraftItemDialog___Setup_b__7_0(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  this->fields.canTap = 1;
}