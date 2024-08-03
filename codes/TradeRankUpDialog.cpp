void __fastcall TradeRankUpDialog___ctor(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FE5CC & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FE5CC = 1;
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
  Il2CppObject *Component_object; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x23
  _BOOL8 v23; // x0
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  Il2CppObject *ComponentInChildren_object__48792192; // x21
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+0h] [xbp-80h] BYREF
  int32_t goodsIconId; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FE5CB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, atlasList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____75773104, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v12);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_20315/*"img_popularitem_{0}"*/, v15);
    byte_49FE5CB = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( tradeGoodsEntity )
  {
    tradeItemPrefab = (Il2CppObject *)this->fields.tradeItemPrefab;
    tradeItemParent = this->fields.tradeItemParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object__49003980(
            tradeItemPrefab,
            tradeItemParent,
            (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    v19 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0LL, 0LL);
    if ( ((unsigned __int8)v19 & 1) == 0 )
    {
      if ( !v18 )
        goto LABEL_26;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v18,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        goodsIconId = tradeGoodsEntity->fields.goodsIconId;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId);
        v19 = System_String__Format((System_String_o *)StringLiteral_20315/*"img_popularitem_{0}"*/, v21, 0LL);
        if ( atlasList )
        {
          v22 = v19;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v27,
            (System_Collections_Generic_List_object__o *)atlasList,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
          v29 = v27;
          while ( 1 )
          {
            v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v29,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
            if ( !v23 )
              break;
            current = v29.fields._current;
            if ( !v29.fields._current )
              sub_1B64324(v23);
            Sprite = UIAtlas__GetSprite((UIAtlas_o *)v29.fields._current, v22, 0LL);
            if ( Sprite )
            {
              if ( !Component_object )
                sub_1B64324(Sprite);
              UISprite__set_atlas((UISprite_o *)Component_object, (UIAtlas_o *)current, 0LL);
              UISprite__set_spriteName((UISprite_o *)Component_object, v22, 0LL);
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v29,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
          ComponentInChildren_object__48792192 = UnityEngine_GameObject__GetComponentInChildren_object__48792192(
                                                   (UnityEngine_GameObject_o *)v18,
                                                   1,
                                                   (const MethodInfo_2E88280 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____75773104);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v19 = (System_String_o *)UnityEngine_Object__op_Inequality(
                                     (UnityEngine_Object_o *)ComponentInChildren_object__48792192,
                                     0LL,
                                     0LL);
          if ( ((unsigned __int8)v19 & 1) == 0 )
            goto LABEL_23;
          if ( ComponentInChildren_object__48792192 )
          {
            UILabel__set_text((UILabel_o *)ComponentInChildren_object__48792192, tradeGoodsEntity->fields.name, 0LL);
LABEL_23:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, 1, 0LL);
            return;
          }
        }
LABEL_26:
        sub_1B64324(v19);
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

  if ( (byte_49FE5CA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_TradeRankUpDialog_OnClickClose__, v3);
    byte_49FE5CA = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
  v5 = Method_TradeRankUpDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_TradeRankUpDialog_OnClickClose__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_TradeRankUpDialog_OnClickClose__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
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
  Il2CppObject *v22; // x0
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  UnityEngine_Object_o *beforeRankLabel; // x24
  System_String_o *v29; // x22
  UILabel_o *Master_object; // x0
  UnityEngine_Object_o *afterRankLabel; // x23
  EventTradeStoreEntity_array *TradeStoreEntities; // x0
  UnityEngine_Object_o *descriptionLabel; // x22
  EventTradeStoreEntity_array *v34; // x23
  UILabel_o *v35; // x22
  System_String_o *v36; // x24
  __int64 v37; // x8
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UILabel_o *v42; // x21
  unsigned __int64 v43; // x22
  __int64 v44; // [xsp+8h] [xbp-68h] BYREF
  int32_t v45; // [xsp+1Ch] [xbp-54h] BYREF
  System_Nullable_int__o v46; // 0:x0.8

  if ( (byte_49FE5C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, eventProgressEntity);
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeStoreMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&LocalizationManager_TypeInfo, v12);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v13);
    sub_1B640C8(&System_Nullable_int__TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_13351/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/, v16);
    sub_1B640C8(&StringLiteral_13350/*"TRADE_RANK_NAME_{0}"*/, v17);
    byte_49FE5C9 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  if ( eventProgressEntity )
  {
    this->fields.onClosed = inOnClosed;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClosed, (int32_t)inOnClosed, v19, v20);
    progressValue = eventProgressEntity->fields.progressValue;
    LODWORD(v44) = progressValue - 1;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
    v23 = System_String__Format((System_String_o *)StringLiteral_13350/*"TRADE_RANK_NAME_{0}"*/, v22, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get(v23, 0LL);
    v45 = progressValue;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
    v26 = System_String__Format((System_String_o *)StringLiteral_13350/*"TRADE_RANK_NAME_{0}"*/, v25, 0LL);
    v27 = LocalizationManager__Get(v26, 0LL);
    beforeRankLabel = (UnityEngine_Object_o *)this->fields.beforeRankLabel;
    v29 = v27;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(beforeRankLabel, 0LL, 0LL) )
    {
      Master_object = this->fields.beforeRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v24, 0LL);
    }
    afterRankLabel = (UnityEngine_Object_o *)this->fields.afterRankLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(afterRankLabel, 0LL, 0LL) )
    {
      Master_object = this->fields.afterRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v29, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( Master_object )
    {
      TradeStoreEntities = EventTradeStoreMaster__GetTradeStoreEntities(
                             (EventTradeStoreMaster_o *)Master_object,
                             eventProgressEntity,
                             0LL);
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      v34 = TradeStoreEntities;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
      {
        v35 = this->fields.descriptionLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_13351/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/, 0LL);
        if ( v34 )
        {
          v44 = 0LL;
          v46 = (System_Nullable_int__o)&v44;
          System_Nullable_int____ctor(
            v46,
            v34->max_length,
            (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
          v37 = v44;
        }
        else
        {
          v37 = 0LL;
        }
        v44 = v37;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, &v44);
        Master_object = (UILabel_o *)System_String__Format(v36, v38, 0LL);
        if ( !v35 )
          goto LABEL_43;
        UILabel__set_text(v35, (System_String_o *)Master_object, 0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
      if ( Master_object )
      {
        Master_object = (UILabel_o *)EventTradeGoodsMaster__GetTradeGoodsEntities(
                                       (EventTradeGoodsMaster_o *)Master_object,
                                       eventProgressEntity,
                                       0LL);
        if ( Master_object )
        {
          m_CancellationTokenSource = Master_object->fields.m_CancellationTokenSource;
          v42 = Master_object;
          if ( (int)m_CancellationTokenSource >= 1 )
          {
            v43 = 0LL;
            do
            {
              if ( v43 >= (unsigned int)m_CancellationTokenSource )
                sub_1B6432C(Master_object, v39);
              TradeRankUpDialog__CreateTradeGoodsObject(
                this,
                atlasList,
                *((EventTradeGoodsEntity_o **)&v42->fields.leftAnchor + v43),
                v40);
              LODWORD(m_CancellationTokenSource) = v42->fields.m_CancellationTokenSource;
              ++v43;
            }
            while ( (__int64)v43 < (int)m_CancellationTokenSource );
          }
          return;
        }
      }
    }
LABEL_43:
    sub_1B64324(Master_object);
  }
}