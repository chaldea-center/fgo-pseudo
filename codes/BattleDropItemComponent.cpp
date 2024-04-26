void __fastcall BattleDropItemComponent___cctor(const MethodInfo *method)
{
  if ( (byte_43505A7 & 1) == 0 )
  {
    sub_B70694(&BattleDropItemComponent_TypeInfo);
    byte_43505A7 = 1;
  }
  LODWORD(BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth) = (struct BattleDropItemComponent_StaticFields)1118306304;
}


void __fastcall BattleDropItemComponent___ctor(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleDropItemComponent__OnClick(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  BattleDropItemComponent_ClickDelegate_o *IsServant; // x0
  struct BattleDropItem_o *itemData; // x1

  IsServant = (BattleDropItemComponent_ClickDelegate_o *)Gift__IsServant(this->fields.gifttype, 0LL);
  if ( ((unsigned __int8)IsServant & 1) != 0 )
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
  IsServant = (BattleDropItemComponent_ClickDelegate_o *)Gift__IsItem(this->fields.gifttype, 0LL);
  if ( ((unsigned __int8)IsServant & 1) != 0 )
  {
LABEL_6:
    itemData = this->fields.itemData;
    if ( !itemData )
      goto LABEL_16;
    goto LABEL_7;
  }
  IsServant = (BattleDropItemComponent_ClickDelegate_o *)Gift__IsCommandCode(this->fields.gifttype, 0LL);
  if ( ((unsigned __int8)IsServant & 1) == 0 )
  {
    IsServant = (BattleDropItemComponent_ClickDelegate_o *)Gift__IsEventPointBuff(this->fields.gifttype, 0LL);
    if ( ((unsigned __int8)IsServant & 1) == 0 )
      return;
    goto LABEL_6;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_16;
  if ( itemData->fields.userSvtId >= 1 )
  {
LABEL_8:
    IsServant = this->fields.callbackFunc;
    if ( IsServant )
    {
      BattleDropItemComponent_ClickDelegate__Invoke(IsServant, itemData, 0LL);
      return;
    }
LABEL_16:
    sub_B7076C(IsServant, itemData);
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
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct BattleDropItem_o *itemData; // x8
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *back; // x21
  const MethodInfo *v19; // x2
  bool v20; // w1

  if ( (byte_435059C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435059C = 1;
  }
  this->fields.itemData = indata;
  sub_B70630(
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
    goto LABEL_31;
  this->fields.gifttype = itemData->fields.type;
  if ( !indata )
    goto LABEL_31;
  BattleDropItemComponent__setRateUp(this, indata->fields.isRateUp, v12);
  if ( Gift__IsServant(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetServant(this, v14);
  }
  else if ( Gift__IsItem(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetItem(this, v15);
  }
  else if ( Gift__IsCommandCode(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetCommandCode(this, v16);
  }
  else if ( Gift__IsEventPointBuff(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetEventPointBuff(this, v17);
  }
  back = (UnityEngine_Object_o *)this->fields.back;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(back, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.back;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  BattleDropItemComponent__SetAutoSellItem(this, v11);
  BattleDropItemComponent__ShowAcquisitionUp(this, indata, v19);
  if ( indata->fields.isAddReward )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.addRewardSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.root;
        if ( gameObject )
        {
          v20 = 0;
LABEL_29:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v20, 0LL);
          return;
        }
      }
    }
    goto LABEL_31;
  }
  if ( indata->fields.isAdd )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.addRewardSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        v20 = 1;
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_B7076C(gameObject, v11);
  }
}


void __fastcall BattleDropItemComponent__SetAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  BattleDropItemComponent_o *v2; // x19
  struct BattleDropItem_o *itemData; // x8
  UnityEngine_Object_o *autoSellInfo; // x20
  struct BattleDropItem_o *v5; // x8

  v2 = this;
  if ( (byte_43505A1 & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43505A1 = 1;
  }
  itemData = v2->fields.itemData;
  if ( !itemData )
    goto LABEL_16;
  if ( itemData->fields.sellQp > 0 || itemData->fields.sellMana >= 1 )
  {
    autoSellInfo = (UnityEngine_Object_o *)v2->fields.autoSellInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(autoSellInfo, 0LL, 0LL) )
      goto LABEL_14;
    this = (BattleDropItemComponent_o *)v2->fields.autoSellInfo;
    if ( this )
    {
      AutoSellInfoComponent__Clear((AutoSellInfoComponent_o *)this, 0LL);
      v5 = v2->fields.itemData;
      if ( v5 )
      {
        this = (BattleDropItemComponent_o *)v2->fields.autoSellInfo;
        if ( this )
        {
          AutoSellInfoComponent__SetData(
            (AutoSellInfoComponent_o *)this,
            v5->fields.sellMana * v5->fields.num,
            v5->fields.sellQp * v5->fields.num,
            -1,
            -1,
            0LL);
LABEL_14:
          BattleDropItemComponent__ShowAutoSellItem(v2, method);
          return;
        }
      }
    }
LABEL_16:
    sub_B7076C(this, method);
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
  sub_B70630(
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
  struct BattleDropItem_o *itemData; // x8

  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_13;
  ItemIconComponent__Clear(item, 0LL);
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_13;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
  if ( !item )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_13;
  method = (const MethodInfo *)itemData->fields.userSvtId;
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( (__int64)method < 1 )
  {
    if ( !item )
      goto LABEL_13;
    BattleServantFaceIconComponent__SetCommandCodeDropByCodeId(
      (BattleServantFaceIconComponent_o *)item,
      itemData->fields.objectId,
      itemData->fields.num,
      0LL);
  }
  else
  {
    if ( !item )
      goto LABEL_13;
    BattleServantFaceIconComponent__SetCommandCodeDrop(
      (BattleServantFaceIconComponent_o *)item,
      (int64_t)method,
      itemData->fields.num,
      0LL);
  }
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( !item
    || (item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B7076C(item, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 1, 0LL);
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
  void *servant; // x0
  struct BattleDropItem_o *itemData; // x8

  if ( (byte_43505A0 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_B70694(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43505A0 = 1;
  }
  servant = this->fields.servant;
  if ( !servant )
    goto LABEL_14;
  ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)servant, 0LL);
  servant = this->fields.servant;
  if ( !servant )
    goto LABEL_14;
  servant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL);
  if ( !servant )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 0, 0LL);
  servant = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servant
    || (servant = DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)servant,
                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPointBuffMaster___),
        (itemData = this->fields.itemData) == 0LL)
    || !servant
    || (servant = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)servant,
                    itemData->fields.objectId,
                    (const MethodInfo_21C0440 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
    || !this->fields.item
    || (ItemIconComponent__SetEventPointBuffImage(
          (ItemIconComponent_o *)this->fields.item,
          *((_DWORD *)servant + 12),
          *((_DWORD *)servant + 13),
          0LL),
        (servant = this->fields.item) == 0LL)
    || (servant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL)) == 0LL )
  {
LABEL_14:
    sub_B7076C(servant, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 1, 0LL);
}


void __fastcall BattleDropItemComponent__SetItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent_o *servant; // x0
  struct BattleDropItem_o *itemData; // x8
  int originalNum; // w10
  int num; // w9
  int32_t v7; // w2
  struct BattleDropItem_o *v8; // x8
  int v9; // w10
  int32_t v10; // w9
  struct BattleDropItem_o *v11; // x8
  struct BattleDropItem_o *v12; // x9
  ServantFaceIconComponent_o *v13; // x8
  int32_t v14; // w2
  int v15; // w10
  int32_t v16; // w8

  if ( (byte_435059F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435059F = 1;
  }
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_35;
  ServantFaceIconComponent__Clear(servant, 0LL);
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_35;
  servant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL);
  if ( !servant )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 0, 0LL);
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
  servant = (ServantFaceIconComponent_o *)this->fields.item;
  method = (const MethodInfo *)(unsigned int)itemData->fields.objectId;
  if ( num - originalNum <= 0 )
    num = originalNum;
  if ( num <= 1 )
  {
    if ( !servant )
      goto LABEL_35;
    ItemIconComponent__SetItem((ItemIconComponent_o *)servant, (int32_t)method, -1, 0LL);
  }
  else
  {
    v7 = itemData->fields.originalNum;
    if ( v7 < 1 )
    {
      v7 = itemData->fields.num;
      itemData->fields.originalNum = v7;
    }
    if ( !servant )
      goto LABEL_35;
    ItemIconComponent__SetItem((ItemIconComponent_o *)servant, (int32_t)method, v7, 0LL);
    v8 = this->fields.itemData;
    if ( !v8 )
      goto LABEL_35;
    v9 = v8->fields.originalNum;
    v10 = v8->fields.num;
    if ( v9 <= 0 )
    {
      v9 = v8->fields.num;
      v8->fields.originalNum = v10;
    }
    if ( v10 - v9 >= 1 )
    {
      servant = (ServantFaceIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( servant )
      {
        servant = (ServantFaceIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)servant,
                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
        v11 = this->fields.itemData;
        if ( v11 )
        {
          if ( servant )
          {
            servant = (ServantFaceIconComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)servant,
                                                      v11->fields.objectId,
                                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( servant )
            {
              v12 = this->fields.itemData;
              if ( v12 )
              {
                v13 = servant;
                v14 = v12->fields.originalNum;
                servant = (ServantFaceIconComponent_o *)this->fields.item;
                method = (const MethodInfo *)LODWORD(v13->fields.typeSprite);
                if ( v14 > 0
                  || (v14 = v12->fields.num, v12->fields.originalNum = v14, (v12 = this->fields.itemData) != 0LL) )
                {
                  v15 = v12->fields.originalNum;
                  v16 = v12->fields.num;
                  if ( v15 <= 0 )
                  {
                    v15 = v12->fields.num;
                    v12->fields.originalNum = v16;
                  }
                  if ( servant )
                  {
                    BattleItemIconComponent__setCounterLabel(
                      (BattleItemIconComponent_o *)servant,
                      (int32_t)method,
                      v14,
                      (v16 - v15) & ~((v16 - v15) >> 31),
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
      sub_B7076C(servant, method);
    }
  }
LABEL_32:
  servant = (ServantFaceIconComponent_o *)this->fields.item;
  if ( !servant )
    goto LABEL_35;
  servant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL);
  if ( !servant )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 1, 0LL);
}


void __fastcall BattleDropItemComponent__SetMaterialTd(
        BattleDropItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *materialTdSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v8; // x19

  if ( (byte_43505A4 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_22192/*"ribbon_noblephantasmup_01"*/);
    byte_43505A4 = 1;
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B7076C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, flg, 0LL);
    if ( flg )
    {
      v8 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v8, (System_String_o *)StringLiteral_22192/*"ribbon_noblephantasmup_01"*/, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__SetPossession(
        BattleDropItemComponent_o *this,
        int32_t num,
        const MethodInfo *method)
{
  UILabel_o *possessionLabel; // x20
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  int m_stringLength; // w20
  BattleDropItemComponent_c *v9; // x8
  float v10; // s9
  float PossessionLabelWidth; // s8
  UnityEngine_Transform_o *transform; // x20
  struct UILabel_o *v13; // x8
  UnityEngine_Transform_o *v14; // x0
  float v15; // s0
  float v16; // s1
  float v17; // s2
  int32_t possessionNum; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_43505A6 & 1) == 0 )
  {
    sub_B70694(&BattleDropItemComponent_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_23872/*"{0:#,0}"*/);
    byte_43505A6 = 1;
  }
  possessionLabel = this->fields.possessionLabel;
  possessionNum = this->fields.possessionNum;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &possessionNum, method);
  v6 = System_String__Format((System_String_o *)StringLiteral_23872/*"{0:#,0}"*/, v5, 0LL);
  if ( !possessionLabel )
    goto LABEL_19;
  UILabel__set_text(possessionLabel, v6, 0LL);
  v6 = (System_String_o *)this->fields.possessionLabel;
  if ( !v6 )
    goto LABEL_19;
  m_stringLength = v6[6].fields.m_stringLength;
  v9 = BattleDropItemComponent_TypeInfo;
  if ( (BYTE3(BattleDropItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo);
    v9 = BattleDropItemComponent_TypeInfo;
    v6 = (System_String_o *)this->fields.possessionLabel;
  }
  if ( !v6 )
    goto LABEL_19;
  v10 = (float)m_stringLength;
  PossessionLabelWidth = v9->static_fields->PossessionLabelWidth;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( PossessionLabelWidth >= v10 )
  {
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
    if ( transform )
    {
      v14 = transform;
      goto LABEL_18;
    }
LABEL_19:
    sub_B7076C(v6, v7);
  }
  v6 = (System_String_o *)BattleDropItemComponent_TypeInfo;
  if ( (BYTE3(BattleDropItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo);
  }
  v13 = this->fields.possessionLabel;
  if ( !v13 || !transform )
    goto LABEL_19;
  v14 = transform;
  v15 = BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth / (float)v13->fields.mWidth;
  v16 = 1.0;
  v17 = 1.0;
LABEL_18:
  UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
}


void __fastcall BattleDropItemComponent__SetServant(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *item; // x0
  struct BattleDropItem_o *itemData; // x8
  struct BattleDropItem_o *v5; // x8
  const MethodInfo *v6; // x2
  bool IsMaterialTd; // w0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435059E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_435059E = 1;
  }
  entity = 0LL;
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_24;
  ItemIconComponent__Clear(item, 0LL);
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_24;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
  if ( !item )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_24;
  method = (const MethodInfo *)itemData->fields.userSvtId;
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( (__int64)method < 1 )
  {
    if ( !item )
      goto LABEL_24;
    BattleServantFaceIconComponent__SetSvtDrop(
      (BattleServantFaceIconComponent_o *)item,
      itemData->fields.objectId,
      itemData->fields.limitCount,
      itemData->fields.num,
      0LL);
  }
  else
  {
    if ( !item )
      goto LABEL_24;
    BattleServantFaceIconComponent__SetSvtDrop_30230368(
      (BattleServantFaceIconComponent_o *)item,
      (int64_t)method,
      0LL,
      itemData->fields.num,
      itemData->fields.limitCount,
      0LL);
  }
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( !item )
    goto LABEL_24;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
  if ( !item )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  item = (ItemIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
  v5 = this->fields.itemData;
  if ( !v5 || !item )
    goto LABEL_24;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)item,
          &entity,
          v5->fields.userSvtId,
          (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    IsMaterialTd = 0;
    goto LABEL_23;
  }
  item = (ItemIconComponent_o *)entity;
  if ( !entity )
LABEL_24:
    sub_B7076C(item, method);
  IsMaterialTd = UserServantEntity__IsMaterialTd(entity, 0LL);
LABEL_23:
  BattleDropItemComponent__SetMaterialTd(this, IsMaterialTd, v6);
}


void __fastcall BattleDropItemComponent__SetTouch(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_435059B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435059B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_srcLineSprite, flg, 0LL);
      return;
    }
LABEL_11:
    sub_B7076C(gameObject, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__Set_22680396(
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
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall BattleDropItemComponent__ShowAcquisitionUp(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        const MethodInfo *method)
{
  UnityEngine_Object_o *AcquisitionUpObj; // x21
  UnityEngine_Object_o *AcquisitionUpLabel; // x21
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x0
  bool v10; // w0
  float v11; // s0
  UILabel_o *v12; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  _QWORD _8[7]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435059D & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_2851/*"Battle_RESULT_ITEM_DROPUP"*/);
    byte_435059D = 1;
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
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(AcquisitionUpLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      if ( !indata )
        goto LABEL_23;
      if ( indata->fields.dropUpRate == 1000 )
        return;
      v7 = this->fields.AcquisitionUpObj;
      if ( !v7 )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive(v7, 1, 0LL);
      *((float *)_8 + 1) = (float)indata->fields.dropUpRate / 1000.0;
      LODWORD(_8[0]) = 0;
      v9 = System_Single__ToString(*((float *)_8 + 1), (const MethodInfo *)((char *)_8 + 4));
      v10 = System_Int32__TryParse(v9, (int32_t *)_8, 0LL);
      v12 = this->fields.AcquisitionUpLabel;
      v13 = v10
          ? System_Int32__ToString((int32_t)_8, 0LL)
          : System_Single__ToString(v11, (const MethodInfo *)((char *)_8 + 4));
      v14 = v13;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2851/*"Battle_RESULT_ITEM_DROPUP"*/, 0LL);
      v7 = (UnityEngine_GameObject_o *)System_String__Concat_44758168(v14, v15, 0LL);
      if ( !v12 )
LABEL_23:
        sub_B7076C(v7, v8);
      UILabel__set_text(v12, (System_String_o *)v7, 0LL);
    }
  }
}


void __fastcall BattleDropItemComponent__ShowAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *autoSellInfo; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_43505A2 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43505A2 = 1;
  }
  autoSellInfo = (UnityEngine_Object_o *)this->fields.autoSellInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(autoSellInfo, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.autoSellInfo;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B7076C(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
}


void __fastcall BattleDropItemComponent__ShowDropNum(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *back; // x0
  struct BattleDropItem_o *itemData; // x8
  const MethodInfo *v5; // x2

  back = (UnityEngine_Component_o *)this->fields.back;
  if ( !back )
    goto LABEL_19;
  back = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(back, 0LL);
  if ( !back )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)back, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_19;
  if ( itemData->fields.sellQp > 0 || itemData->fields.sellMana >= 1 )
  {
    BattleDropItemComponent__ShowAutoSellItem(this, method);
    return;
  }
  back = (UnityEngine_Component_o *)this->fields.possessionRoot;
  if ( !back )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)back, 0, 0LL);
  back = (UnityEngine_Component_o *)this->fields.item;
  if ( !back )
    goto LABEL_19;
  back = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(back, 0LL);
  if ( !back )
    goto LABEL_19;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)back, 0LL) )
  {
    back = (UnityEngine_Component_o *)this->fields.item;
    if ( !back )
      goto LABEL_19;
    BattleItemIconComponent__SetActiveDarkMode((BattleItemIconComponent_o *)back, 0, 0LL);
  }
  back = (UnityEngine_Component_o *)this->fields.servant;
  if ( !back || (back = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(back, 0LL)) == 0LL )
LABEL_19:
    sub_B7076C(back, method);
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)back, 0LL) )
  {
    back = (UnityEngine_Component_o *)this->fields.servant;
    if ( back )
    {
      BattleServantFaceIconComponent__SetActiveDarkMode((BattleServantFaceIconComponent_o *)back, 0, 0LL);
      goto LABEL_18;
    }
    goto LABEL_19;
  }
