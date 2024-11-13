void __fastcall BattleDropItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B18778 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDropItemComponent_TypeInfo, v1, v2);
    byte_4B18778 = 1;
  }
  LODWORD(BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth) = (struct BattleDropItemComponent_StaticFields)1118306304;
}


void __fastcall BattleDropItemComponent___ctor(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleDropItemComponent__OnClick(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  _BOOL8 IsServant; // x0
  struct BattleDropItem_o *itemData; // x1
  struct BattleDropItemComponent_ClickDelegate_o *callbackFunc; // x8

  IsServant = Gift__IsServant(this->fields.gifttype, 0LL);
  if ( IsServant )
  {
    itemData = this->fields.itemData;
    if ( !itemData )
      goto LABEL_16;
    if ( itemData->fields.userSvtId > 0 )
      goto LABEL_13;
  }
  else
  {
    IsServant = Gift__IsItem(this->fields.gifttype, 0LL);
    if ( !IsServant )
    {
      IsServant = Gift__IsCommandCode(this->fields.gifttype, 0LL);
      if ( IsServant )
      {
        itemData = this->fields.itemData;
        if ( !itemData )
          goto LABEL_16;
        if ( itemData->fields.userSvtId >= 1 )
          goto LABEL_13;
        return;
      }
      IsServant = Gift__IsEventPointBuff(this->fields.gifttype, 0LL);
      if ( !IsServant )
        return;
    }
    itemData = this->fields.itemData;
    if ( !itemData )
      goto LABEL_16;
  }
  if ( itemData->fields.objectId >= 1 )
  {
LABEL_13:
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *))callbackFunc->fields.m_target)(callbackFunc->fields.original_method_info);
      return;
    }
LABEL_16:
    sub_1BCAA3C(IsServant, itemData);
  }
}


void __fastcall BattleDropItemComponent__Set(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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

  if ( (byte_4B1876D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, indata, method);
    byte_4B1876D = 1;
  }
  this->fields.itemData = indata;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemData,
    (int64_t)indata,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_30;
  this->fields.gifttype = itemData->fields.type;
  if ( !indata )
    goto LABEL_30;
  BattleDropItemComponent__setRateUp(this, indata->fields.isRateUp, v12);
  if ( Gift__IsServant(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetServant(this, v14);
  }
  else if ( Gift__IsItem(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetItem(this, v16);
  }
  else if ( Gift__IsCommandCode(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetCommandCode(this, v17);
  }
  else if ( Gift__IsEventPointBuff(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetEventPointBuff(this, v15);
  }
  back = (UnityEngine_Object_o *)this->fields.back;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(back, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.back;
    if ( !gameObject )
      goto LABEL_30;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_30;
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
LABEL_28:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v20, 0LL);
          return;
        }
      }
    }
    goto LABEL_30;
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
        goto LABEL_28;
      }
    }
LABEL_30:
    sub_1BCAA3C(gameObject, v11);
  }
}


