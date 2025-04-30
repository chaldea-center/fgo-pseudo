void __fastcall EventInfoReleaseCraftItemDialog___ctor(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4FB19 & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A4FB19 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoReleaseCraftItemDialog__CreateCraftItem(
        EventInfoReleaseCraftItemDialog_o *this,
        EventTradeGoodsEntity_o *eventTradeGoodsEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Transform_o *craftItemParent; // x20
  Il2CppObject *craftItemPrefab; // x21
  Il2CppObject *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4A4FB16 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_EventInfoCraftItemComponent___, eventTradeGoodsEntity);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    byte_4A4FB16 = 1;
  }
  if ( eventTradeGoodsEntity )
  {
    craftItemPrefab = (Il2CppObject *)this->fields.craftItemPrefab;
    craftItemParent = this->fields.craftItemParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object__50290416(
           craftItemPrefab,
           craftItemParent,
           (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
    v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
    if ( !v10 )
    {
      if ( v9 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0LL);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v9,
                             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCraftItemComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( v10 )
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
      sub_1B86614(v10, v11);
    }
  }
}


void __fastcall EventInfoReleaseCraftItemDialog__OnClose(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_Action_o *v9; // x20

  if ( (byte_4A4FB18 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_EventInfoReleaseCraftItemDialog_OnClose__, v3);
    sub_1B863B8(&Method_EventInfoReleaseCraftItemDialog__OnClose_b__11_0__, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A4FB18 = 1;
  }
  if ( this->fields.canTap )
  {
    this->fields.canTap = 0;
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
    v7 = Method_EventInfoReleaseCraftItemDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoReleaseCraftItemDialog_OnClose__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B863D0(Method_EventInfoReleaseCraftItemDialog_OnClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B8639C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__OnClose_b__11_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
  }
}


void __fastcall EventInfoReleaseCraftItemDialog__OnToCraft(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4A4FB17 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_EventInfoReleaseCraftItemDialog_OnToCraft__, v3);
    sub_1B863B8(&Method_EventInfoReleaseCraftItemDialog__OnToCraft_b__10_0__, v4);
    byte_4A4FB17 = 1;
  }
  if ( this->fields.canTap )
  {
    this->fields.canTap = 0;
    v5 = Method_EventInfoReleaseCraftItemDialog_OnToCraft__;
    if ( (*((_BYTE *)Method_EventInfoReleaseCraftItemDialog_OnToCraft__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_EventInfoReleaseCraftItemDialog_OnToCraft__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__OnToCraft_b__10_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *storeLabel; // x22
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v14; // x1
  EventTradeStoreMaster_o *v15; // x21
  UILabel_o *v16; // x20
  int v17; // w22
  System_String_o *v18; // x19
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  int MasterName_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4FB15 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventTradeStoreMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&int_TypeInfo, v8);
    sub_1B863B8(&LocalizationManager_TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_3898/*"CRAFT_RELEASE_DIALOG_RELEASE_STORE_DESCRIPTION"*/, v11);
    byte_4A4FB15 = 1;
  }
  storeLabel = (UnityEngine_Object_o *)this->fields.storeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(storeLabel, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    Master_object = (EventTradeStoreMaster_o *)EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                                 Master_object,
                                                 eventId,
                                                 0LL);
    if ( !Master_object )
      goto LABEL_15;
    v15 = Master_object;
    v16 = this->fields.storeLabel;
    v17 = LODWORD(Master_object->fields._MasterName_k__BackingField) - releaseCount;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3898/*"CRAFT_RELEASE_DIALOG_RELEASE_STORE_DESCRIPTION"*/, 0LL);
    v28 = v17;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v19, v20, v21);
    MasterName_k__BackingField = (int)v15->fields._MasterName_k__BackingField;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MasterName_k__BackingField, v23, v24, v25);
    Master_object = (EventTradeStoreMaster_o *)System_String__Format_61686468(v18, v22, v26, 0LL);
    if ( !v16 )
LABEL_15:
      sub_1B86614(Master_object, v14);
    UILabel__set_text(v16, (System_String_o *)Master_object, 0LL);
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
  __int64 v14; // x1
  UnityEngine_Object_o *closeBtn; // x25
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  il2cpp_array_size_t max_length; // w2
  __int64 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  __int64 v25; // x8
  unsigned __int64 v26; // x21
  System_Action_o *v27; // x20

  if ( (byte_4A4FB14 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_EventInfoReleaseCraftItemDialog__Setup_b__7_0__, v13);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v14);
    byte_4A4FB14 = 1;
  }
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  this->fields.onClosed = inOnClosed;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.onClosed, (int32_t)inOnClosed, v16, v17);
  this->fields.onToCraft = inOnToCraft;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.onToCraft, (int32_t)inOnToCraft, v18, v19);
  if ( releaseTradeStoreEntities )
    max_length = releaseTradeStoreEntities->max_length;
  else
    max_length = 0;
  EventInfoReleaseCraftItemDialog__SetStoreLabel(this, eventId, max_length, v20);
  if ( releaseCraftItems )
  {
    TransformHelper__DestroyChildren(this->fields.craftItemParent, 0LL);
    v25 = *(_QWORD *)&releaseCraftItems->max_length;
    if ( (int)v25 >= 1 )
    {
      v26 = 0LL;
      do
      {
        if ( v26 >= (unsigned int)v25 )
          sub_1B8661C(v22, v23);
        EventInfoReleaseCraftItemDialog__CreateCraftItem(this, releaseCraftItems->m_Items[v26], v24);
        LODWORD(v25) = releaseCraftItems->max_length;
        ++v26;
      }
      while ( (__int64)v26 < (int)v25 );
    }
    v27 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_EventInfoReleaseCraftItemDialog__Setup_b__7_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
  }
}


void __fastcall EventInfoReleaseCraftItemDialog___OnClose_b__11_0(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A4FB1B & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4FB1B = 1;
  }
  ActionExtensions__Call(this->fields.onClosed, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
}


void __fastcall EventInfoReleaseCraftItemDialog___OnToCraft_b__10_0(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A4FB1A & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4FB1A = 1;
  }
  ActionExtensions__Call(this->fields.onToCraft, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
}


void __fastcall EventInfoReleaseCraftItemDialog___Setup_b__7_0(
        EventInfoReleaseCraftItemDialog_o *this,
        const MethodInfo *method)
{
  this->fields.canTap = 1;
}