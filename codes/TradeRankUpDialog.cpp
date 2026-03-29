void TradeRankUpDialog___ctor(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D3323F & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D3323F = 1;
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
  Il2CppObject *v13; // x0
  System_String_o *v14; // x23
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v19; // x1
  Il2CppObject *ComponentInChildren_object__52413484; // x21
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+0h] [xbp-80h] BYREF
  int32_t goodsIconId; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D3323E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____79129392);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_20729/*"img_popularitem_{0}"*/);
    byte_4D3323E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( tradeGoodsEntity )
  {
    tradeItemPrefab = (Il2CppObject *)this->fields.tradeItemPrefab;
    tradeItemParent = this->fields.tradeItemParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object__52629400(
           tradeItemPrefab,
           tradeItemParent,
           (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    v10 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)v10 & 1) == 0 )
    {
      if ( !v9 )
        goto LABEL_26;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v9,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        goodsIconId = tradeGoodsEntity->fields.goodsIconId;
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId);
        v10 = System_String__Format((System_String_o *)StringLiteral_20729/*"img_popularitem_{0}"*/, v13, 0);
        if ( atlasList )
        {
          v14 = v10;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v21,
            (System_Collections_Generic_List_object__o *)atlasList,
            (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
          v23 = v21;
          while ( 1 )
          {
            v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v23,
                    (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
            if ( !v15 )
              break;
            current = v23.fields._current;
            if ( !v23.fields._current )
              sub_1C93D2C(v15, v16);
            Sprite = UIAtlas__GetSprite((UIAtlas_o *)v23.fields._current, v14, 0);
            if ( Sprite )
            {
              if ( !Component_object )
                sub_1C93D2C(Sprite, v19);
              UISprite__set_atlas((UISprite_o *)Component_object, (UIAtlas_o *)current, 0);
              UISprite__set_spriteName((UISprite_o *)Component_object, v14, 0);
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v23,
            (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
          ComponentInChildren_object__52413484 = UnityEngine_GameObject__GetComponentInChildren_object__52413484(
                                                   (UnityEngine_GameObject_o *)v9,
                                                   1,
                                                   (const MethodInfo_31FC42C *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____79129392);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v10 = (System_String_o *)UnityEngine_Object__op_Inequality(
                                     (UnityEngine_Object_o *)ComponentInChildren_object__52413484,
                                     0,
                                     0);
          if ( ((unsigned __int8)v10 & 1) == 0 )
            goto LABEL_23;
          if ( ComponentInChildren_object__52413484 )
          {
            UILabel__set_text((UILabel_o *)ComponentInChildren_object__52413484, tradeGoodsEntity->fields.name, 0);
LABEL_23:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0);
            return;
          }
        }
LABEL_26:
        sub_1C93D2C(v10, v11);
      }
    }
  }
}


void TradeRankUpDialog__OnClickClose(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4D3323D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_TradeRankUpDialog_OnClickClose__);
    byte_4D3323D = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
  v4 = Method_TradeRankUpDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_TradeRankUpDialog_OnClickClose__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_TradeRankUpDialog_OnClickClose__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t progressValue; // w28
  Il2CppObject *v17; // x0
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UnityEngine_Object_o *beforeRankLabel; // x24
  System_String_o *v24; // x22
  __int64 v25; // x1
  UILabel_o *Master_object; // x0
  UnityEngine_Object_o *afterRankLabel; // x23
  EventTradeStoreEntity_array *TradeStoreEntities; // x0
  UnityEngine_Object_o *descriptionLabel; // x22
  EventTradeStoreEntity_array *v30; // x23
  UILabel_o *v31; // x22
  System_String_o *v32; // x24
  __int64 v33; // x8
  Il2CppObject *v34; // x0
  const MethodInfo *v35; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UILabel_o *v37; // x21
  unsigned __int64 v38; // x22
  __int64 v39; // [xsp+8h] [xbp-68h] BYREF
  int32_t v40; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4D3323C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&System_Nullable_int__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_13609/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/);
    sub_1C93AD4(&StringLiteral_13608/*"TRADE_RANK_NAME_{0}"*/);
    byte_4D3323C = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  if ( eventProgressEntity )
  {
    this->fields.onClosed = inOnClosed;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.onClosed,
      (int32_t)inOnClosed,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    progressValue = eventProgressEntity->fields.progressValue;
    LODWORD(v39) = progressValue - 1;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    v18 = System_String__Format((System_String_o *)StringLiteral_13608/*"TRADE_RANK_NAME_{0}"*/, v17, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get(v18, 0);
    v40 = progressValue;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    v21 = System_String__Format((System_String_o *)StringLiteral_13608/*"TRADE_RANK_NAME_{0}"*/, v20, 0);
    v22 = LocalizationManager__Get(v21, 0);
    beforeRankLabel = (UnityEngine_Object_o *)this->fields.beforeRankLabel;
    v24 = v22;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(beforeRankLabel, 0, 0) )
    {
      Master_object = this->fields.beforeRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v19, 0);
    }
    afterRankLabel = (UnityEngine_Object_o *)this->fields.afterRankLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(afterRankLabel, 0, 0) )
    {
      Master_object = this->fields.afterRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v24, 0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( Master_object )
    {
      TradeStoreEntities = EventTradeStoreMaster__GetTradeStoreEntities(
                             (EventTradeStoreMaster_o *)Master_object,
                             eventProgressEntity,
                             0);
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      v30 = TradeStoreEntities;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
      {
        v31 = this->fields.descriptionLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_13609/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/, 0);
        if ( v30 )
        {
          v39 = 0;
          System_Nullable_int____ctor(
            (System_Nullable_int__o)&v39,
            v30->max_length,
            (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
          v33 = v39;
        }
        else
        {
          v33 = 0;
        }
        v39 = v33;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, &v39);
        Master_object = (UILabel_o *)System_String__Format(v32, v34, 0);
        if ( !v31 )
          goto LABEL_43;
        UILabel__set_text(v31, (System_String_o *)Master_object, 0);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
      if ( Master_object )
      {
        Master_object = (UILabel_o *)EventTradeGoodsMaster__GetTradeGoodsEntities(
                                       (EventTradeGoodsMaster_o *)Master_object,
                                       eventProgressEntity,
                                       0);
        if ( Master_object )
        {
          m_CancellationTokenSource = Master_object->fields.m_CancellationTokenSource;
          v37 = Master_object;
          if ( (int)m_CancellationTokenSource >= 1 )
          {
            v38 = 0;
            do
            {
              if ( v38 >= (unsigned int)m_CancellationTokenSource )
                sub_1C93D34(Master_object);
              TradeRankUpDialog__CreateTradeGoodsObject(
                this,
                atlasList,
                *((EventTradeGoodsEntity_o **)&v37->fields.leftAnchor + v38),
                v35);
              LODWORD(m_CancellationTokenSource) = v37->fields.m_CancellationTokenSource;
              ++v38;
            }
            while ( (__int64)v38 < (int)m_CancellationTokenSource );
          }
          return;
        }
      }
    }
LABEL_43:
    sub_1C93D2C(Master_object, v25);
  }
}