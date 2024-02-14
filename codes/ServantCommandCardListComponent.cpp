void __fastcall ServantCommandCardListComponent___ctor(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UISprite_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UISprite_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s4
  float v28; // s5
  float v29; // s6
  struct UnityEngine_Color_o v30; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v31; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4215EF2 & 1) == 0 )
  {
    sub_B0D8A4(&UISprite___TypeInfo, method);
    byte_4215EF2 = 1;
  }
  v3 = (struct UISprite_array *)sub_B0D8BC(UISprite___TypeInfo, 5LL);
  this->fields.cardSpriteList = v3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cardSpriteList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (struct UISprite_array *)sub_B0D8BC(UISprite___TypeInfo, 5LL);
  this->fields.grantSpriteList = v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.grantSpriteList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (struct UISprite_array *)sub_B0D8BC(UISprite___TypeInfo, 5LL);
  this->fields.cardRankSpriteList = v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cardRankSpriteList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v32.fields.r = 0.4;
  v31 = (struct UnityEngine_Color_o)0LL;
  v32.fields.g = 0.4;
  v32.fields.b = 0.4;
  UnityEngine_Color___ctor_40757524(v32, v24, v25, v26, (const MethodInfo *)&v31);
  this->fields.COMMAND_CARD_GRAY_OUT = v31;
  v33.fields.r = 1.0;
  v33.fields.g = 1.0;
  v33.fields.b = 1.0;
  v30 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40757524(v33, v27, v28, v29, (const MethodInfo *)&v30);
  this->fields.COMMAND_CARD_NORMAL = v30;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantCommandCardListComponent__AdjustCardSpriteListPosX(
        ServantCommandCardListComponent_o *this,
        float start,
        float interval,
        const MethodInfo *method)
{
  struct UISprite_array *cardSpriteList; // x8
  ServantCommandCardListComponent_o *v6; // x19
  __int64 v8; // x20
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x0

  cardSpriteList = this->fields.cardSpriteList;
  if ( !cardSpriteList )
LABEL_7:
    sub_B0D97C(this);
  v6 = this;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = cardSpriteList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      v11 = sub_B0D9A8(this);
      sub_B0D948(v11, 0LL);
    }
    this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v8];
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, start, 0LL);
      cardSpriteList = v6->fields.cardSpriteList;
      start = start + interval;
      ++v8;
      if ( cardSpriteList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall ServantCommandCardListComponent__Clear(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  ServantCommandCardListComponent_o *v2; // x19
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w21
  int v5; // w22
  int v6; // w9
  __int64 v7; // x24
  struct UISprite_array *grantSpriteList; // x8
  struct UISprite_array *cardRankSpriteList; // x8
  UnityEngine_Object_o *v10; // x20
  struct UISprite_array *v11; // x8
  __int64 v12; // x0

  v2 = this;
  if ( (byte_4215EEC & 1) == 0 )
  {
    this = (ServantCommandCardListComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215EEC = 1;
  }
  cardSpriteList = v2->fields.cardSpriteList;
  if ( !cardSpriteList )
    goto LABEL_23;
  max_length = cardSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 1;
    do
    {
      v6 = v5 - 1;
      if ( v5 - 1 >= cardSpriteList->max_length )
      {
LABEL_25:
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
      }
      v7 = v6;
      this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v6];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      grantSpriteList = v2->fields.grantSpriteList;
      if ( !grantSpriteList )
        break;
      if ( (unsigned int)v7 >= grantSpriteList->max_length )
        goto LABEL_25;
      this = (ServantCommandCardListComponent_o *)grantSpriteList->m_Items[v7];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      cardRankSpriteList = v2->fields.cardRankSpriteList;
      if ( !cardRankSpriteList )
        break;
      if ( (unsigned int)v7 >= cardRankSpriteList->max_length )
        goto LABEL_25;
      v10 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v7];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantCommandCardListComponent_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = v2->fields.cardRankSpriteList;
        if ( !v11 )
          break;
        if ( (unsigned int)v7 >= v11->max_length )
          goto LABEL_25;
        this = (ServantCommandCardListComponent_o *)v11->m_Items[v7];
        if ( !this )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      }
      if ( v5 >= max_length )
        return;
      cardSpriteList = v2->fields.cardSpriteList;
      ++v5;
    }
    while ( cardSpriteList );
LABEL_23:
    sub_B0D97C(this);
  }
}


