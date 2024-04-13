void __fastcall ServantCommandCardListComponent___ctor(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UISprite_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISprite_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UISprite_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  float v26; // s4
  float v27; // s5
  float v28; // s6
  float v29; // s4
  float v30; // s5
  float v31; // s6
  struct UnityEngine_Color_o v32; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v33; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9CE3 & 1) == 0 )
  {
    sub_B5D5C4(&UISprite___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CE3 = 1;
  }
  v5 = (struct UISprite_array *)sub_B5D5DC(UISprite___TypeInfo, 5LL);
  this->fields.cardSpriteList = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cardSpriteList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (struct UISprite_array *)sub_B5D5DC(UISprite___TypeInfo, 5LL);
  this->fields.grantSpriteList = v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.grantSpriteList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct UISprite_array *)sub_B5D5DC(UISprite___TypeInfo, 5LL);
  this->fields.cardRankSpriteList = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cardRankSpriteList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v34.fields.r = 0.4;
  v33 = (struct UnityEngine_Color_o)0LL;
  v34.fields.g = 0.4;
  v34.fields.b = 0.4;
  UnityEngine_Color___ctor_41567816(v34, v26, v27, v28, (const MethodInfo *)&v33);
  this->fields.COMMAND_CARD_GRAY_OUT = v33;
  v35.fields.r = 1.0;
  v35.fields.g = 1.0;
  v35.fields.b = 1.0;
  v32 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41567816(v35, v29, v30, v31, (const MethodInfo *)&v32);
  this->fields.COMMAND_CARD_NORMAL = v32;
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
    sub_B5D69C(this, method);
  v6 = this;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = cardSpriteList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantCommandCardListComponent_o *v4; // x19
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w21
  int v7; // w22
  int v8; // w9
  __int64 v9; // x24
  struct UISprite_array *grantSpriteList; // x8
  struct UISprite_array *cardRankSpriteList; // x8
  UnityEngine_Object_o *v12; // x20
  struct UISprite_array *v13; // x8
  __int64 v14; // x0

  v4 = this;
  if ( (byte_42E9CDD & 1) == 0 )
  {
    this = (ServantCommandCardListComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CDD = 1;
  }
  cardSpriteList = v4->fields.cardSpriteList;
  if ( !cardSpriteList )
    goto LABEL_23;
  max_length = cardSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 1;
    do
    {
      v8 = v7 - 1;
      if ( v7 - 1 >= cardSpriteList->max_length )
      {
LABEL_25:
        v14 = sub_B5D6C8(this);
        sub_B5D668(v14, 0LL);
      }
      v9 = v8;
      this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v8];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      grantSpriteList = v4->fields.grantSpriteList;
      if ( !grantSpriteList )
        break;
      if ( (unsigned int)v9 >= grantSpriteList->max_length )
        goto LABEL_25;
      this = (ServantCommandCardListComponent_o *)grantSpriteList->m_Items[v9];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      cardRankSpriteList = v4->fields.cardRankSpriteList;
      if ( !cardRankSpriteList )
        break;
      if ( (unsigned int)v9 >= cardRankSpriteList->max_length )
        goto LABEL_25;
      v12 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v9];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantCommandCardListComponent_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v13 = v4->fields.cardRankSpriteList;
        if ( !v13 )
          break;
        if ( (unsigned int)v9 >= v13->max_length )
          goto LABEL_25;
        this = (ServantCommandCardListComponent_o *)v13->m_Items[v9];
        if ( !this )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      }
      if ( v7 >= max_length )
        return;
      cardSpriteList = v4->fields.cardSpriteList;
      ++v7;
    }
    while ( cardSpriteList );
LABEL_23:
    sub_B5D69C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set(
        ServantCommandCardListComponent_o *this,
        int64_t userSvtId,
        bool isChkLock,
        int32_t cardIconType,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v18; // x3

  if ( (byte_42E9CDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, isChkLock, *(_QWORD *)&cardIconType);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E9CDE = 1;
  }
  this->fields.isChkLock = isChkLock;
  if ( userSvtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v16);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               userSvtId,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantCommandCardListComponent__Set_27528296(this, Entity, cardIconType, v18);
  }
}


