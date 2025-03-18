void __fastcall TradeRankUpDialog___ctor(TradeRankUpDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C24034 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C24034 = 1;
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
  Il2CppObject *ComponentInChildren_object__50601408; // x21
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+0h] [xbp-80h] BYREF
  int32_t goodsIconId; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C24033 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, atlasList);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v8);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____77973720, v9);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    sub_1C3B764(&int_TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v12);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v13);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v14);
    sub_1C3B764(&StringLiteral_20806/*"listframes4"*/, v15);
    byte_4C24033 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( tradeGoodsEntity )
  {
    tradeItemPrefab = (Il2CppObject *)this->fields.tradeItemPrefab;
    tradeItemParent = this->fields.tradeItemParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object__50818788(
            tradeItemPrefab,
            tradeItemParent,
            (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
    v19 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0LL, 0LL);
    if ( ((unsigned __int8)v19 & 1) == 0 )
    {
      if ( !v18 )
        goto LABEL_26;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v18,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        goodsIconId = tradeGoodsEntity->fields.goodsIconId;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId, v22, v23, v24);
        v19 = System_String__Format((System_String_o *)StringLiteral_20806/*"listframes4"*/, v25, 0LL);
        if ( atlasList )
        {
          v26 = v19;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v33,
            (System_Collections_Generic_List_object__o *)atlasList,
            (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
          v35 = v33;
          while ( 1 )
          {
            v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v35,
                    (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
            if ( !v27 )
              break;
            current = v35.fields._current;
            if ( !v35.fields._current )
              sub_1C3B9C0(v27, v28);
            Sprite = UIAtlas__GetSprite((UIAtlas_o *)v35.fields._current, v26, 0LL);
            if ( Sprite )
            {
              if ( !Component_object )
                sub_1C3B9C0(Sprite, v31);
              UISprite__set_atlas((UISprite_o *)Component_object, (UIAtlas_o *)current, 0LL);
              UISprite__set_spriteName((UISprite_o *)Component_object, v26, 0LL);
              break;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v35,
            (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
          ComponentInChildren_object__50601408 = UnityEngine_GameObject__GetComponentInChildren_object__50601408(
                                                   (UnityEngine_GameObject_o *)v18,
                                                   1,
                                                   (const MethodInfo_3041DC0 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel____77973720);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v19 = (System_String_o *)UnityEngine_Object__op_Inequality(
                                     (UnityEngine_Object_o *)ComponentInChildren_object__50601408,
                                     0LL,
                                     0LL);
          if ( ((unsigned __int8)v19 & 1) == 0 )
            goto LABEL_23;
          if ( ComponentInChildren_object__50601408 )
          {
            UILabel__set_text((UILabel_o *)ComponentInChildren_object__50601408, tradeGoodsEntity->fields.name, 0LL);
LABEL_23:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, 1, 0LL);
            return;
          }
        }
LABEL_26:
        sub_1C3B9C0(v19, v20);
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

  if ( (byte_4C24032 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_TradeRankUpDialog_OnClickClose__, v3);
    byte_4C24032 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
  v5 = Method_TradeRankUpDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_TradeRankUpDialog_OnClickClose__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3B77C(Method_TradeRankUpDialog_OnClickClose__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int32_t progressValue; // w28
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x22
  System_String_o *v31; // x23
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  UnityEngine_Object_o *beforeRankLabel; // x24
  System_String_o *v39; // x22
  __int64 v40; // x1
  UILabel_o *Master_object; // x0
  UnityEngine_Object_o *afterRankLabel; // x23
  EventTradeStoreEntity_array *TradeStoreEntities; // x0
  UnityEngine_Object_o *descriptionLabel; // x22
  EventTradeStoreEntity_array *v45; // x23
  UILabel_o *v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_String_o *v50; // x24
  __int64 v51; // x8
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UILabel_o *v55; // x21
  unsigned __int64 v56; // x22
  __int64 v57; // [xsp+8h] [xbp-68h] BYREF
  int32_t v58; // [xsp+1Ch] [xbp-54h] BYREF
  System_Nullable_int__o v59; // 0:x0.8

  if ( (byte_4C24031 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, eventProgressEntity);
    sub_1C3B764(&Method_DataManager_GetMaster_EventTradeStoreMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&int_TypeInfo, v11);
    sub_1C3B764(&LocalizationManager_TypeInfo, v12);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v13);
    sub_1C3B764(&System_Nullable_int__TypeInfo, v14);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v15);
    sub_1C3B764(&StringLiteral_13714/*"The handle is invalid."*/, v16);
    sub_1C3B764(&StringLiteral_13713/*"The group ref to 'all' must have {min occurs}= 0 or 1 and {max occurs}=1."*/, v17);
    byte_4C24031 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0LL, 0LL) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  if ( eventProgressEntity )
  {
    this->fields.onClosed = inOnClosed;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.onClosed, (int64_t)inOnClosed, v19, v20, v21, v22, v23, v24);
    progressValue = eventProgressEntity->fields.progressValue;
    LODWORD(v57) = progressValue - 1;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v26, v27, v28);
    v30 = System_String__Format((System_String_o *)StringLiteral_13713/*"The group ref to 'all' must have {min occurs}= 0 or 1 and {max occurs}=1."*/, v29, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = LocalizationManager__Get(v30, 0LL);
    v58 = progressValue;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v32, v33, v34);
    v36 = System_String__Format((System_String_o *)StringLiteral_13713/*"The group ref to 'all' must have {min occurs}= 0 or 1 and {max occurs}=1."*/, v35, 0LL);
    v37 = LocalizationManager__Get(v36, 0LL);
    beforeRankLabel = (UnityEngine_Object_o *)this->fields.beforeRankLabel;
    v39 = v37;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(beforeRankLabel, 0LL, 0LL) )
    {
      Master_object = this->fields.beforeRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v31, 0LL);
    }
    afterRankLabel = (UnityEngine_Object_o *)this->fields.afterRankLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(afterRankLabel, 0LL, 0LL) )
    {
      Master_object = this->fields.afterRankLabel;
      if ( !Master_object )
        goto LABEL_43;
      UILabel__set_text(Master_object, v39, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( Master_object )
    {
      TradeStoreEntities = EventTradeStoreMaster__GetTradeStoreEntities(
                             (EventTradeStoreMaster_o *)Master_object,
                             eventProgressEntity,
                             0LL);
      descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
      v45 = TradeStoreEntities;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0LL, 0LL) )
      {
        v46 = this->fields.descriptionLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_13714/*"The handle is invalid."*/, 0LL);
        if ( v45 )
        {
          v57 = 0LL;
          v59 = (System_Nullable_int__o)&v57;
          System_Nullable_int____ctor(
            v59,
            v45->max_length,
            (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
          v51 = v57;
        }
        else
        {
          v51 = 0LL;
        }
        v57 = v51;
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, &v57, v47, v48, v49);
        Master_object = (UILabel_o *)System_String__Format(v50, v52, 0LL);
        if ( !v46 )
          goto LABEL_43;
        UILabel__set_text(v46, (System_String_o *)Master_object, 0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
      if ( Master_object )
      {
        Master_object = (UILabel_o *)EventTradeGoodsMaster__GetTradeGoodsEntities(
                                       (EventTradeGoodsMaster_o *)Master_object,
                                       eventProgressEntity,
                                       0LL);
        if ( Master_object )
        {
          m_CancellationTokenSource = Master_object->fields.m_CancellationTokenSource;
          v55 = Master_object;
          if ( (int)m_CancellationTokenSource >= 1 )
          {
            v56 = 0LL;
            do
            {
              if ( v56 >= (unsigned int)m_CancellationTokenSource )
                sub_1C3B9C8(Master_object, v40);
              TradeRankUpDialog__CreateTradeGoodsObject(
                this,
                atlasList,
                *((EventTradeGoodsEntity_o **)&v55->fields.leftAnchor + v56),
                v53);
              LODWORD(m_CancellationTokenSource) = v55->fields.m_CancellationTokenSource;
              ++v56;
            }
            while ( (__int64)v56 < (int)m_CancellationTokenSource );
          }
          return;
        }
      }
    }
LABEL_43:
    sub_1C3B9C0(Master_object, v40);
  }
}