void __fastcall ServantCommandCardListComponent__Set(
        ServantCommandCardListComponent_o *this,
        int64_t userSvtId,
        bool isChkLock,
        int32_t cardIconType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v13; // x3

  if ( (byte_4215EED & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4215EED = 1;
  }
  this->fields.isChkLock = isChkLock;
  if ( userSvtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               userSvtId,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantCommandCardListComponent__Set_27048304(this, Entity, cardIconType, v13);
  }
}


void __fastcall ServantCommandCardListComponent__SetHide(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x7

  ServantCommandCardListComponent__Set_27047044(this, 0LL, 0LL, 0LL, 4, 1, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_27047044(
        ServantCommandCardListComponent_o *this,
        System_Int32_array *cardIds,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Instance; // x0
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x25
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w21
  int v19; // w22
  il2cpp_array_size_t v20; // w10
  struct UISprite_array *grantSpriteList; // x9
  __int64 v22; // x20
  struct UISprite_array *cardRankSpriteList; // x10
  UISprite_o *v24; // x19
  UnityEngine_Behaviour_o *v25; // x26
  UnityEngine_Object_o *v26; // x25
  int32_t v27; // w27
  int32_t v28; // w28
  int32_t v29; // w1
  il2cpp_array_size_t v30; // w8
  il2cpp_array_size_t v31; // w8
  UserServantCommandCodeEntity_o *v32; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int v34; // w9
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  bool v39; // w1
  UnityEngine_Behaviour_o *v40; // x0
  __int64 v41; // x0
  unsigned __int8 v45; // [xsp+1Ch] [xbp-64h]
  signed int v46; // [xsp+20h] [xbp-60h]
  UserServantCommandCodeEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4215EF1 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, cardIds);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4215EF1 = 1;
  }
  entity = 0LL;
  if ( cardIds )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster
      || (Instance = UserServantCommandCodeMaster__TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       Instance,
                       svtId,
                       0LL),
          (cardSpriteList = this->fields.cardSpriteList) == 0LL) )
    {
LABEL_70:
      sub_B0D97C(Instance);
    }
    max_length = cardSpriteList->max_length;
    if ( max_length >= 1 )
    {
      v19 = 1;
      v46 = cardIds->max_length;
      v45 = Instance;
      while ( 1 )
      {
        v20 = v19 - 1;
        if ( v19 - 1 >= cardSpriteList->max_length )
          goto LABEL_73;
        grantSpriteList = this->fields.grantSpriteList;
        if ( !grantSpriteList )
          goto LABEL_70;
        v22 = (int)v20;
        if ( v20 >= grantSpriteList->max_length )
          goto LABEL_73;
        cardRankSpriteList = this->fields.cardRankSpriteList;
        if ( !cardRankSpriteList )
          goto LABEL_70;
        if ( (unsigned int)v22 >= cardRankSpriteList->max_length )
        {
LABEL_73:
          v41 = sub_B0D9A8(Instance);
          sub_B0D948(v41, 0LL);
        }
        v24 = cardSpriteList->m_Items[v22];
        v25 = (UnityEngine_Behaviour_o *)grantSpriteList->m_Items[v22];
        v26 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v22];
        v27 = 0;
        if ( collectionStatus == 4 )
        {
          v28 = 0;
          v29 = 0;
        }
        else
        {
          v28 = 0;
          v29 = 0;
          if ( (int)v22 < v46 )
          {
            if ( (unsigned int)v22 >= cardIds->max_length )
              goto LABEL_73;
            v29 = cardIds->m_Items[v22 + 1];
            if ( codeIds && (v30 = codeIds->max_length, (int)v22 < (int)v30) )
            {
              if ( (unsigned int)v22 >= v30 )
                goto LABEL_73;
              v28 = codeIds->m_Items[v22 + 1];
            }
            else
            {
              v28 = 0;
            }
            if ( cardParams && (v31 = cardParams->max_length, (int)v22 < (int)v31) )
            {
              if ( (unsigned int)v22 >= v31 )
                goto LABEL_73;
              v27 = cardParams->m_Items[v22 + 1];
            }
            else
            {
              v27 = 0;
            }
          }
        }
        BattleCommand__setSprite(v24, v29, 0LL);
        if ( this->fields.isChkLock )
        {
          v32 = entity;
          if ( entity )
          {
            userCommandCodeIds = entity->fields.userCommandCodeIds;
            if ( !userCommandCodeIds )
              goto LABEL_70;
            v34 = userCommandCodeIds->max_length;
            if ( (int)v22 >= v34 )
            {
              v32 = 0LL;
            }
            else
            {
              if ( (unsigned int)v22 >= v34 )
                goto LABEL_73;
              v32 = (UserServantCommandCodeEntity_o *)userCommandCodeIds->m_Items[v22];
            }
          }
          if ( ((v32 != (UserServantCommandCodeEntity_o *)-1LL) & v45) != 0 )
          {
            if ( !v24 )
              goto LABEL_70;
            r = this->fields.COMMAND_CARD_NORMAL.fields.r;
            g = this->fields.COMMAND_CARD_NORMAL.fields.g;
            b = this->fields.COMMAND_CARD_NORMAL.fields.b;
            a = this->fields.COMMAND_CARD_NORMAL.fields.a;
          }
          else
          {
            if ( !v24 )
              goto LABEL_70;
            r = this->fields.COMMAND_CARD_GRAY_OUT.fields.r;
            g = this->fields.COMMAND_CARD_GRAY_OUT.fields.g;
            b = this->fields.COMMAND_CARD_GRAY_OUT.fields.b;
            a = this->fields.COMMAND_CARD_GRAY_OUT.fields.a;
          }
          UIWidget__set_color((UIWidget_o *)v24, *(UnityEngine_Color_o *)&r, 0LL);
        }
        if ( !v25 )
          goto LABEL_70;
        if ( v28 < 1 )
        {
          UnityEngine_Behaviour__set_enabled(v25, 0, 0LL);
        }
        else
        {
          UnityEngine_Behaviour__set_enabled(v25, 1, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCommandCodeMiniImage((UISprite_o *)v25, v28, 0LL);
        }
        if ( v27 < 1 )
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_68;
          if ( !v26 )
            goto LABEL_70;
          v40 = (UnityEngine_Behaviour_o *)v26;
          v39 = 0;
        }
        else
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_68;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          Instance = AtlasManager__SetCommandCardIconImage((UISprite_o *)v26, v27, cardIconType, 0, 0LL);
          if ( !v26 )
            goto LABEL_70;
          v39 = Instance & 1;
          v40 = (UnityEngine_Behaviour_o *)v26;
        }
        UnityEngine_Behaviour__set_enabled(v40, v39, 0LL);