LABEL_18:
  BattleDropItemComponent__ShowAcquisitionUp(this, this->fields.itemData, v5);
}


void __fastcall BattleDropItemComponent__ShowPossessionNum(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  BattleDropItemComponent_o *v2; // x19
  struct BattleDropItem_o *itemData; // x8
  bool v4; // w20
  int32_t v5; // w1
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *AcquisitionUpObj; // x20

  v2 = this;
  if ( (byte_43505A5 & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43505A5 = 1;
  }
  itemData = v2->fields.itemData;
  if ( !itemData )
    goto LABEL_32;
  if ( itemData->fields.sellQp <= 0 && itemData->fields.sellMana < 1 )
  {
    v4 = 1;
  }
  else
  {
    this = (BattleDropItemComponent_o *)v2->fields.autoSellInfo;
    if ( !this )
      goto LABEL_32;
    this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattleDropItemComponent_o *)v2->fields.back;
    if ( !this )
      goto LABEL_32;
    this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v4 = 0;
  }
  if ( v2->fields.possessionNum )
  {
    this = (BattleDropItemComponent_o *)v2->fields.possessionRoot;
    if ( !this )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    BattleDropItemComponent__SetPossession(v2, v5, v6);
  }
  this = (BattleDropItemComponent_o *)v2->fields.item;
  if ( !this )
    goto LABEL_32;
  this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_32;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v2->fields.item;
    if ( !this )
      goto LABEL_32;
    BattleItemIconComponent__SetActiveDarkMode((BattleItemIconComponent_o *)this, v4, 0LL);
  }
  this = (BattleDropItemComponent_o *)v2->fields.servant;
  if ( !this
    || (this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_32:
    sub_B7076C(this, method);
  }
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v2->fields.servant;
    if ( !this )
      goto LABEL_32;
    BattleServantFaceIconComponent__SetActiveDarkMode((BattleServantFaceIconComponent_o *)this, v4, 0LL);
  }
  AcquisitionUpObj = (UnityEngine_Object_o *)v2->fields.AcquisitionUpObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(AcquisitionUpObj, 0LL, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v2->fields.AcquisitionUpObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_32;
  }
}


void __fastcall BattleDropItemComponent__setRateUp(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *additemflg; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_43505A3 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43505A3 = 1;
  }
  additemflg = (UnityEngine_Object_o *)this->fields.additemflg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(additemflg, 0LL, 0LL) )
  {
    v7 = this->fields.additemflg;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flg, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent_ClickDelegate___ctor(
        BattleDropItemComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  return (System_IAsyncResult_o *)sub_B70638(this, v6, callback, object);
}


void __fastcall BattleDropItemComponent_ClickDelegate__EndInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v27->fields.extra_arg, item);
      v31 = sub_B706C4(v28);
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
            v40 = sub_B706BC(v28);
            v41 = sub_B70AC0(v28);
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
                  v23 = sub_B08590(item, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&item->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(BattleDropItem_o *, _QWORD))sub_B70744(v15, v28);
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
                  v14 = sub_B08590(item, class_0, v9);
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
          v33 = sub_B706BC(v28);
          v34 = sub_B70AC0(v28);
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
                v25 = sub_B08590(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, BattleDropItem_o *, _QWORD))sub_B70744(v22, v28);
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
                v21 = sub_B08590(v29, v17, v16);
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