void __fastcall BattleDropItemComponent__SetAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleDropItemComponent_o *v3; // x19
  struct BattleDropItem_o *itemData; // x8
  UnityEngine_Object_o *autoSellInfo; // x20
  struct BattleDropItem_o *v6; // x8

  v3 = this;
  if ( (byte_4B18772 & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18772 = 1;
  }
  itemData = v3->fields.itemData;
  if ( !itemData )
    goto LABEL_15;
  if ( itemData->fields.sellQp > 0 || itemData->fields.sellMana >= 1 )
  {
    autoSellInfo = (UnityEngine_Object_o *)v3->fields.autoSellInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Inequality(autoSellInfo, 0LL, 0LL) )
      goto LABEL_13;
    this = (BattleDropItemComponent_o *)v3->fields.autoSellInfo;
    if ( this )
    {
      AutoSellInfoComponent__Clear((AutoSellInfoComponent_o *)this, 0LL);
      v6 = v3->fields.itemData;
      if ( v6 )
      {
        this = (BattleDropItemComponent_o *)v3->fields.autoSellInfo;
        if ( this )
        {
          AutoSellInfoComponent__SetData(
            (AutoSellInfoComponent_o *)this,
            v6->fields.sellMana * v6->fields.num,
            v6->fields.sellQp * v6->fields.num,
            -1,
            -1,
            0LL);
LABEL_13:
          BattleDropItemComponent__ShowAutoSellItem(v3, method);
          return;
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall BattleDropItemComponent__SetCallBack(
        BattleDropItemComponent_o *this,
        BattleDropItemComponent_ClickDelegate_o *call,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callbackFunc = call;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)call,
    (int64_t)method,
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
    sub_1BCAA3C(item, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *servant; // x0
  struct BattleDropItem_o *itemData; // x8

  if ( (byte_4B18771 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointBuffMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18771 = 1;
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
  servant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servant
    || (servant = DataManager__GetMasterData_object_(
                    (DataManager_o *)servant,
                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointBuffMaster___),
        (itemData = this->fields.itemData) == 0LL)
    || !servant
    || (servant = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)servant,
                    itemData->fields.objectId,
                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
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
    sub_1BCAA3C(servant, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 1, 0LL);
}


void __fastcall BattleDropItemComponent__SetItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ServantFaceIconComponent_o *servant; // x0
  struct BattleDropItem_o *itemData; // x8
  int originalNum; // w10
  int num; // w9
  int32_t v12; // w2
  struct BattleDropItem_o *v13; // x8
  int v14; // w10
  int32_t v15; // w9
  struct BattleDropItem_o *v16; // x8
  struct BattleDropItem_o *v17; // x9
  ServantFaceIconComponent_o *v18; // x8
  int32_t v19; // w2
  int32_t v20; // w8

  if ( (byte_4B18770 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18770 = 1;
  }
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_33;
  ServantFaceIconComponent__Clear(servant, 0LL);
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_33;
  servant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL);
  if ( !servant )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_33;
  originalNum = itemData->fields.originalNum;
  num = itemData->fields.num;
  if ( originalNum < 1 )
  {
    itemData->fields.originalNum = num;
    itemData = this->fields.itemData;
    originalNum = num;
    if ( !itemData )
      goto LABEL_33;
  }
  servant = (ServantFaceIconComponent_o *)this->fields.item;
  method = (const MethodInfo *)(unsigned int)itemData->fields.objectId;
  if ( num - originalNum <= 0 )
    num = originalNum;
  if ( num <= 1 )
  {
    if ( !servant )
      goto LABEL_33;
    ItemIconComponent__SetItem((ItemIconComponent_o *)servant, (int32_t)method, -1, 0LL);
  }
  else
  {
    v12 = itemData->fields.originalNum;
    if ( v12 < 1 )
    {
      v12 = itemData->fields.num;
      itemData->fields.originalNum = v12;
    }
    if ( !servant )
      goto LABEL_33;
    ItemIconComponent__SetItem((ItemIconComponent_o *)servant, (int32_t)method, v12, 0LL);
    v13 = this->fields.itemData;
    if ( !v13 )
      goto LABEL_33;
    v14 = v13->fields.originalNum;
    v15 = v13->fields.num;
    if ( v14 <= 0 )
    {
      v14 = v13->fields.num;
      v13->fields.originalNum = v15;
    }
    if ( v15 - v14 >= 1 )
    {
      servant = (ServantFaceIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( servant )
      {
        servant = (ServantFaceIconComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)servant,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
        v16 = this->fields.itemData;
        if ( v16 )
        {
          if ( servant )
          {
            servant = (ServantFaceIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)servant,
                                                      v16->fields.objectId,
                                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( servant )
            {
              v17 = this->fields.itemData;
              if ( v17 )
              {
                v18 = servant;
                v19 = v17->fields.originalNum;
                servant = (ServantFaceIconComponent_o *)this->fields.item;
                method = (const MethodInfo *)LODWORD(v18->fields.frameSprite);
                v20 = v17->fields.num;
                if ( v19 <= 0 )
                {
                  v19 = v17->fields.num;
                  v17->fields.originalNum = v20;
                }
                if ( servant )
                {
                  BattleItemIconComponent__setCounterLabel(
                    (BattleItemIconComponent_o *)servant,
                    (int32_t)method,
                    v19,
                    (v20 - v19) & ~((v20 - v19) >> 31),
                    0LL);
                  goto LABEL_30;
                }
              }
            }
          }
        }
      }
LABEL_33:
      sub_1BCAA3C(servant, method);
    }
  }
LABEL_30:
  servant = (ServantFaceIconComponent_o *)this->fields.item;
  if ( !servant )
    goto LABEL_33;
  servant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL);
  if ( !servant )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__SetMaterialTd(
        BattleDropItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *materialTdSprite; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v12; // x1
  UISprite_o *v13; // x19

  if ( (byte_4B18775 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, flg, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, v7, v8);
    byte_4B18775 = 1;
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v10);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, flg, 0LL);
    if ( flg )
    {
      v13 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
      AtlasManager__SetEventSprite(v13, (System_String_o *)StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *possessionLabel; // x20
  Il2CppObject *v9; // x0
  __int64 transform; // x0
  __int64 v11; // x1
  int v12; // w20
  BattleDropItemComponent_c *v13; // x8
  float v14; // s9
  float PossessionLabelWidth; // s8
  __int64 v16; // x2
  UnityEngine_Transform_o *v17; // x20
  struct UILabel_o *v18; // x8
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32_t possessionNum; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B18777 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDropItemComponent_TypeInfo, *(_QWORD *)&num, method);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v6, v7);
    byte_4B18777 = 1;
  }
  possessionLabel = this->fields.possessionLabel;
  possessionNum = this->fields.possessionNum;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &possessionNum);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v9, 0LL);
  if ( !possessionLabel )
    goto LABEL_19;
  UILabel__set_text(possessionLabel, (System_String_o *)transform, 0LL);
  transform = (__int64)this->fields.possessionLabel;
  if ( !transform )
    goto LABEL_19;
  v12 = *(_DWORD *)(transform + 168);
  v13 = BattleDropItemComponent_TypeInfo;
  if ( !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo, v11);
    transform = (__int64)this->fields.possessionLabel;
    if ( !transform )
      goto LABEL_19;
    v13 = BattleDropItemComponent_TypeInfo;
  }
  v14 = (float)v12;
  PossessionLabelWidth = v13->static_fields->PossessionLabelWidth;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  v17 = (UnityEngine_Transform_o *)transform;
  if ( PossessionLabelWidth >= v14 )
  {
    if ( !byte_4B109C6 )
    {
      transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v11, v16);
      byte_4B109C6 = 1;
    }
    if ( v17 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_18;
    }
LABEL_19:
    sub_1BCAA3C(transform, v11);
  }
  transform = (__int64)BattleDropItemComponent_TypeInfo;
  if ( !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo, v11);
  v18 = this->fields.possessionLabel;
  if ( !v18 || !v17 )
    goto LABEL_19;
  y = 1.0;
  x = BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth / (float)v18->fields.mWidth;
  z = 1.0;
LABEL_18:
  UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&x, 0LL);
}


