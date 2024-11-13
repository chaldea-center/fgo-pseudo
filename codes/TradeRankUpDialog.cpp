void __fastcall TradeRankUpDialog___ctor(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B181AF & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B181AF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TradeRankUpDialog__CreateTradeGoodsObject(
        TradeRankUpDialog_o *this,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        EventTradeGoodsEntity_o *tradeGoodsEntity,
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Transform_o *tradeItemParent; // x20
  Il2CppObject *tradeItemPrefab; // x22
  Il2CppObject *v27; // x20
  System_String_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *Component_object; // x22
  Il2CppObject *v32; // x0
  System_String_o *v33; // x23
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v38; // x1
  __int64 v39; // x1
  Il2CppObject *ComponentInChildren_object__49687160; // x21
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+0h] [xbp-80h] BYREF
  int32_t goodsIconId; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B181AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, atlasList, tradeGoodsEntity);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____76905656, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_20614/*"img_popularitem_{0}"*/, v23, v24);
    byte_4B181AE = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( tradeGoodsEntity )
  {
    tradeItemPrefab = (Il2CppObject *)this->fields.tradeItemPrefab;
    tradeItemParent = this->fields.tradeItemParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, atlasList);
    v27 = UnityEngine_Object__Instantiate_object__49903816(
            tradeItemPrefab,
            tradeItemParent,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    v28 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v27, 0LL, 0LL);
    if ( ((unsigned __int8)v28 & 1) == 0 )
    {
      if ( !v27 )
        goto LABEL_26;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v27,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        goodsIconId = tradeGoodsEntity->fields.goodsIconId;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId);
        v28 = System_String__Format((System_String_o *)StringLiteral_20614/*"img_popularitem_{0}"*/, v32, 0LL);
        if ( atlasList )
        {
          v33 = v28;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v41,
            (System_Collections_Generic_List_object__o *)atlasList,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
          v43 = v41;
          while ( 1 )
          {
            v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v43,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
            if ( !v34 )
              break;
            current = v43.fields._current;
            if ( !v43.fields._current )
              sub_1BCAA3C(v34, v35);
            Sprite = UIAtlas__GetSprite((UIAtlas_o *)v43.fields._current, v33, 0LL);
            if ( Sprite )
            {
              if ( !Component_object )
                sub_1BCAA3C(Sprite, v38);
              UISprite__set_atlas((UISprite_o *)Component_object, (UIAtlas_o *)current, 0LL);
              UISprite__set_spriteName((UISprite_o *)Component_object, v33, 0LL);
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v43,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
          ComponentInChildren_object__49687160 = UnityEngine_GameObject__GetComponentInChildren_object__49687160(
                                                   (UnityEngine_GameObject_o *)v27,
                                                   1,
                                                   (const MethodInfo_2F62A78 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____76905656);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
          v28 = (System_String_o *)UnityEngine_Object__op_Inequality(
                                     (UnityEngine_Object_o *)ComponentInChildren_object__49687160,
                                     0LL,
                                     0LL);
          if ( ((unsigned __int8)v28 & 1) == 0 )
            goto LABEL_23;
          if ( ComponentInChildren_object__49687160 )
          {
            UILabel__set_text((UILabel_o *)ComponentInChildren_object__49687160, tradeGoodsEntity->fields.name, 0LL);
LABEL_23:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v27, 1, 0LL);
            return;
          }
        }
LABEL_26:
        sub_1BCAA3C(v28, v29);
      }
    }
  }
}


