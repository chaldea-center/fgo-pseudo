void __fastcall TradeRankUpDialog___ctor(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A00CE8 & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    byte_4A00CE8 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TradeRankUpDialog__CreateTradeGoodsObject(
        TradeRankUpDialog_o *this,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        EventTradeGoodsEntity_o *tradeGoodsEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Transform_o *tradeItemParent; // x20
  Il2CppObject *tradeItemPrefab; // x22
  Il2CppObject *v18; // x20
  System_String_o *v19; // x0
  __int64 v20; // x1
  Il2CppObject *Component_object; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x23
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v31; // x1
  Il2CppObject *ComponentInChildren_object__48802676; // x21
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+0h] [xbp-80h] BYREF
  int32_t goodsIconId; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A00CE7 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, atlasList);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v8);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____75783120, v9);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    sub_1B64A00(&int_TypeInfo, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v12);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v13);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v14);
    sub_1B64A00(&StringLiteral_20318/*"img_popularitem_{0}"*/, v15);
    byte_4A00CE7 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( tradeGoodsEntity )
  {
    tradeItemPrefab = (Il2CppObject *)this->fields.tradeItemPrefab;
    tradeItemParent = this->fields.tradeItemParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object__49014464(
            tradeItemPrefab,
            tradeItemParent,
            (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
    v19 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0LL, 0LL);
    if ( ((unsigned __int8)v19 & 1) == 0 )
    {
      if ( !v18 )
        goto LABEL_26;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v18,
                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        goodsIconId = tradeGoodsEntity->fields.goodsIconId;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId, v22, v23, v24);
        v19 = System_String__Format((System_String_o *)StringLiteral_20318/*"img_popularitem_{0}"*/, v25, 0LL);
        if ( atlasList )
        {
          v26 = v19;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v33,
            (System_Collections_Generic_List_object__o *)atlasList,
            (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
          v35 = v33;
          while ( 1 )
          {
            v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v35,
                    (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
            if ( !v27 )
              break;
            current = v35.fields._current;
            if ( !v35.fields._current )
              sub_1B64C5C(v27, v28);
            Sprite = UIAtlas__GetSprite((UIAtlas_o *)v35.fields._current, v26, 0LL);
            if ( Sprite )
            {
              if ( !Component_object )
                sub_1B64C5C(Sprite, v31);
              UISprite__set_atlas((UISprite_o *)Component_object, (UIAtlas_o *)current, 0LL);
              UISprite__set_spriteName((UISprite_o *)Component_object, v26, 0LL);
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v35,
            (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
          ComponentInChildren_object__48802676 = UnityEngine_GameObject__GetComponentInChildren_object__48802676(
                                                   (UnityEngine_GameObject_o *)v18,
                                                   1,
                                                   (const MethodInfo_2E8AB74 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____75783120);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v19 = (System_String_o *)UnityEngine_Object__op_Inequality(
                                     (UnityEngine_Object_o *)ComponentInChildren_object__48802676,
                                     0LL,
                                     0LL);
          if ( ((unsigned __int8)v19 & 1) == 0 )
            goto LABEL_23;
          if ( ComponentInChildren_object__48802676 )
          {
            UILabel__set_text((UILabel_o *)ComponentInChildren_object__48802676, tradeGoodsEntity->fields.name, 0LL);
LABEL_23:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, 1, 0LL);
            return;
          }
        }
LABEL_26:
        sub_1B64C5C(v19, v20);
      }
    }
  }
}


void __fastcall TradeRankUpDialog__OnClickClose(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4A00CE6 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&Method_TradeRankUpDialog_OnClickClose__, v3);
    byte_4A00CE6 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
  v5 = Method_TradeRankUpDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_TradeRankUpDialog_OnClickClose__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B64A18(Method_TradeRankUpDialog_OnClickClose__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, this->fields.onClosed, 0LL);
}


void __fastcall TradeRankUpDialog__Setup(
        TradeRankUpDialog_o *this,
        EventProgressValueEntity_o *eventProgressEntity,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *closeBtn; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t progressValue; // w28
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UnityEngine_Object_o *beforeRankLabel; // x24
  System_String_o *v35; // x22
  __int64 v36; // x1
  UILabel_o *Master_object; // x0
  UnityEngine_Object_o *afterRankLabel; // x23
  EventTradeStoreEntity_array *TradeStoreEntities; // x0
  UnityEngine_Object_o *descriptionLabel; // x22
  EventTradeStoreEntity_array *v41; // x23
  UILabel_o *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_String_o *v46; // x24
  __int64 v47; // x8
  Il2CppObject *v48; // x0
  const MethodInfo *v49; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UILabel_o *v51; // x21
  unsigned __int64 v52; // x22
  __int64 v53; // [xsp+8h] [xbp-68h] BYREF
  int32_t v54; // [xsp+1Ch] [xbp-54h] BYREF
  System_Nullable_int__o v55; // 0:x0.8

  if ( (byte_4A00CE5 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, eventProgressEntity);
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradeStoreMaster___, v9);
    sub_1B64A00(&DataManager_TypeInfo, v10);
    sub_1B64A00(&int_TypeInfo, v11);
    sub_1B64A00(&LocalizationManager_TypeInfo, v12);
    sub_1B64A00(&Method_System_Nullable_int___ctor__, v13);
    sub_1B64A00(&System_Nullable_int__TypeInfo, v14);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v15);
    sub_1B64A00(&StringLiteral_13356/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/, v16);
    sub_1B64A00(&StringLiteral_13355/*"TRADE_RANK_NAME_{0}"*/, v17);
    byte_4A00CE5 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  if ( eventProgressEntity )
  {
    this->fields.onClosed = inOnClosed;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.onClosed, (int32_t)inOnClosed, v19, v20);
    progressValue = eventProgressEntity->fields.progressValue;
    LODWORD(v53) = progressValue - 1;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v22, v23, v24);
    v26 = System_String__Format((System_String_o *)StringLiteral_13355/*"TRADE_RANK_NAME_{0}"*/, v25, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get(v26, 0LL);
    v54 = progressValue;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v28, v29, v30);
    v32 = System_String__Format((System_String_o *)StringLiteral_13355/*"TRADE_RANK_NAME_{0}"*/, v31, 0LL);
    v33 = LocalizationManager__Get(v32, 0LL);
    beforeRankLabel = (UnityEngine_Object_o *)this->fields.beforeRankLabel;
    v35 = v33;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(beforeRankLabel, 0LL, 0LL) )
    {
      Master_object = this->fields.beforeRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v27, 0LL);
    }
    afterRankLabel = (UnityEngine_Object_o *)this->fields.afterRankLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(afterRankLabel, 0LL, 0LL) )
    {
      Master_object = this->fields.afterRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v35, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( Master_object )
    {
      TradeStoreEntities = EventTradeStoreMaster__GetTradeStoreEntities(
                             (EventTradeStoreMaster_o *)Master_object,
                             eventProgressEntity,
                             0LL);
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      v41 = TradeStoreEntities;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
      {
        v42 = this->fields.descriptionLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_13356/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/, 0LL);
        if ( v41 )
        {
          v53 = 0LL;
          v55 = (System_Nullable_int__o)&v53;
          System_Nullable_int____ctor(
            v55,
            v41->max_length,
            (const MethodInfo_35D067C *)Method_System_Nullable_int___ctor__);
          v47 = v53;
        }
        else
        {
          v47 = 0LL;
        }
        v53 = v47;
        v48 = (Il2CppObject *)j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, &v53, v43, v44, v45);
        Master_object = (UILabel_o *)System_String__Format(v46, v48, 0LL);
        if ( !v42 )
          goto LABEL_43;
        UILabel__set_text(v42, (System_String_o *)Master_object, 0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
      if ( Master_object )
      {
        Master_object = (UILabel_o *)EventTradeGoodsMaster__GetTradeGoodsEntities(
                                       (EventTradeGoodsMaster_o *)Master_object,
                                       eventProgressEntity,
                                       0LL);
        if ( Master_object )
        {
          m_CancellationTokenSource = Master_object->fields.m_CancellationTokenSource;
          v51 = Master_object;
          if ( (int)m_CancellationTokenSource >= 1 )
          {
            v52 = 0LL;
            do
            {
              if ( v52 >= (unsigned int)m_CancellationTokenSource )
                sub_1B64C64(Master_object, v36);
              TradeRankUpDialog__CreateTradeGoodsObject(
                this,
                atlasList,
                *((EventTradeGoodsEntity_o **)&v51->fields.leftAnchor + v52),
                v49);
              LODWORD(m_CancellationTokenSource) = v51->fields.m_CancellationTokenSource;
              ++v52;
            }
            while ( (__int64)v52 < (int)m_CancellationTokenSource );
          }
          return;
        }
      }
    }
LABEL_43:
    sub_1B64C5C(Master_object, v36);
  }
}