void __fastcall BattleDropItemComponent__SetServant(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ItemIconComponent_o *item; // x0
  struct BattleDropItem_o *itemData; // x8
  __int64 v10; // x1
  struct BattleDropItem_o *v11; // x8
  const MethodInfo *v12; // x2
  bool IsMaterialTd; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1876F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6, v7);
    byte_4B1876F = 1;
  }
  entity = 0LL;
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_23;
  ItemIconComponent__Clear(item, 0LL);
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_23;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
  if ( !item )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_23;
  method = (const MethodInfo *)itemData->fields.userSvtId;
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( (__int64)method < 1 )
  {
    if ( !item )
      goto LABEL_23;
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
      goto LABEL_23;
    BattleServantFaceIconComponent__SetSvtDrop_38791076(
      (BattleServantFaceIconComponent_o *)item,
      (int64_t)method,
      0LL,
      itemData->fields.num,
      itemData->fields.limitCount,
      0LL);
  }
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( !item )
    goto LABEL_23;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
  if ( !item )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  item = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  v11 = this->fields.itemData;
  if ( !v11 || !item )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)item,
          &entity,
          v11->fields.userSvtId,
          (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    IsMaterialTd = 0;
    goto LABEL_22;
  }
  item = (ItemIconComponent_o *)entity;
  if ( !entity )