void __fastcall ServantCommandCardListComponent__SetHide(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x7

  ServantCommandCardListComponent__Set_27527036(this, 0LL, 0LL, 0LL, 4, 1, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_27527036(
        ServantCommandCardListComponent_o *this,
        System_Int32_array *cardIds,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        int32_t svtId,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Instance; // x0
  __int64 v24; // x1
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x25
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w21
  int v28; // w22
  il2cpp_array_size_t v29; // w10
  struct UISprite_array *grantSpriteList; // x9
  __int64 v31; // x20
  struct UISprite_array *cardRankSpriteList; // x10
  UISprite_o *v33; // x19
  UnityEngine_Behaviour_o *v34; // x26
  UnityEngine_Object_o *v35; // x25
  int32_t v36; // w27
  int32_t v37; // w28
  int32_t v38; // w1
  il2cpp_array_size_t v39; // w8
  il2cpp_array_size_t v40; // w8
  UserServantCommandCodeEntity_o *v41; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int v43; // w9
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  bool v48; // w1
  UnityEngine_Behaviour_o *v49; // x0
  __int64 v50; // x0
  unsigned __int8 v54; // [xsp+1Ch] [xbp-64h]
  signed int v55; // [xsp+20h] [xbp-60h]
  UserServantCommandCodeEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E9CE2 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)cardIds, (_DWORD)cardParams, codeIds);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E9CE2 = 1;
  }
  entity = 0LL;
  if ( cardIds )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
      sub_B5D69C(Instance, v24);
    }
    max_length = cardSpriteList->max_length;
    if ( max_length >= 1 )
    {
      v28 = 1;
      v55 = cardIds->max_length;
      v54 = Instance;
      while ( 1 )
      {
        v29 = v28 - 1;
        if ( v28 - 1 >= cardSpriteList->max_length )
          goto LABEL_73;
        grantSpriteList = this->fields.grantSpriteList;
        if ( !grantSpriteList )
          goto LABEL_70;
        v31 = (int)v29;
        if ( v29 >= grantSpriteList->max_length )
          goto LABEL_73;
        cardRankSpriteList = this->fields.cardRankSpriteList;
        if ( !cardRankSpriteList )
          goto LABEL_70;
        if ( (unsigned int)v31 >= cardRankSpriteList->max_length )
        {
LABEL_73:
          v50 = sub_B5D6C8(Instance);
          sub_B5D668(v50, 0LL);
        }
        v33 = cardSpriteList->m_Items[v31];
        v34 = (UnityEngine_Behaviour_o *)grantSpriteList->m_Items[v31];
        v35 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v31];
        v36 = 0;
        if ( collectionStatus == 4 )
        {
          v37 = 0;
          v38 = 0;
        }
        else
        {
          v37 = 0;
          v38 = 0;
          if ( (int)v31 < v55 )
          {
            if ( (unsigned int)v31 >= cardIds->max_length )
              goto LABEL_73;
            v38 = cardIds->m_Items[v31 + 1];
            if ( codeIds && (v39 = codeIds->max_length, (int)v31 < (int)v39) )
            {
              if ( (unsigned int)v31 >= v39 )
                goto LABEL_73;
              v37 = codeIds->m_Items[v31 + 1];
            }
            else
            {
              v37 = 0;
            }
            if ( cardParams && (v40 = cardParams->max_length, (int)v31 < (int)v40) )
            {
              if ( (unsigned int)v31 >= v40 )
                goto LABEL_73;
              v36 = cardParams->m_Items[v31 + 1];
            }
            else
            {
              v36 = 0;
            }
          }
        }
        BattleCommand__setSprite(v33, v38, 0LL);
        if ( this->fields.isChkLock )
        {
          v41 = entity;
          if ( entity )
          {
            userCommandCodeIds = entity->fields.userCommandCodeIds;
            if ( !userCommandCodeIds )
              goto LABEL_70;
            v43 = userCommandCodeIds->max_length;
            if ( (int)v31 >= v43 )
            {
              v41 = 0LL;
            }
            else
            {
              if ( (unsigned int)v31 >= v43 )
                goto LABEL_73;
              v41 = (UserServantCommandCodeEntity_o *)userCommandCodeIds->m_Items[v31];
            }
          }
          if ( ((v41 != (UserServantCommandCodeEntity_o *)-1LL) & v54) != 0 )
          {
            if ( !v33 )
              goto LABEL_70;
            r = this->fields.COMMAND_CARD_NORMAL.fields.r;
            g = this->fields.COMMAND_CARD_NORMAL.fields.g;
            b = this->fields.COMMAND_CARD_NORMAL.fields.b;
            a = this->fields.COMMAND_CARD_NORMAL.fields.a;
          }
          else
          {
            if ( !v33 )
              goto LABEL_70;
            r = this->fields.COMMAND_CARD_GRAY_OUT.fields.r;
            g = this->fields.COMMAND_CARD_GRAY_OUT.fields.g;
            b = this->fields.COMMAND_CARD_GRAY_OUT.fields.b;
            a = this->fields.COMMAND_CARD_GRAY_OUT.fields.a;
          }
          UIWidget__set_color((UIWidget_o *)v33, *(UnityEngine_Color_o *)&r, 0LL);
        }
        if ( !v34 )
          goto LABEL_70;
        if ( v37 < 1 )
        {
          UnityEngine_Behaviour__set_enabled(v34, 0, 0LL);
        }
        else
        {
          UnityEngine_Behaviour__set_enabled(v34, 1, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCommandCodeMiniImage((UISprite_o *)v34, v37, 0LL);
        }
        if ( v36 < 1 )
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_68;
          if ( !v35 )
            goto LABEL_70;
          v49 = (UnityEngine_Behaviour_o *)v35;
          v48 = 0;
        }
        else
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_68;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          Instance = AtlasManager__SetCommandCardIconImage((UISprite_o *)v35, v36, cardIconType, 0, 0LL);
          if ( !v35 )
            goto LABEL_70;
          v48 = Instance & 1;
          v49 = (UnityEngine_Behaviour_o *)v35;
        }
        UnityEngine_Behaviour__set_enabled(v49, v48, 0LL);
