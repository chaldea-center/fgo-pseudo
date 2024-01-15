void __fastcall BattleDropItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F8CDC & 1) == 0 )
  {
    sub_B16FFC(&BattleDropItemComponent_TypeInfo, v1);
    byte_40F8CDC = 1;
  }
  LODWORD(BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth) = (struct BattleDropItemComponent_StaticFields)1118306304;
}


void __fastcall BattleDropItemComponent___ctor(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleDropItemComponent__OnClick(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  struct BattleDropItem_o *itemData; // x1
  BattleDropItemComponent_ClickDelegate_o *callbackFunc; // x0

  if ( Gift__IsServant(this->fields.gifttype, 0LL) )
  {
    itemData = this->fields.itemData;
    if ( !itemData )
      goto LABEL_16;
    if ( itemData->fields.userSvtId > 0 )
      goto LABEL_8;
LABEL_7:
    if ( itemData->fields.objectId >= 1 )
      goto LABEL_8;
    return;
  }
  if ( Gift__IsItem(this->fields.gifttype, 0LL) )
  {
LABEL_6:
    itemData = this->fields.itemData;
    if ( !itemData )
      goto LABEL_16;
    goto LABEL_7;
  }
  if ( !Gift__IsCommandCode(this->fields.gifttype, 0LL) )
  {
    if ( !Gift__IsEventPointBuff(this->fields.gifttype, 0LL) )
      return;
    goto LABEL_6;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_16;
  if ( itemData->fields.userSvtId >= 1 )
  {
LABEL_8:
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      BattleDropItemComponent_ClickDelegate__Invoke(callbackFunc, itemData, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall BattleDropItemComponent__Set(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2
  struct BattleDropItem_o *itemData; // x8
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_Object_o *back; // x21
  const MethodInfo *v17; // x1
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x2
  UnityEngine_Component_o *addRewardSprite; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *root; // x0

  if ( (byte_40F8CD1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, indata);
    byte_40F8CD1 = 1;
  }
  this->fields.itemData = indata;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemData,
    (System_Int32_array **)indata,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_26;
  this->fields.gifttype = itemData->fields.type;
  if ( !indata )
    goto LABEL_26;
  BattleDropItemComponent__setRateUp(this, indata->fields.isRateUp, v10);
  if ( Gift__IsServant(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetServant(this, v12);
  }
  else if ( Gift__IsItem(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetItem(this, v13);
  }
  else if ( Gift__IsCommandCode(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetCommandCode(this, v14);
  }
  else if ( Gift__IsEventPointBuff(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetEventPointBuff(this, v15);
  }
  back = (UnityEngine_Object_o *)this->fields.back;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(back, 0LL, 0LL) )
  {
    v18 = (UnityEngine_Component_o *)this->fields.back;
    if ( !v18 )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  BattleDropItemComponent__SetAutoSellItem(this, v17);
  BattleDropItemComponent__ShowAcquisitionUp(this, indata, v20);
  if ( indata->fields.isAddReward )
  {
    addRewardSprite = (UnityEngine_Component_o *)this->fields.addRewardSprite;
    if ( addRewardSprite )
    {
      v22 = UnityEngine_Component__get_gameObject(addRewardSprite, 0LL);
      if ( v22 )
      {
        UnityEngine_GameObject__SetActive(v22, 1, 0LL);
        root = this->fields.root;
        if ( root )
        {
          UnityEngine_GameObject__SetActive(root, 0, 0LL);
          return;
        }
      }
    }
LABEL_26:
    sub_B170D4();
  }
}


void __fastcall BattleDropItemComponent__SetAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  struct BattleDropItem_o *itemData; // x8
  UnityEngine_Object_o *autoSellInfo; // x20
  const MethodInfo *v5; // x1
  AutoSellInfoComponent_o *v6; // x0
  struct BattleDropItem_o *v7; // x8
  AutoSellInfoComponent_o *v8; // x0

  if ( (byte_40F8CD6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8CD6 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_16;
  if ( itemData->fields.sellQp > 0 || itemData->fields.sellMana >= 1 )
  {
    autoSellInfo = (UnityEngine_Object_o *)this->fields.autoSellInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(autoSellInfo, 0LL, 0LL) )
      goto LABEL_14;
    v6 = this->fields.autoSellInfo;
    if ( v6 )
    {
      AutoSellInfoComponent__Clear(v6, 0LL);
      v7 = this->fields.itemData;
      if ( v7 )
      {
        v8 = this->fields.autoSellInfo;
        if ( v8 )
        {
          AutoSellInfoComponent__SetData(
            v8,
            v7->fields.sellMana * v7->fields.num,
            v7->fields.sellQp * v7->fields.num,
            -1,
            -1,
            0LL);
LABEL_14:
          BattleDropItemComponent__ShowAutoSellItem(this, v5);
          return;
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall BattleDropItemComponent__SetCallBack(
        BattleDropItemComponent_o *this,
        BattleDropItemComponent_ClickDelegate_o *call,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.callbackFunc = call;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)call,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleDropItemComponent__SetCommandCode(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *item; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleDropItem_o *itemData; // x8
  int64_t userSvtId; // x1
  BattleServantFaceIconComponent_o *servant; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0

  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_13;
  ItemIconComponent__Clear(item, 0LL);
  v4 = (UnityEngine_Component_o *)this->fields.item;
  if ( !v4 )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_13;
  userSvtId = itemData->fields.userSvtId;
  servant = this->fields.servant;
  if ( userSvtId < 1 )
  {
    if ( !servant )
      goto LABEL_13;
    BattleServantFaceIconComponent__SetCommandCodeDropByCodeId(
      servant,
      itemData->fields.objectId,
      itemData->fields.num,
      0LL);
  }
  else
  {
    if ( !servant )
      goto LABEL_13;
    BattleServantFaceIconComponent__SetCommandCodeDrop(servant, userSvtId, itemData->fields.num, 0LL);
  }
  v9 = (UnityEngine_Component_o *)this->fields.servant;
  if ( !v9 || (v10 = UnityEngine_Component__get_gameObject(v9, 0LL)) == 0LL )
LABEL_13:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v10, 1, 0LL);
}


void __fastcall BattleDropItemComponent__SetDepth(
        BattleDropItemComponent_o *this,
        int32_t basedepth,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleDropItemComponent__SetEventPointBuff(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantFaceIconComponent_o *servant; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleDropItem_o *itemData; // x8
  WarEntity_o *Entity; // x0
  UnityEngine_Component_o *item; // x0
  UnityEngine_GameObject_o *v13; // x0

  if ( (byte_40F8CD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointBuffMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F8CD5 = 1;
  }
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_14;
  ServantFaceIconComponent__Clear(servant, 0LL);
  v6 = (UnityEngine_Component_o *)this->fields.servant;
  if ( !v6 )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointBuffMaster___),
        (itemData = this->fields.itemData) == 0LL)
    || !MasterData_WarQuestSelectionMaster
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   itemData->fields.objectId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
    || !this->fields.item
    || (ItemIconComponent__SetEventPointBuffImage(
          (ItemIconComponent_o *)this->fields.item,
          Entity->fields.bannerId,
          Entity->fields.priority,
          0LL),
        (item = (UnityEngine_Component_o *)this->fields.item) == 0LL)
    || (v13 = UnityEngine_Component__get_gameObject(item, 0LL)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v13, 1, 0LL);
}


void __fastcall BattleDropItemComponent__SetItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantFaceIconComponent_o *servant; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleDropItem_o *itemData; // x8
  int originalNum; // w10
  int num; // w9
  ItemIconComponent_o *item; // x0
  int32_t objectId; // w1
  int32_t v13; // w2
  struct BattleDropItem_o *v14; // x8
  int v15; // w10
  int32_t v16; // w9
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleDropItem_o *v19; // x8
  WarEntity_o *Entity; // x0
  struct BattleDropItem_o *v21; // x9
  WarEntity_o *v22; // x8
  int32_t v23; // w2
  BattleItemIconComponent_o *v24; // x0
  int32_t bannerId; // w1
  int v26; // w10
  int32_t v27; // w8
  UnityEngine_Component_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0

  if ( (byte_40F8CD4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F8CD4 = 1;
  }
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_35;
  ServantFaceIconComponent__Clear(servant, 0LL);
  v6 = (UnityEngine_Component_o *)this->fields.servant;
  if ( !v6 )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_35;
  originalNum = itemData->fields.originalNum;
  num = itemData->fields.num;
  if ( originalNum < 1 )
  {
    itemData->fields.originalNum = num;
    itemData = this->fields.itemData;
    originalNum = num;
    if ( !itemData )
      goto LABEL_35;
  }
  item = (ItemIconComponent_o *)this->fields.item;
  objectId = itemData->fields.objectId;
  if ( num - originalNum <= 0 )
    num = originalNum;
  if ( num <= 1 )
  {
    if ( !item )
      goto LABEL_35;
    ItemIconComponent__SetItem(item, objectId, -1, 0LL);
  }
  else
  {
    v13 = itemData->fields.originalNum;
    if ( v13 < 1 )
    {
      v13 = itemData->fields.num;
      itemData->fields.originalNum = v13;
    }
    if ( !item )
      goto LABEL_35;
    ItemIconComponent__SetItem(item, objectId, v13, 0LL);
    v14 = this->fields.itemData;
    if ( !v14 )
      goto LABEL_35;
    v15 = v14->fields.originalNum;
    v16 = v14->fields.num;
    if ( v15 <= 0 )
    {
      v15 = v14->fields.num;
      v14->fields.originalNum = v16;
    }
    if ( v16 - v15 >= 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
        v19 = this->fields.itemData;
        if ( v19 )
        {
          if ( MasterData_WarQuestSelectionMaster )
          {
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v19->fields.objectId,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( Entity )
            {
              v21 = this->fields.itemData;
              if ( v21 )
              {
                v22 = Entity;
                v23 = v21->fields.originalNum;
                v24 = this->fields.item;
                bannerId = v22->fields.bannerId;
                if ( v23 > 0
                  || (v23 = v21->fields.num, v21->fields.originalNum = v23, (v21 = this->fields.itemData) != 0LL) )
                {
                  v26 = v21->fields.originalNum;
                  v27 = v21->fields.num;
                  if ( v26 <= 0 )
                  {
                    v26 = v21->fields.num;
                    v21->fields.originalNum = v27;
                  }
                  if ( v24 )
                  {
                    BattleItemIconComponent__setCounterLabel(
                      v24,
                      bannerId,
                      v23,
                      (v27 - v26) & ~((v27 - v26) >> 31),
                      0LL);
                    goto LABEL_32;
                  }
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_B170D4();
    }
  }
LABEL_32:
  v28 = (UnityEngine_Component_o *)this->fields.item;
  if ( !v28 )
    goto LABEL_35;
  v29 = UnityEngine_Component__get_gameObject(v28, 0LL);
  if ( !v29 )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(v29, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__SetMaterialTd(
        BattleDropItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v10; // x19

  if ( (byte_40F8CD9 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, flg);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_21736/*"ribbon_noblephantasmup_01"*/, v6);
    byte_40F8CD9 = 1;
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !v8 || (gameObject = UnityEngine_Component__get_gameObject(v8, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, flg, 0LL);
    if ( flg )
    {
      v10 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v10, (System_String_o *)StringLiteral_21736/*"ribbon_noblephantasmup_01"*/, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__SetPossession(
        BattleDropItemComponent_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *possessionLabel; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  int m_CachedPtr; // w20
  BattleDropItemComponent_c *v11; // x8
  float v12; // s9
  float PossessionLabelWidth; // s8
  UnityEngine_Transform_o *transform; // x20
  struct UILabel_o *v15; // x8
  UnityEngine_Transform_o *v16; // x0
  float v17; // s0
  float v18; // s1
  float v19; // s2
  int32_t possessionNum; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40F8CDB & 1) == 0 )
  {
    sub_B16FFC(&BattleDropItemComponent_TypeInfo, *(_QWORD *)&num);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v5);
    byte_40F8CDB = 1;
  }
  possessionLabel = this->fields.possessionLabel;
  possessionNum = this->fields.possessionNum;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &possessionNum);
  v8 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v7, 0LL);
  if ( !possessionLabel )
    goto LABEL_19;
  UILabel__set_text(possessionLabel, v8, 0LL);
  v9 = (UnityEngine_Component_o *)this->fields.possessionLabel;
  if ( !v9 )
    goto LABEL_19;
  m_CachedPtr = v9[6].fields.m_CachedPtr;
  v11 = BattleDropItemComponent_TypeInfo;
  if ( (BYTE3(BattleDropItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo);
    v11 = BattleDropItemComponent_TypeInfo;
    v9 = (UnityEngine_Component_o *)this->fields.possessionLabel;
  }
  if ( !v9 )
    goto LABEL_19;
  v12 = (float)m_CachedPtr;
  PossessionLabelWidth = v11->static_fields->PossessionLabelWidth;
  transform = UnityEngine_Component__get_transform(v9, 0LL);
  if ( PossessionLabelWidth >= v12 )
  {
    *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
    if ( transform )
    {
      v16 = transform;
      goto LABEL_18;
    }
LABEL_19:
    sub_B170D4();
  }
  if ( (BYTE3(BattleDropItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo);
  }
  v15 = this->fields.possessionLabel;
  if ( !v15 || !transform )
    goto LABEL_19;
  v16 = transform;
  v17 = BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth / (float)v15->fields.mWidth;
  v18 = 1.0;
  v19 = 1.0;
LABEL_18:
  UnityEngine_Transform__set_localScale(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
}


void __fastcall BattleDropItemComponent__SetServant(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ItemIconComponent_o *item; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleDropItem_o *itemData; // x8
  int64_t userSvtId; // x1
  BattleServantFaceIconComponent_o *servant; // x0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  struct BattleDropItem_o *v14; // x8
  const MethodInfo *v15; // x2
  bool IsMaterialTd; // w0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8CD3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    byte_40F8CD3 = 1;
  }
  entity = 0LL;
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_24;
  ItemIconComponent__Clear(item, 0LL);
  v6 = (UnityEngine_Component_o *)this->fields.item;
  if ( !v6 )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_24;
  userSvtId = itemData->fields.userSvtId;
  servant = this->fields.servant;
  if ( userSvtId < 1 )
  {
    if ( !servant )
      goto LABEL_24;
    BattleServantFaceIconComponent__SetSvtDrop(
      servant,
      itemData->fields.objectId,
      itemData->fields.limitCount,
      itemData->fields.num,
      0LL);
  }
  else
  {
    if ( !servant )
      goto LABEL_24;
    BattleServantFaceIconComponent__SetSvtDrop_30256932(
      servant,
      userSvtId,
      0LL,
      itemData->fields.num,
      itemData->fields.limitCount,
      0LL);
  }
  v11 = (UnityEngine_Component_o *)this->fields.servant;
  if ( !v11 )
    goto LABEL_24;
  v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
  if ( !v12 )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(v12, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  v14 = this->fields.itemData;
  if ( !v14 || !Master_WarQuestSelectionMaster )
    goto LABEL_24;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          v14->fields.userSvtId,
          (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    IsMaterialTd = 0;
    goto LABEL_23;
  }
  if ( !entity )
LABEL_24:
    sub_B170D4();
  IsMaterialTd = UserServantEntity__IsMaterialTd(entity, 0LL);
LABEL_23:
  BattleDropItemComponent__SetMaterialTd(this, IsMaterialTd, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__SetTouch(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x20

  if ( (byte_40F8CD0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F8CD0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Collider__set_enabled(Component_srcLineSprite, flg, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__Set_23019784(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        int32_t possessionNum,
        const MethodInfo *method)
{
  this->fields.possessionNum = possessionNum;
  BattleDropItemComponent__Set(this, indata, *(const MethodInfo **)&possessionNum);
}


void __fastcall BattleDropItemComponent__Show(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall BattleDropItemComponent__ShowAcquisitionUp(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *AcquisitionUpObj; // x21
  UnityEngine_Object_o *AcquisitionUpLabel; // x21
  UnityEngine_GameObject_o *v9; // x0
  System_String_o *v10; // x0
  bool v11; // w0
  float v12; // s0
  UILabel_o *v13; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  _QWORD _8[7]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8CD2 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, indata);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2775/*"Battle_RESULT_ITEM_DROPUP"*/, v6);
    byte_40F8CD2 = 1;
  }
  _8[0] = 0LL;
  AcquisitionUpObj = (UnityEngine_Object_o *)this->fields.AcquisitionUpObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(AcquisitionUpObj, 0LL, 0LL) )
  {
    AcquisitionUpLabel = (UnityEngine_Object_o *)this->fields.AcquisitionUpLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(AcquisitionUpLabel, 0LL, 0LL) )
    {
      if ( !indata )
        goto LABEL_23;
      if ( indata->fields.dropUpRate == 1000 )
        return;
      v9 = this->fields.AcquisitionUpObj;
      if ( !v9 )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive(v9, 1, 0LL);
      *((float *)_8 + 1) = (float)indata->fields.dropUpRate / 1000.0;
      LODWORD(_8[0]) = 0;
      v10 = System_Single__ToString(*((float *)_8 + 1), (const MethodInfo *)((char *)_8 + 4));
      v11 = System_Int32__TryParse(v10, (int32_t *)_8, 0LL);
      v13 = this->fields.AcquisitionUpLabel;
      v14 = v11
          ? System_Int32__ToString((int32_t)_8, 0LL)
          : System_Single__ToString(v12, (const MethodInfo *)((char *)_8 + 4));
      v15 = v14;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2775/*"Battle_RESULT_ITEM_DROPUP"*/, 0LL);
      v17 = System_String__Concat_43743732(v15, v16, 0LL);
      if ( !v13 )
LABEL_23:
        sub_B170D4();
      UILabel__set_text(v13, v17, 0LL);
    }
  }
}


void __fastcall BattleDropItemComponent__ShowAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *autoSellInfo; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F8CD7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8CD7 = 1;
  }
  autoSellInfo = (UnityEngine_Object_o *)this->fields.autoSellInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(autoSellInfo, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.autoSellInfo;
    if ( !v4 || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
}


void __fastcall BattleDropItemComponent__ShowDropNum(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *back; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  struct BattleDropItem_o *itemData; // x8
  UnityEngine_GameObject_o *possessionRoot; // x0
  UnityEngine_Component_o *item; // x0
  UnityEngine_GameObject_o *v9; // x0
  BattleItemIconComponent_o *v10; // x0
  UnityEngine_Component_o *servant; // x0
  UnityEngine_GameObject_o *v12; // x0
  const MethodInfo *v13; // x2
  BattleServantFaceIconComponent_o *v14; // x0

  back = (UnityEngine_Component_o *)this->fields.back;
  if ( !back )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(back, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_19;
  if ( itemData->fields.sellQp > 0 || itemData->fields.sellMana >= 1 )
  {
    BattleDropItemComponent__ShowAutoSellItem(this, v5);
    return;
  }
  possessionRoot = this->fields.possessionRoot;
  if ( !possessionRoot )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(possessionRoot, 0, 0LL);
  item = (UnityEngine_Component_o *)this->fields.item;
  if ( !item )
    goto LABEL_19;
  v9 = UnityEngine_Component__get_gameObject(item, 0LL);
  if ( !v9 )
    goto LABEL_19;
  if ( UnityEngine_GameObject__get_activeSelf(v9, 0LL) )
  {
    v10 = this->fields.item;
    if ( !v10 )
      goto LABEL_19;
    BattleItemIconComponent__SetActiveDarkMode(v10, 0, 0LL);
  }
  servant = (UnityEngine_Component_o *)this->fields.servant;
  if ( !servant || (v12 = UnityEngine_Component__get_gameObject(servant, 0LL)) == 0LL )
LABEL_19:
    sub_B170D4();
  if ( UnityEngine_GameObject__get_activeSelf(v12, 0LL) )
  {
    v14 = this->fields.servant;
    if ( v14 )
    {
      BattleServantFaceIconComponent__SetActiveDarkMode(v14, 0, 0LL);
      goto LABEL_18;
    }
    goto LABEL_19;
  }
LABEL_18:
  BattleDropItemComponent__ShowAcquisitionUp(this, this->fields.itemData, v13);
}


void __fastcall BattleDropItemComponent__ShowPossessionNum(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  struct BattleDropItem_o *itemData; // x8
  UnityEngine_Component_o *autoSellInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *back; // x0
  UnityEngine_GameObject_o *v7; // x0
  bool v8; // w20
  UnityEngine_GameObject_o *possessionRoot; // x0
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  UnityEngine_Component_o *item; // x0
  UnityEngine_GameObject_o *v13; // x0
  BattleItemIconComponent_o *v14; // x0
  UnityEngine_Component_o *servant; // x0
  UnityEngine_GameObject_o *v16; // x0
  BattleServantFaceIconComponent_o *v17; // x0
  UnityEngine_Object_o *AcquisitionUpObj; // x20
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_40F8CDA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8CDA = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_32;
  if ( itemData->fields.sellQp <= 0 && itemData->fields.sellMana < 1 )
  {
    v8 = 1;
  }
  else
  {
    autoSellInfo = (UnityEngine_Component_o *)this->fields.autoSellInfo;
    if ( !autoSellInfo )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject(autoSellInfo, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    back = (UnityEngine_Component_o *)this->fields.back;
    if ( !back )
      goto LABEL_32;
    v7 = UnityEngine_Component__get_gameObject(back, 0LL);
    if ( !v7 )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
    v8 = 0;
  }
  if ( this->fields.possessionNum )
  {
    possessionRoot = this->fields.possessionRoot;
    if ( !possessionRoot )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(possessionRoot, 1, 0LL);
    BattleDropItemComponent__SetPossession(this, v10, v11);
  }
  item = (UnityEngine_Component_o *)this->fields.item;
  if ( !item )
    goto LABEL_32;
  v13 = UnityEngine_Component__get_gameObject(item, 0LL);
  if ( !v13 )
    goto LABEL_32;
  if ( UnityEngine_GameObject__get_activeSelf(v13, 0LL) )
  {
    v14 = this->fields.item;
    if ( !v14 )
      goto LABEL_32;
    BattleItemIconComponent__SetActiveDarkMode(v14, v8, 0LL);
  }
  servant = (UnityEngine_Component_o *)this->fields.servant;
  if ( !servant || (v16 = UnityEngine_Component__get_gameObject(servant, 0LL)) == 0LL )
LABEL_32:
    sub_B170D4();
  if ( UnityEngine_GameObject__get_activeSelf(v16, 0LL) )
  {
    v17 = this->fields.servant;
    if ( !v17 )
      goto LABEL_32;
    BattleServantFaceIconComponent__SetActiveDarkMode(v17, v8, 0LL);
  }
  AcquisitionUpObj = (UnityEngine_Object_o *)this->fields.AcquisitionUpObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(AcquisitionUpObj, 0LL, 0LL) )
  {
    v19 = this->fields.AcquisitionUpObj;
    if ( v19 )
    {
      UnityEngine_GameObject__SetActive(v19, 0, 0LL);
      return;
    }
    goto LABEL_32;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__setRateUp(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *additemflg; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40F8CD8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, flg);
    byte_40F8CD8 = 1;
  }
  additemflg = (UnityEngine_Object_o *)this->fields.additemflg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(additemflg, 0LL, 0LL) )
  {
    v6 = this->fields.additemflg;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v6, flg, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent_ClickDelegate___ctor(
        BattleDropItemComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B16F98(p_method, object);
}


System_IAsyncResult_o *__fastcall BattleDropItemComponent_ClickDelegate__BeginInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        BattleDropItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)item;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall BattleDropItemComponent_ClickDelegate__EndInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall BattleDropItemComponent_ClickDelegate__Invoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  BattleDropItemComponent_ClickDelegate_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  BattleDropItem_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(BattleDropItem_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, BattleDropItem_o *, _QWORD); // x0
  BattleDropItemComponent_ClickDelegate_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(BattleDropItem_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  BattleDropItem_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  BattleDropItemComponent_ClickDelegate_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (BattleDropItemComponent_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(BattleDropItem_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, item, method);
      v31 = sub_B1702C(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = item->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&item->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&item->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(item, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&item->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(BattleDropItem_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(item, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = item->klass;
                if ( *(_WORD *)&item->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&item->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(item, class_0, v9);
                }
                (*(void (__fastcall **)(BattleDropItem_o *, _QWORD))v14)(item, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(BattleDropItem_o *, _QWORD))&item->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  item,
                  *((_QWORD *)&item->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(item, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, BattleDropItem_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, item, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, BattleDropItem_o *, _QWORD))v21)(v29, item, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, BattleDropItem_o *, _QWORD))(*v29
                                                                            + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                            + 312))(
                v29,
                item,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, BattleDropItem_o *, __int64))v30)(v29, item, v28);
    }
  }
}