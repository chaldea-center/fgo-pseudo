void __fastcall ServantCommandCardListComponent___ctor(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct UISprite_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UISprite_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B1B9E8 & 1) == 0 )
  {
    sub_1BCAFF8(&UISprite___TypeInfo, method);
    byte_4B1B9E8 = 1;
  }
  v3 = (struct UISprite_array *)sub_1BCB0A0(UISprite___TypeInfo, 5LL);
  this->fields.cardSpriteList = v3;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.cardSpriteList, (int32_t)v3, v4, v5);
  v6 = (struct UISprite_array *)sub_1BCB0A0(UISprite___TypeInfo, 5LL);
  this->fields.grantSpriteList = v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.grantSpriteList, (int32_t)v6, v7, v8);
  v9 = (struct UISprite_array *)sub_1BCB0A0(UISprite___TypeInfo, 5LL);
  this->fields.cardRankSpriteList = v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.cardRankSpriteList, (int32_t)v9, v10, v11);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.COMMAND_CARD_NORMAL = _Q1;
  this->fields.COMMAND_CARD_GRAY_OUT = (struct UnityEngine_Color_o)xmmword_BE1B30;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantCommandCardListComponent__AdjustCardSpriteListPosX(
        ServantCommandCardListComponent_o *this,
        float start,
        float interval,
        const MethodInfo *method)
{
  __int64 v4; // x2
  struct UISprite_array *cardSpriteList; // x8
  ServantCommandCardListComponent_o *v7; // x19
  __int64 v9; // x20
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x0

  cardSpriteList = this->fields.cardSpriteList;
  if ( !cardSpriteList )
LABEL_7:
    sub_1BCB254(this, method);
  v7 = this;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = cardSpriteList->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
      sub_1BCB25C(this, method, v4);
    this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v9];
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, start, 0LL);
      cardSpriteList = v7->fields.cardSpriteList;
      start = start + interval;
      ++v9;
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
  __int64 v2; // x2
  ServantCommandCardListComponent_o *v3; // x19
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w9
  int v6; // w21
  il2cpp_array_size_t v7; // w9
  __int64 v8; // x23
  struct UISprite_array *grantSpriteList; // x8
  struct UISprite_array *cardRankSpriteList; // x8
  UnityEngine_Object_o *v11; // x20
  struct UISprite_array *v12; // x8

  v3 = this;
  if ( (byte_4B1B9E2 & 1) == 0 )
  {
    this = (ServantCommandCardListComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1B9E2 = 1;
  }
  cardSpriteList = v3->fields.cardSpriteList;
  if ( !cardSpriteList )
    goto LABEL_22;
  max_length = cardSpriteList->max_length;
  v6 = max_length - 1;
  if ( max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= cardSpriteList->max_length )
LABEL_24:
        sub_1BCB25C(this, method, v2);
      v8 = (int)v7;
      this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v7];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      grantSpriteList = v3->fields.grantSpriteList;
      if ( !grantSpriteList )
        break;
      if ( (unsigned int)v8 >= grantSpriteList->max_length )
        goto LABEL_24;
      this = (ServantCommandCardListComponent_o *)grantSpriteList->m_Items[v8];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      cardRankSpriteList = v3->fields.cardRankSpriteList;
      if ( !cardRankSpriteList )
        break;
      if ( (unsigned int)v8 >= cardRankSpriteList->max_length )
        goto LABEL_24;
      v11 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ServantCommandCardListComponent_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = v3->fields.cardRankSpriteList;
        if ( !v12 )
          break;
        if ( (unsigned int)v8 >= v12->max_length )
          goto LABEL_24;
        this = (ServantCommandCardListComponent_o *)v12->m_Items[v8];
        if ( !this )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      }
      if ( v6 == (_DWORD)v8 )
        return;
      cardSpriteList = v3->fields.cardSpriteList;
      v7 = v8 + 1;
    }
    while ( cardSpriteList );
LABEL_22:
    sub_1BCB254(this, method);
  }
}


