void __fastcall TradeRankUpDialog___ctor(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5D197 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5D197 = 1;
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
  UnityEngine_Transform_o *tradeItemParent; // x20
  Il2CppObject *tradeItemPrefab; // x22
  Il2CppObject *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x22
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x23
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *Sprite; // x0
  __int64 v22; // x1
  Il2CppObject *ComponentInChildren_object__49082976; // x21
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+0h] [xbp-80h] BYREF
  int32_t goodsIconId; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5D196 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____76153160);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20395/*"img_popularitem_{0}"*/);
    byte_4A5D196 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( tradeGoodsEntity )
  {
    tradeItemPrefab = (Il2CppObject *)this->fields.tradeItemPrefab;
    tradeItemParent = this->fields.tradeItemParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object__49297800(
           tradeItemPrefab,
           tradeItemParent,
           (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    v10 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
    if ( ((unsigned __int8)v10 & 1) == 0 )
    {
      if ( !v9 )
        goto LABEL_26;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v9,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        goodsIconId = tradeGoodsEntity->fields.goodsIconId;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId, v13, v14, v15);
        v10 = System_String__Format((System_String_o *)StringLiteral_20395/*"img_popularitem_{0}"*/, v16, 0LL);
        if ( atlasList )
        {
          v17 = v10;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v24,
            (System_Collections_Generic_List_object__o *)atlasList,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
          v26 = v24;
          while ( 1 )
          {
            v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v26,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
            if ( !v18 )
              break;
            current = v26.fields._current;
            if ( !v26.fields._current )
              sub_1B8880C(v18, v19);
            Sprite = UIAtlas__GetSprite((UIAtlas_o *)v26.fields._current, v17, 0LL);
            if ( Sprite )
            {
              if ( !Component_object )
                sub_1B8880C(Sprite, v22);
              UISprite__set_atlas((UISprite_o *)Component_object, (UIAtlas_o *)current, 0LL);
              UISprite__set_spriteName((UISprite_o *)Component_object, v17, 0LL);
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v26,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
          ComponentInChildren_object__49082976 = UnityEngine_GameObject__GetComponentInChildren_object__49082976(
                                                   (UnityEngine_GameObject_o *)v9,
                                                   1,
                                                   (const MethodInfo_2ECF260 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____76153160);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v10 = (System_String_o *)UnityEngine_Object__op_Inequality(
                                     (UnityEngine_Object_o *)ComponentInChildren_object__49082976,
                                     0LL,
                                     0LL);
          if ( ((unsigned __int8)v10 & 1) == 0 )
            goto LABEL_23;
          if ( ComponentInChildren_object__49082976 )
          {
            UILabel__set_text((UILabel_o *)ComponentInChildren_object__49082976, tradeGoodsEntity->fields.name, 0LL);
LABEL_23:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0LL);
            return;
          }
        }
LABEL_26:
        sub_1B8880C(v10, v11);
      }
    }
  }
}


void __fastcall TradeRankUpDialog__OnClickClose(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4A5D195 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_TradeRankUpDialog_OnClickClose__);
    byte_4A5D195 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
  v4 = Method_TradeRankUpDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_TradeRankUpDialog_OnClickClose__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_TradeRankUpDialog_OnClickClose__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, this->fields.onClosed, 0LL);
}


void __fastcall TradeRankUpDialog__Setup(
        TradeRankUpDialog_o *this,
        EventProgressValueEntity_o *eventProgressEntity,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t progressValue; // w28
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x22
  System_String_o *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  UnityEngine_Object_o *beforeRankLabel; // x24
  System_String_o *v26; // x22
  __int64 v27; // x1
  UILabel_o *Master_object; // x0
  UnityEngine_Object_o *afterRankLabel; // x23
  EventTradeStoreEntity_array *TradeStoreEntities; // x0
  UnityEngine_Object_o *descriptionLabel; // x22
  EventTradeStoreEntity_array *v32; // x23
  UILabel_o *v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_String_o *v37; // x24
  __int64 v38; // x8
  Il2CppObject *v39; // x0
  const MethodInfo *v40; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UILabel_o *v42; // x21
  unsigned __int64 v43; // x22
  __int64 v44; // [xsp+8h] [xbp-68h] BYREF
  int32_t v45; // [xsp+1Ch] [xbp-54h] BYREF
  System_Nullable_int__o v46; // 0:x0.8

  if ( (byte_4A5D194 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&System_Nullable_int__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_13420/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_13419/*"TRADE_RANK_NAME_{0}"*/);
    byte_4A5D194 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  if ( eventProgressEntity )
  {
    this->fields.onClosed = inOnClosed;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClosed, (int32_t)inOnClosed, v10, v11);
    progressValue = eventProgressEntity->fields.progressValue;
    LODWORD(v44) = progressValue - 1;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v13, v14, v15);
    v17 = System_String__Format((System_String_o *)StringLiteral_13419/*"TRADE_RANK_NAME_{0}"*/, v16, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get(v17, 0LL);
    v45 = progressValue;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v19, v20, v21);
    v23 = System_String__Format((System_String_o *)StringLiteral_13419/*"TRADE_RANK_NAME_{0}"*/, v22, 0LL);
    v24 = LocalizationManager__Get(v23, 0LL);
    beforeRankLabel = (UnityEngine_Object_o *)this->fields.beforeRankLabel;
    v26 = v24;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(beforeRankLabel, 0LL, 0LL) )
    {
      Master_object = this->fields.beforeRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v18, 0LL);
    }
    afterRankLabel = (UnityEngine_Object_o *)this->fields.afterRankLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(afterRankLabel, 0LL, 0LL) )
    {
      Master_object = this->fields.afterRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v26, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( Master_object )
    {
      TradeStoreEntities = EventTradeStoreMaster__GetTradeStoreEntities(
                             (EventTradeStoreMaster_o *)Master_object,
                             eventProgressEntity,
                             0LL);
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      v32 = TradeStoreEntities;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
      {
        v33 = this->fields.descriptionLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v37 = LocalizationManager__Get((System_String_o *)StringLiteral_13420/*"TRADE_RANK_UP_DIALOG_DESCRIPTION"*/, 0LL);
        if ( v32 )
        {
          v44 = 0LL;
          v46 = (System_Nullable_int__o)&v44;
          System_Nullable_int____ctor(
            v46,
            v32->max_length,
            (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
          v38 = v44;
        }
        else
        {
          v38 = 0LL;
        }
        v44 = v38;
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, &v44, v34, v35, v36);
        Master_object = (UILabel_o *)System_String__Format(v37, v39, 0LL);
        if ( !v33 )
          goto LABEL_43;
        UILabel__set_text(v33, (System_String_o *)Master_object, 0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
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
                sub_1B88814(Master_object, v27);
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
    sub_1B8880C(Master_object, v27);
  }
}