LABEL_68:
        if ( v28 >= max_length )
          return;
        cardSpriteList = this->fields.cardSpriteList;
        ++v28;
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


void __fastcall ServantCommandCardListComponent__Set_27528296(
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

  if ( (byte_42E9CDF & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)userSvtEntity, cardIconType, method);
    byte_42E9CDF = 1;
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
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL);
    CommandCardParam = UserServantEntity__GetCommandCardParam(userSvtEntity, 0LL);
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0LL);
    ServantCommandCardListComponent__Set_27528516(this, v9, CommandCardParam, CommandCodeIdList, 2, cardIconType, v12);
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_27528516(
        ServantCommandCardListComponent_o *this,
        int32_t svtId,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  void *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x7

  if ( (byte_42E9CE1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, svtId, (_DWORD)cardParams, codeIds);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E9CE1 = 1;
  }
  if ( svtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
      || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       svtId,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
      sub_B5D69C(Instance, v20);
    }
    ServantCommandCardListComponent__Set_27527036(
      this,
      *((System_Int32_array **)Instance + 18),
      cardParams,
      codeIds,
      collectionStatus,
      cardIconType,
      svtId,
      v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_27528776(
        ServantCommandCardListComponent_o *this,
        int32_t svtId,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int64_t Instance; // x0
  __int64 v27; // x1
  WarEntity_o *v28; // x24
  __int64 v29; // x25
  __int64 v30; // x25
  UserServantCommandCardMaster_o *MasterData_WarQuestSelectionMaster; // x25
  const MethodInfo *v32; // x7
  System_Int32_array *commandCardParam; // x2
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9CE0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, svtId, (_DWORD)codeIds, *(_QWORD *)&collectionStatus);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42E9CE0 = 1;
  }
  entity = 0LL;
  if ( svtId > 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        v28 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                svtId,
                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v29 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
          sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v30 = **(_QWORD **)(v29 + 192);
        if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
          sub_AF52C4(v30);
        Instance = **(_QWORD **)(v30 + 184);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   (DataManager_o *)Instance,
                                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
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
            if ( v28 )
            {
              ServantCommandCardListComponent__Set_27527036(
                this,
                *(System_Int32_array **)&v28[1].fields.id,
                commandCardParam,
                codeIds,
                collectionStatus,
                cardIconType,
                svtId,
                v32);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B5D69C(Instance, v27);
  }
  ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
}