void __fastcall ServantCommandCardListComponent__Set(
        ServantCommandCardListComponent_o *this,
        int64_t userSvtId,
        bool isChkLock,
        int32_t cardIconType,
        const MethodInfo *method)
{
  bool v8; // w22
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v14; // x3

  v8 = isChkLock;
  if ( (byte_4B1B9E3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B1B9E3 = 1;
  }
  this->fields.isChkLock = v8;
  if ( userSvtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1BCB254(Instance, v12);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               userSvtId,
               (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantCommandCardListComponent__Set_40179132(this, (UserServantEntity_o *)Entity, cardIconType, v14);
  }
}


void __fastcall ServantCommandCardListComponent__SetHide(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x7

  ServantCommandCardListComponent__Set_40177828(this, 0LL, 0LL, 0LL, 4, 1, 0, v2);
}


void __fastcall ServantCommandCardListComponent__Set_40177828(
        ServantCommandCardListComponent_o *this,
        System_Int32_array *cardIds,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x19
  __int64 v20; // x2
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w9
  int v23; // w21
  il2cpp_array_size_t v24; // w9
  struct UISprite_array *grantSpriteList; // x10
  __int64 v26; // x22
  struct UISprite_array *cardRankSpriteList; // x9
  UISprite_o *v28; // x28
  UnityEngine_Behaviour_o *v29; // x26
  UnityEngine_Object_o *v30; // x25
  int32_t v31; // w29
  int32_t v32; // w19
  int32_t v33; // w27
  il2cpp_array_size_t v34; // w8
  il2cpp_array_size_t v35; // w8
  UserServantCommandCodeEntity_o *v36; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int v38; // w9
  float *p_a; // x8
  struct UnityEngine_Color_o *p_COMMAND_CARD_NORMAL; // x11
  float *p_b; // x9
  float *p_g; // x10
  bool v43; // w1
  UnityEngine_Behaviour_o *v44; // x0
  unsigned __int8 v48; // [xsp+60h] [xbp-70h]
  signed int v49; // [xsp+64h] [xbp-6Ch]
  UserServantCommandCodeEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1B9E7 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, cardIds);
    sub_1BCAFF8(&BattleCommand_TypeInfo, v12);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v13);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B1B9E7 = 1;
  }
  entity = 0LL;
  if ( cardIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v18);
      byte_4B165D1 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object
      || (Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                        (UserServantCommandCodeMaster_o *)MasterData_object,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        svtId,
                                        0LL),
          (cardSpriteList = this->fields.cardSpriteList) == 0LL) )
    {
LABEL_68:
      sub_1BCB254(Instance, v18);
    }
    max_length = cardSpriteList->max_length;
    v23 = max_length - 1;
    if ( max_length >= 1 )
    {
      v24 = 0;
      v48 = (unsigned __int8)Instance;
      v49 = cardIds->max_length;
      while ( 1 )
      {
        if ( v24 >= cardSpriteList->max_length )
          goto LABEL_71;
        grantSpriteList = this->fields.grantSpriteList;
        if ( !grantSpriteList )
          goto LABEL_68;
        v26 = (int)v24;
        if ( v24 >= grantSpriteList->max_length )
          goto LABEL_71;
        cardRankSpriteList = this->fields.cardRankSpriteList;
        if ( !cardRankSpriteList )
          goto LABEL_68;
        if ( (unsigned int)v26 >= cardRankSpriteList->max_length )
LABEL_71:
          sub_1BCB25C(Instance, v18, v20);
        v28 = cardSpriteList->m_Items[v26];
        v29 = (UnityEngine_Behaviour_o *)grantSpriteList->m_Items[v26];
        v30 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v26];
        v31 = 0;
        if ( collectionStatus == 4 )
        {
          v32 = 0;
          v33 = 0;
        }
        else
        {
          v32 = 0;
          v33 = 0;
          if ( (int)v26 < v49 )
          {
            if ( (unsigned int)v26 >= cardIds->max_length )
              goto LABEL_71;
            v33 = cardIds->m_Items[v26 + 1];
            if ( codeIds && (v34 = codeIds->max_length, (int)v26 < (int)v34) )
            {
              if ( (unsigned int)v26 >= v34 )
                goto LABEL_71;
              v32 = codeIds->m_Items[v26 + 1];
            }
            else
            {
              v32 = 0;
            }
            if ( cardParams && (v35 = cardParams->max_length, (int)v26 < (int)v35) )
            {
              if ( (unsigned int)v26 >= v35 )
                goto LABEL_71;
              v31 = cardParams->m_Items[v26 + 1];
            }
            else
            {
              v31 = 0;
            }
          }
        }
        if ( !BattleCommand_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
        BattleCommand__setSprite(v28, v33, 0LL);
        if ( this->fields.isChkLock )
        {
          v36 = entity;
          if ( entity )
          {
            userCommandCodeIds = entity->fields.userCommandCodeIds;
            if ( !userCommandCodeIds )
              goto LABEL_68;
            v38 = userCommandCodeIds->max_length;
            if ( (int)v26 >= v38 )
            {
              v36 = 0LL;
            }
            else
            {
              if ( (unsigned int)v26 >= v38 )
                goto LABEL_71;
              v36 = (UserServantCommandCodeEntity_o *)userCommandCodeIds->m_Items[v26];
            }
          }
          if ( ((v36 != (UserServantCommandCodeEntity_o *)-1LL) & v48) != 0 )
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_NORMAL;
            p_a = &this->fields.COMMAND_CARD_NORMAL.fields.a;
            p_g = &this->fields.COMMAND_CARD_NORMAL.fields.g;
            p_b = &this->fields.COMMAND_CARD_NORMAL.fields.b;
            if ( !v28 )
              goto LABEL_68;
          }
          else
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_GRAY_OUT;
            p_a = &this->fields.COMMAND_CARD_GRAY_OUT.fields.a;
            p_g = &this->fields.COMMAND_CARD_GRAY_OUT.fields.g;
            p_b = &this->fields.COMMAND_CARD_GRAY_OUT.fields.b;
            if ( !v28 )
              goto LABEL_68;
          }
          v51.fields.a = *p_a;
          v51.fields.b = *p_b;
          v51.fields.g = *p_g;
          v51.fields.r = p_COMMAND_CARD_NORMAL->fields.r;
          UIWidget__set_color((UIWidget_o *)v28, v51, 0LL);
        }
        if ( !v29 )
          goto LABEL_68;
        if ( v32 < 1 )
        {
          UnityEngine_Behaviour__set_enabled(v29, 0, 0LL);
        }
        else
        {
          UnityEngine_Behaviour__set_enabled(v29, 1, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommandCodeMiniImage((UISprite_o *)v29, v32, 0LL);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
        if ( v31 < 1 )
        {
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_68;
            v44 = (UnityEngine_Behaviour_o *)v30;
            v43 = 0;
LABEL_65:
            UnityEngine_Behaviour__set_enabled(v44, v43, 0LL);
          }
        }
        else if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          Instance = (DataManager_o *)AtlasManager__SetCommandCardIconImage(
                                        (UISprite_o *)v30,
                                        v31,
                                        cardIconType,
                                        0,
                                        0LL);
          if ( !v30 )
            goto LABEL_68;
          v43 = (unsigned __int8)Instance & 1;
          v44 = (UnityEngine_Behaviour_o *)v30;
          goto LABEL_65;
        }
        if ( v23 == (_DWORD)v26 )
          return;
        cardSpriteList = this->fields.cardSpriteList;
        v24 = v26 + 1;
        if ( !cardSpriteList )
          goto LABEL_68;
      }
    }
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)cardIds);
  }
}


