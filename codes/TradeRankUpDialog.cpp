void TradeRankUpDialog___ctor(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C58C69 & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C58C69 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TradeRankUpDialog__CreateTradeGoodsObject(
        TradeRankUpDialog_o *this,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        EventTradeGoodsEntity_o *tradeGoodsEntity,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *tradeItemParent; // x20
  Il2CppObject *tradeItemPrefab; // x22
  Il2CppObject *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x22
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  System_String_o *v20; // x23
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v25; // x1
  Il2CppObject *ComponentInChildren_object__51713140; // x21
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+0h] [xbp-80h] BYREF
  int32_t goodsIconId; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C58C68 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____78255952);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_20514/*"img_popularitem_{0}"*/);
    byte_4C58C68 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( tradeGoodsEntity )
  {
    tradeItemPrefab = (Il2CppObject *)this->fields.tradeItemPrefab;
    tradeItemParent = this->fields.tradeItemParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object__51929056(
           tradeItemPrefab,
           tradeItemParent,
           (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    v10 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)v10 & 1) == 0 )
    {
      if ( !v9 )
        goto LABEL_26;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v9,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        goodsIconId = tradeGoodsEntity->fields.goodsIconId;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId, v13, v14, v15, v16, v17, v18);
        v10 = System_String__Format((System_String_o *)StringLiteral_20514/*"img_popularitem_{0}"*/, v19, 0);
        if ( atlasList )
        {
          v20 = v10;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v27,
            (System_Collections_Generic_List_object__o *)atlasList,
            (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
          v29 = v27;
          while ( 1 )
          {
            v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v29,
                    (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
            if ( !v21 )
              break;
            current = v29.fields._current;
            if ( !v29.fields._current )
              sub_1C3E7C0(v21, v22);
            Sprite = UIAtlas__GetSprite((UIAtlas_o *)v29.fields._current, v20, 0);
            if ( Sprite )
            {
              if ( !Component_object )
                sub_1C3E7C0(Sprite, v25);
              UISprite__set_atlas((UISprite_o *)Component_object, (UIAtlas_o *)current, 0);
              UISprite__set_spriteName((UISprite_o *)Component_object, v20, 0);
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v29,
            (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
          ComponentInChildren_object__51713140 = UnityEngine_GameObject__GetComponentInChildren_object__51713140(
                                                   (UnityEngine_GameObject_o *)v9,
                                                   1,
                                                   (const MethodInfo_3151474 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____78255952);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v10 = (System_String_o *)UnityEngine_Object__op_Inequality(
                                     (UnityEngine_Object_o *)ComponentInChildren_object__51713140,
                                     0,
                                     0);
          if ( ((unsigned __int8)v10 & 1) == 0 )
            goto LABEL_23;
          if ( ComponentInChildren_object__51713140 )
          {
            UILabel__set_text((UILabel_o *)ComponentInChildren_object__51713140, tradeGoodsEntity->fields.name, 0);
LABEL_23:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0);
            return;
          }
        }
LABEL_26:
        sub_1C3E7C0(v10, v11);
      }
    }
  }
}


void TradeRankUpDialog__OnClickClose(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C58C67 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_TradeRankUpDialog_OnClickClose__);
    byte_4C58C67 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
  v4 = Method_TradeRankUpDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_TradeRankUpDialog_OnClickClose__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3E57C(Method_TradeRankUpDialog_OnClickClose__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  BaseDialog__Close((BaseDialog_o *)this, this->fields.onClosed, 0);
}


void TradeRankUpDialog__Setup(
        TradeRankUpDialog_o *this,
        EventProgressValueEntity_o *eventProgressEntity,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t progressValue; // w28
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  System_String_o *v20; // x22
  System_String_o *v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  UnityEngine_Object_o *beforeRankLabel; // x24
  System_String_o *v32; // x22
  __int64 v33; // x1
  UILabel_o *Master_object; // x0
  UnityEngine_Object_o *afterRankLabel; // x23
  EventTradeStoreEntity_array *TradeStoreEntities; // x0
  UnityEngine_Object_o *descriptionLabel; // x22
  EventTradeStoreEntity_array *v38; // x23
  UILabel_o *v39; // x22
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  System_String_o *v46; // x24
  System_Nullable_int__o v47; // x0
  __int64 v48; // x8
  Il2CppObject *v49; // x0
  const MethodInfo *v50; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UILabel_o *v52; // x21
  unsigned __int64 v53; // x22
  __int64 v54; // [xsp+8h] [xbp-68h] BYREF
  int32_t v55; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C58C66 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_int___ctor__);
    sub_1C3E564(&System_Nullable_int__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_13521/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/);
    sub_1C3E564(&StringLiteral_13520/*"TRADE_RANK_NAME_{0}"*/);
    byte_4C58C66 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  if ( eventProgressEntity )
  {
    this->fields.onClosed = inOnClosed;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onClosed, (int32_t)inOnClosed, v10, v11);
    progressValue = eventProgressEntity->fields.progressValue;
    LODWORD(v54) = progressValue - 1;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v13, v14, v15, v16, v17, v18);
    v20 = System_String__Format((System_String_o *)StringLiteral_13520/*"TRADE_RANK_NAME_{0}"*/, v19, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get(v20, 0);
    v55 = progressValue;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v22, v23, v24, v25, v26, v27);
    v29 = System_String__Format((System_String_o *)StringLiteral_13520/*"TRADE_RANK_NAME_{0}"*/, v28, 0);
    v30 = LocalizationManager__Get(v29, 0);
    beforeRankLabel = (UnityEngine_Object_o *)this->fields.beforeRankLabel;
    v32 = v30;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(beforeRankLabel, 0, 0) )
    {
      Master_object = this->fields.beforeRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v21, 0);
    }
    afterRankLabel = (UnityEngine_Object_o *)this->fields.afterRankLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(afterRankLabel, 0, 0) )
    {
      Master_object = this->fields.afterRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v32, 0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( Master_object )
    {
      TradeStoreEntities = EventTradeStoreMaster__GetTradeStoreEntities(
                             (EventTradeStoreMaster_o *)Master_object,
                             eventProgressEntity,
                             0);
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      v38 = TradeStoreEntities;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
      {
        v39 = this->fields.descriptionLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_13521/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/, 0);
        if ( v38 )
        {
          v54 = 0;
          v47 = (System_Nullable_int__o)&v54;
          System_Nullable_int____ctor(
            v47,
            v38->max_length,
            (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
          v48 = v54;
        }
        else
        {
          v48 = 0;
        }
        v54 = v48;
        v49 = (Il2CppObject *)j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, &v54, v40, v41, v42, v43, v44, v45);
        Master_object = (UILabel_o *)System_String__Format(v46, v49, 0);
        if ( !v39 )
          goto LABEL_43;
        UILabel__set_text(v39, (System_String_o *)Master_object, 0);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
      if ( Master_object )
      {
        Master_object = (UILabel_o *)EventTradeGoodsMaster__GetTradeGoodsEntities(
                                       (EventTradeGoodsMaster_o *)Master_object,
                                       eventProgressEntity,
                                       0);
        if ( Master_object )
        {
          m_CancellationTokenSource = Master_object->fields.m_CancellationTokenSource;
          v52 = Master_object;
          if ( (int)m_CancellationTokenSource >= 1 )
          {
            v53 = 0;
            do
            {
              if ( v53 >= (unsigned int)m_CancellationTokenSource )
                sub_1C3E7C8(Master_object, v33);
              TradeRankUpDialog__CreateTradeGoodsObject(
                this,
                atlasList,
                *((EventTradeGoodsEntity_o **)&v52->fields.leftAnchor + v53),
                v50);
              LODWORD(m_CancellationTokenSource) = v52->fields.m_CancellationTokenSource;
              ++v53;
            }
            while ( (__int64)v53 < (int)m_CancellationTokenSource );
          }
          return;
        }
      }
    }
LABEL_43:
    sub_1C3E7C0(Master_object, v33);
  }
}