void __fastcall TradeRankUpDialog__OnClickClose(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4B181AD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TradeRankUpDialog_OnClickClose__, v4, v5);
    byte_4B181AD = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
  v7 = Method_TradeRankUpDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_TradeRankUpDialog_OnClickClose__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_TradeRankUpDialog_OnClickClose__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *closeBtn; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int32_t progressValue; // w28
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x22
  System_String_o *v38; // x23
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  __int64 v42; // x1
  UnityEngine_Object_o *beforeRankLabel; // x24
  System_String_o *v44; // x22
  __int64 v45; // x1
  UILabel_o *Master_object; // x0
  UnityEngine_Object_o *afterRankLabel; // x23
  EventTradeStoreEntity_array *TradeStoreEntities; // x0
  __int64 v49; // x1
  UnityEngine_Object_o *descriptionLabel; // x22
  EventTradeStoreEntity_array *v51; // x23
  __int64 v52; // x1
  UILabel_o *v53; // x22
  System_String_o *v54; // x24
  __int64 v55; // x8
  Il2CppObject *v56; // x0
  const MethodInfo *v57; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UILabel_o *v59; // x21
  unsigned __int64 v60; // x22
  __int64 v61; // [xsp+8h] [xbp-68h] BYREF
  int32_t v62; // [xsp+1Ch] [xbp-54h] BYREF
  System_Nullable_int__o v63; // 0:x0.8

  if ( (byte_4B181AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, eventProgressEntity, atlasList);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeStoreMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v17, v18);
    sub_1BCA7E0(&System_Nullable_int__TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_13583/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_13582/*"TRADE_RANK_NAME_{0}"*/, v25, v26);
    byte_4B181AC = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventProgressEntity);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  if ( eventProgressEntity )
  {
    this->fields.onClosed = inOnClosed;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onClosed, (int64_t)inOnClosed, v28, v29, v30, v31, v32, v33);
    progressValue = eventProgressEntity->fields.progressValue;
    LODWORD(v61) = progressValue - 1;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
    v37 = System_String__Format((System_String_o *)StringLiteral_13582/*"TRADE_RANK_NAME_{0}"*/, v35, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
    v38 = LocalizationManager__Get(v37, 0LL);
    v62 = progressValue;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
    v40 = System_String__Format((System_String_o *)StringLiteral_13582/*"TRADE_RANK_NAME_{0}"*/, v39, 0LL);
    v41 = LocalizationManager__Get(v40, 0LL);
    beforeRankLabel = (UnityEngine_Object_o *)this->fields.beforeRankLabel;
    v44 = v41;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
    if ( UnityEngine_Object__op_Inequality(beforeRankLabel, 0LL, 0LL) )
    {
      Master_object = this->fields.beforeRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v38, 0LL);
    }
    afterRankLabel = (UnityEngine_Object_o *)this->fields.afterRankLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
    if ( UnityEngine_Object__op_Inequality(afterRankLabel, 0LL, 0LL) )
    {
      Master_object = this->fields.afterRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v44, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( Master_object )
    {
      TradeStoreEntities = EventTradeStoreMaster__GetTradeStoreEntities(
                             (EventTradeStoreMaster_o *)Master_object,
                             eventProgressEntity,
                             0LL);
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      v51 = TradeStoreEntities;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
      if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
      {
        v53 = this->fields.descriptionLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_13583/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/, 0LL);
        if ( v51 )
        {
          v61 = 0LL;
          v63 = (System_Nullable_int__o)&v61;
          System_Nullable_int____ctor(
            v63,
            v51->max_length,
            (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
          v55 = v61;
        }
        else
        {
          v55 = 0LL;
        }
        v61 = v55;
        v56 = (Il2CppObject *)j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, &v61);
        Master_object = (UILabel_o *)System_String__Format(v54, v56, 0LL);
        if ( !v53 )
          goto LABEL_43;
        UILabel__set_text(v53, (System_String_o *)Master_object, 0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52);
      Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
      if ( Master_object )
      {
        Master_object = (UILabel_o *)EventTradeGoodsMaster__GetTradeGoodsEntities(
                                       (EventTradeGoodsMaster_o *)Master_object,
                                       eventProgressEntity,
                                       0LL);
        if ( Master_object )
        {
          m_CancellationTokenSource = Master_object->fields.m_CancellationTokenSource;
          v59 = Master_object;
          if ( (int)m_CancellationTokenSource >= 1 )
          {
            v60 = 0LL;
            do
            {
              if ( v60 >= (unsigned int)m_CancellationTokenSource )
                sub_1BCAA44(Master_object, v45);
              TradeRankUpDialog__CreateTradeGoodsObject(
                this,
                atlasList,
                *((EventTradeGoodsEntity_o **)&v59->fields.leftAnchor + v60),
                v57);
              LODWORD(m_CancellationTokenSource) = v59->fields.m_CancellationTokenSource;
              ++v60;
            }
            while ( (__int64)v60 < (int)m_CancellationTokenSource );
          }
          return;
        }
      }
    }
LABEL_43:
    sub_1BCAA3C(Master_object, v45);
  }
}