void __fastcall ServantCommandCardListComponent__Set_40179132(
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

  if ( (byte_4B1B9E4 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    byte_4B1B9E4 = 1;
  }
  if ( userSvtEntity )
  {
    v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    *(_QWORD *)&v13.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
    CommandCardParam = UserServantEntity__GetCommandCardParam(userSvtEntity, 0LL);
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0LL);
    ServantCommandCardListComponent__Set_40179328(this, v9, CommandCardParam, CommandCodeIdList, 2, cardIconType, v12);
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_40179328(
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7

  if ( (byte_4B1B9E6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B1B9E6 = 1;
  }
  if ( svtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       svtId,
                       (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
      sub_1BCB254(Instance, v16);
    }
    ServantCommandCardListComponent__Set_40177828(
      this,
      (System_Int32_array *)Instance[9].klass,
      cardParams,
      codeIds,
      collectionStatus,
      cardIconType,
      svtId,
      v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_40179572(
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x24
  long double v19; // q0
  __int64 v20; // x8
  __int64 v21; // x0
  Il2CppObject *MasterData_object; // x25
  const MethodInfo *v23; // x7
  System_Int32_array *commandCardParam; // x2
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1B9E5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v11);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B1B9E5 = 1;
  }
  entity = 0LL;
  if ( svtId > 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        v18 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                svtId,
                (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
          v20 = sub_1C1B45C(v19);
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
        if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
          v21 = sub_1C1B45C(v19);
        Instance = **(DataManager_o ***)(v21 + 184);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B165D1 )
          {
            sub_1BCAFF8(&NetworkManager_TypeInfo, v17);
            byte_4B165D1 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( MasterData_object )
          {
            Instance = (DataManager_o *)UserServantCommandCardMaster__TryGetEntity(
                                          (UserServantCommandCardMaster_o *)MasterData_object,
                                          &entity,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          (unsigned int)svtId,
                                          0LL);
            commandCardParam = 0LL;
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_25;
              commandCardParam = entity->fields.commandCardParam;
            }
            if ( v18 )
            {
              ServantCommandCardListComponent__Set_40177828(
                this,
                (System_Int32_array *)v18[9].klass,
                commandCardParam,
                codeIds,
                collectionStatus,
                cardIconType,
                svtId,
                v23);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BCB254(Instance, v17);
  }
  ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
}