void TradeRankUpDialog___ctor(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5973077 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5973077 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v12; // x1
  Il2CppObject *Component_object; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x23
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *ComponentInChildren_object__59470360; // x21
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+0h] [xbp-80h] BYREF
  int32_t goodsIconId; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5973076 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____91783008);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21486/*"img_popularitem_{0}"*/);
    byte_5973076 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( tradeGoodsEntity )
  {
    tradeItemPrefab = (Il2CppObject *)this->fields.tradeItemPrefab;
    tradeItemParent = this->fields.tradeItemParent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, atlasList);
    v9 = UnityEngine_Object__Instantiate_object__59717116(
           tradeItemPrefab,
           tradeItemParent,
           (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    v10 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)v10 & 1) == 0 )
    {
      if ( !v9 )
        goto LABEL_26;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v9,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        goodsIconId = tradeGoodsEntity->fields.goodsIconId;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &goodsIconId);
        v10 = System_String__Format((System_String_o *)StringLiteral_21486/*"img_popularitem_{0}"*/, v14, 0);
        if ( atlasList )
        {
          v15 = v10;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v23,
            (System_Collections_Generic_List_object__o *)atlasList,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
          v25 = v23;
          v23.fields._list = 0;
          *(_QWORD *)&v23.fields._index = &v25;
          while ( 1 )
          {
            v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v25,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
            if ( !v16 )
              break;
            current = v25.fields._current;
            if ( !v25.fields._current )
              sub_2213CDC(v16, v17);
            Sprite = UIAtlas__GetSprite((UIAtlas_o *)v25.fields._current, v15, 0);
            if ( Sprite )
            {
              if ( !Component_object )
                sub_2213CDC(Sprite, v20);
              UISprite__set_atlas((UISprite_o *)Component_object, (UIAtlas_o *)current, 0);
              UISprite__set_spriteName((UISprite_o *)Component_object, v15, 0);
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v25,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
          ComponentInChildren_object__59470360 = UnityEngine_GameObject__GetComponentInChildren_object__59470360(
                                                   (UnityEngine_GameObject_o *)v9,
                                                   1,
                                                   (const MethodInfo_38B7218 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____91783008);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
          v10 = (System_String_o *)UnityEngine_Object__op_Inequality(
                                     (UnityEngine_Object_o *)ComponentInChildren_object__59470360,
                                     0,
                                     0);
          if ( ((unsigned __int8)v10 & 1) == 0 )
            goto LABEL_23;
          if ( ComponentInChildren_object__59470360 )
          {
            UILabel__set_text((UILabel_o *)ComponentInChildren_object__59470360, tradeGoodsEntity->fields.name, 0);
LABEL_23:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0);
            return;
          }
        }
LABEL_26:
        sub_2213CDC(v10, v11);
      }
    }
  }
}


void TradeRankUpDialog__OnClickClose(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_5973075 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TradeRankUpDialog_OnClickClose__);
    byte_5973075 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
  v4 = Method_TradeRankUpDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_TradeRankUpDialog_OnClickClose__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_TradeRankUpDialog_OnClickClose__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t progressValue; // w27
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x22
  System_String_o *v20; // x23
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *beforeRankLabel; // x24
  System_String_o *v26; // x22
  __int64 v27; // x1
  UILabel_o *Master_object; // x0
  UnityEngine_Object_o *afterRankLabel; // x23
  EventTradeStoreEntity_array *TradeStoreEntities; // x0
  __int64 v31; // x1
  UnityEngine_Object_o *descriptionLabel; // x22
  EventTradeStoreEntity_array *v33; // x23
  __int64 v34; // x1
  UILabel_o *v35; // x22
  System_String_o *v36; // x24
  int32_t max_length; // w1
  __int64 v38; // x8
  Il2CppObject *v39; // x0
  const MethodInfo *v40; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UILabel_o *v42; // x21
  unsigned __int64 v43; // x22
  __int64 v44; // [xsp+8h] [xbp-68h] BYREF
  int32_t v45; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_5973074 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&System_Nullable_int__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_14068/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/);
    sub_2213A60(&StringLiteral_14067/*"TRADE_RANK_NAME_{0}"*/);
    byte_5973074 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventProgressEntity);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  if ( eventProgressEntity )
  {
    this->fields.onClosed = inOnClosed;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onClosed,
      (int32_t)inOnClosed,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    progressValue = eventProgressEntity->fields.progressValue;
    LODWORD(v44) = progressValue - 1;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v44);
    v19 = System_String__Format((System_String_o *)StringLiteral_14067/*"TRADE_RANK_NAME_{0}"*/, v17, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    v20 = LocalizationManager__Get(v19, 0);
    v45 = progressValue;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v45);
    v22 = System_String__Format((System_String_o *)StringLiteral_14067/*"TRADE_RANK_NAME_{0}"*/, v21, 0);
    v23 = LocalizationManager__Get(v22, 0);
    beforeRankLabel = (UnityEngine_Object_o *)this->fields.beforeRankLabel;
    v26 = v23;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality(beforeRankLabel, 0, 0) )
    {
      Master_object = this->fields.beforeRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v20, 0);
    }
    afterRankLabel = (UnityEngine_Object_o *)this->fields.afterRankLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality(afterRankLabel, 0, 0) )
    {
      Master_object = this->fields.afterRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v26, 0);
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( Master_object )
    {
      TradeStoreEntities = EventTradeStoreMaster__GetTradeStoreEntities(
                             (EventTradeStoreMaster_o *)Master_object,
                             eventProgressEntity,
                             0);
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      v33 = TradeStoreEntities;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
      if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
      {
        v35 = this->fields.descriptionLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_14068/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/, 0);
        if ( v33 )
        {
          max_length = v33->max_length;
          v44 = 0;
          System_Nullable_int____ctor(
            (System_Nullable_int__o)&v44,
            max_length,
            (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
          v38 = v44;
        }
        else
        {
          v38 = 0;
        }
        v44 = v38;
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, &v44);
        Master_object = (UILabel_o *)System_String__Format(v36, v39, 0);
        if ( !v35 )
          goto LABEL_43;
        UILabel__set_text(v35, (System_String_o *)Master_object, 0);
      }
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
      Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
      if ( Master_object )
      {
        Master_object = (UILabel_o *)EventTradeGoodsMaster__GetTradeGoodsEntities(
                                       (EventTradeGoodsMaster_o *)Master_object,
                                       eventProgressEntity,
                                       0);
        if ( Master_object )
        {
          m_CancellationTokenSource = Master_object->fields.m_CancellationTokenSource;
          v42 = Master_object;
          if ( (int)m_CancellationTokenSource >= 1 )
          {
            v43 = 0;
            do
            {
              if ( v43 >= (unsigned int)m_CancellationTokenSource )
                sub_2213CE4(Master_object);
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
    sub_2213CDC(Master_object, v27);
  }
}