LABEL_23:
    sub_1BCAA3C(item, method);
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)entity, 0LL);
LABEL_22:
  BattleDropItemComponent__SetMaterialTd(this, IsMaterialTd, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__SetTouch(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B1876C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1876C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(gameObject, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__Set_43441192(
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
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall BattleDropItemComponent__ShowAcquisitionUp(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *AcquisitionUpObj; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *AcquisitionUpLabel; // x21
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x0
  bool v15; // w0
  float v16; // s0
  UILabel_o *v17; // x19
  System_String_o *v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x20
  System_String_o *v21; // x0
  int32_t result; // [xsp+8h] [xbp-28h] BYREF
  float v23[9]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1876E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, indata, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3272/*"Battle_RESULT_ITEM_DROPUP"*/, v7, v8);
    byte_4B1876E = 1;
  }
  AcquisitionUpObj = (UnityEngine_Object_o *)this->fields.AcquisitionUpObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, indata);
  if ( !UnityEngine_Object__op_Equality(AcquisitionUpObj, 0LL, 0LL) )
  {
    AcquisitionUpLabel = (UnityEngine_Object_o *)this->fields.AcquisitionUpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(AcquisitionUpLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v12 & 1) == 0 )
    {
      if ( !indata )
        goto LABEL_20;
      if ( indata->fields.dropUpRate == 1000 )
        return;
      v12 = this->fields.AcquisitionUpObj;
      if ( !v12 )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(v12, 1, 0LL);
      v23[0] = (float)indata->fields.dropUpRate / 1000.0;
      result = 0;
      v14 = System_Single__ToString(v23[0], (const MethodInfo *)v23);
      v15 = System_Int32__TryParse(v14, &result, 0LL);
      v17 = this->fields.AcquisitionUpLabel;
      v18 = v15 ? System_Int32__ToString((int32_t)&result, 0LL) : System_Single__ToString(v16, (const MethodInfo *)v23);
      v20 = v18;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3272/*"Battle_RESULT_ITEM_DROPUP"*/, 0LL);
      v12 = (UnityEngine_GameObject_o *)System_String__Concat_62401220(v20, v21, 0LL);
      if ( !v17 )
LABEL_20:
        sub_1BCAA3C(v12, v13);
      UILabel__set_text(v17, (System_String_o *)v12, 0LL);
    }
  }
}


void __fastcall BattleDropItemComponent__ShowAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *autoSellInfo; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B18773 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18773 = 1;
  }
  autoSellInfo = (UnityEngine_Object_o *)this->fields.autoSellInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(autoSellInfo, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.autoSellInfo;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v5);
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
    sub_1BCAA3C(back, method);
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
  __int64 v2; // x2
  BattleDropItemComponent_o *v3; // x19
  struct BattleDropItem_o *itemData; // x8
  bool v5; // w20
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *AcquisitionUpObj; // x20

  v3 = this;
  if ( (byte_4B18776 & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18776 = 1;
  }
  itemData = v3->fields.itemData;
  if ( !itemData )
    goto LABEL_31;
  if ( itemData->fields.sellQp <= 0 && itemData->fields.sellMana < 1 )
  {
    v5 = 1;
  }
  else
  {
    this = (BattleDropItemComponent_o *)v3->fields.autoSellInfo;
    if ( !this )
      goto LABEL_31;
    this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattleDropItemComponent_o *)v3->fields.back;
    if ( !this )
      goto LABEL_31;
    this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v5 = 0;
  }
  if ( v3->fields.possessionNum )
  {
    this = (BattleDropItemComponent_o *)v3->fields.possessionRoot;
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    BattleDropItemComponent__SetPossession(v3, v6, v7);
  }
  this = (BattleDropItemComponent_o *)v3->fields.item;
  if ( !this )
    goto LABEL_31;
  this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v3->fields.item;
    if ( !this )
      goto LABEL_31;
    BattleItemIconComponent__SetActiveDarkMode((BattleItemIconComponent_o *)this, v5, 0LL);
  }
  this = (BattleDropItemComponent_o *)v3->fields.servant;
  if ( !this
    || (this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_31:
    sub_1BCAA3C(this, method);
  }
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v3->fields.servant;
    if ( !this )
      goto LABEL_31;
    BattleServantFaceIconComponent__SetActiveDarkMode((BattleServantFaceIconComponent_o *)this, v5, 0LL);
  }
  AcquisitionUpObj = (UnityEngine_Object_o *)v3->fields.AcquisitionUpObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(AcquisitionUpObj, 0LL, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v3->fields.AcquisitionUpObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_31;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__setRateUp(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *additemflg; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B18774 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, flg, method);
    byte_4B18774 = 1;
  }
  additemflg = (UnityEngine_Object_o *)this->fields.additemflg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(additemflg, 0LL, 0LL) )
  {
    v7 = this->fields.additemflg;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0F260;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1BCA898(v10);
        v16 = sub_1BCAD54(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A0F35C;
          else
            v13 = (Il2CppObject *)sub_1A0F320;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A0F29C;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A0F270;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A0F240;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0F1F8;
}


System_IAsyncResult_o *__fastcall BattleDropItemComponent_ClickDelegate__BeginInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        BattleDropItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  BattleDropItem_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = item;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall BattleDropItemComponent_ClickDelegate__EndInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BattleDropItemComponent_ClickDelegate__Invoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleDropItem_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    item,
    *(_QWORD *)&this->fields.extra_arg);
}