LABEL_68:
        if ( v19 >= max_length )
          return;
        cardSpriteList = this->fields.cardSpriteList;
        ++v19;
        if ( !cardSpriteList )
          goto LABEL_70;
      }
    }
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)cardIds);
  }
}


void __fastcall ServantCommandCardListComponent__Set_27048304(
        ServantCommandCardListComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t cardIconType,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  System_Int32_array *CommandCardParam; // x23
  System_Int32_array *CommandCodeIdList; // x3
  const MethodInfo *v12; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4215EEE & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    byte_4215EEE = 1;
  }
  if ( userSvtEntity )
  {
    v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    *(_QWORD *)&v13.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL);
    CommandCardParam = UserServantEntity__GetCommandCardParam(userSvtEntity, 0LL);
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0LL);
    ServantCommandCardListComponent__Set_27048524(this, v9, CommandCardParam, CommandCodeIdList, 2, cardIconType, v12);
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_27048524(
        ServantCommandCardListComponent_o *this,
        int32_t svtId,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  void *Instance; // x0
  const MethodInfo *v16; // x7

  if ( (byte_4215EF0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4215EF0 = 1;
  }
  if ( svtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
      || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       svtId,
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    ServantCommandCardListComponent__Set_27047044(
      this,
      *((System_Int32_array **)Instance + 18),
      cardParams,
      codeIds,
      collectionStatus,
      cardIconType,
      svtId,
      v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_27048784(
        ServantCommandCardListComponent_o *this,
        int32_t svtId,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t Instance; // x0
  WarEntity_o *v17; // x24
  __int64 v18; // x25
  __int64 v19; // x25
  UserServantCommandCardMaster_o *MasterData_WarQuestSelectionMaster; // x25
  const MethodInfo *v21; // x7
  System_Int32_array *commandCardParam; // x2
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4215EEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4215EEF = 1;
  }
  entity = 0LL;
  if ( svtId > 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        v17 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                svtId,
                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
          sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v19 = **(_QWORD **)(v18 + 192);
        if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
          sub_AA65A4(v19);
        Instance = **(_QWORD **)(v19 + 184);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   (DataManager_o *)Instance,
                                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( MasterData_WarQuestSelectionMaster )
          {
            Instance = UserServantCommandCardMaster__TryGetEntity(
                         MasterData_WarQuestSelectionMaster,
                         &entity,
                         Instance,
                         svtId,
                         0LL);
            commandCardParam = 0LL;
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_21;
              commandCardParam = entity->fields.commandCardParam;
            }
            if ( v17 )
            {
              ServantCommandCardListComponent__Set_27047044(
                this,
                *(System_Int32_array **)&v17[1].fields.id,
                commandCardParam,
                codeIds,
                collectionStatus,
                cardIconType,
                svtId,
                v21);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B0D97C(Instance);
  }
  ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
}