void ServantCommandCardListComponent___ctor(ServantCommandCardListComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4C42455 & 1) == 0 )
  {
    sub_1C37058(&UISprite___TypeInfo);
    byte_4C42455 = 1;
  }
  v3 = (struct UISprite_array *)sub_1C37100(UISprite___TypeInfo, 5);
  this->fields.cardSpriteList = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cardSpriteList, (int32_t)v3, v4, v5);
  v6 = (struct UISprite_array *)sub_1C37100(UISprite___TypeInfo, 5);
  this->fields.grantSpriteList = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.grantSpriteList, (int32_t)v6, v7, v8);
  v9 = (struct UISprite_array *)sub_1C37100(UISprite___TypeInfo, 5);
  this->fields.cardRankSpriteList = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cardRankSpriteList, (int32_t)v9, v10, v11);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.COMMAND_CARD_NORMAL = _Q1;
  this->fields.COMMAND_CARD_GRAY_OUT = (struct UnityEngine_Color_o)xmmword_C0E470;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantCommandCardListComponent__AdjustCardSpriteListPosX(
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

  cardSpriteList = this->fields.cardSpriteList;
  if ( !cardSpriteList )
LABEL_7:
    sub_1C372B4(this);
  v6 = this;
  v8 = 0;
  while ( 1 )
  {
    max_length = cardSpriteList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1C372BC(this);
    this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v8];
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, start, 0);
      cardSpriteList = v6->fields.cardSpriteList;
      start = start + interval;
      ++v8;
      if ( cardSpriteList )
        continue;
    }
    goto LABEL_7;
  }
}


void ServantCommandCardListComponent__Clear(ServantCommandCardListComponent_o *this, const MethodInfo *method)
{
  ServantCommandCardListComponent_o *v2; // x19
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w9
  int v5; // w21
  unsigned int v6; // w9
  __int64 v7; // x23
  struct UISprite_array *grantSpriteList; // x8
  struct UISprite_array *cardRankSpriteList; // x8
  UnityEngine_Object_o *v10; // x20
  struct UISprite_array *v11; // x8

  v2 = this;
  if ( (byte_4C4244F & 1) == 0 )
  {
    this = (ServantCommandCardListComponent_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4244F = 1;
  }
  cardSpriteList = v2->fields.cardSpriteList;
  if ( !cardSpriteList )
    goto LABEL_22;
  max_length = cardSpriteList->max_length;
  v5 = max_length - 1;
  if ( max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= LODWORD(cardSpriteList->max_length) )
LABEL_24:
        sub_1C372BC(this);
      v7 = (int)v6;
      this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v6];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      grantSpriteList = v2->fields.grantSpriteList;
      if ( !grantSpriteList )
        break;
      if ( (unsigned int)v7 >= LODWORD(grantSpriteList->max_length) )
        goto LABEL_24;
      this = (ServantCommandCardListComponent_o *)grantSpriteList->m_Items[v7];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      cardRankSpriteList = v2->fields.cardRankSpriteList;
      if ( !cardRankSpriteList )
        break;
      if ( (unsigned int)v7 >= LODWORD(cardRankSpriteList->max_length) )
        goto LABEL_24;
      v10 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ServantCommandCardListComponent_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = v2->fields.cardRankSpriteList;
        if ( !v11 )
          break;
        if ( (unsigned int)v7 >= LODWORD(v11->max_length) )
          goto LABEL_24;
        this = (ServantCommandCardListComponent_o *)v11->m_Items[v7];
        if ( !this )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      }
      if ( v5 == (_DWORD)v7 )
        return;
      cardSpriteList = v2->fields.cardSpriteList;
      v6 = v7 + 1;
    }
    while ( cardSpriteList );
LABEL_22:
    sub_1C372B4(this);
  }
}


void ServantCommandCardListComponent__Set(
        ServantCommandCardListComponent_o *this,
        int64_t userSvtId,
        bool isChkLock,
        int32_t cardIconType,
        const MethodInfo *method)
{
  bool v8; // w22
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x1
  const MethodInfo *v11; // x3

  v8 = isChkLock;
  if ( (byte_4C42450 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42450 = 1;
  }
  this->fields.isChkLock = v8;
  if ( userSvtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
      sub_1C372B4(Instance);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               userSvtId,
               (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantCommandCardListComponent__Set_40994228(this, (UserServantEntity_o *)Entity, cardIconType, v11);
  }
}


void ServantCommandCardListComponent__SetHide(ServantCommandCardListComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x7

  ServantCommandCardListComponent__Set_40992924(this, 0, 0, 0, 4, 1, 0, v2);
}


void ServantCommandCardListComponent__Set_40992924(
        ServantCommandCardListComponent_o *this,
        System_Int32_array *cardIds,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        int32_t svtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x19
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w9
  int v16; // w21
  unsigned int v17; // w9
  struct UISprite_array *grantSpriteList; // x10
  __int64 v19; // x22
  struct UISprite_array *cardRankSpriteList; // x9
  UISprite_o *v21; // x28
  UnityEngine_Behaviour_o *v22; // x26
  UnityEngine_Object_o *v23; // x25
  int32_t v24; // w29
  int32_t v25; // w19
  int32_t v26; // w27
  int v27; // w8
  int v28; // w8
  UserServantCommandCodeEntity_o *v29; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int v31; // w9
  float *p_a; // x8
  struct UnityEngine_Color_o *p_COMMAND_CARD_NORMAL; // x11
  float *p_b; // x9
  float *p_g; // x10
  bool v36; // w1
  UnityEngine_Behaviour_o *v37; // x0
  unsigned __int8 v41; // [xsp+60h] [xbp-70h]
  int v42; // [xsp+64h] [xbp-6Ch]
  UserServantCommandCodeEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C42454 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BattleCommand_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42454 = 1;
  }
  entity = 0;
  if ( cardIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
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
                                        0),
          (cardSpriteList = this->fields.cardSpriteList) == 0) )
    {
LABEL_68:
      sub_1C372B4(Instance);
    }
    max_length = cardSpriteList->max_length;
    v16 = max_length - 1;
    if ( max_length >= 1 )
    {
      v17 = 0;
      v41 = (unsigned __int8)Instance;
      v42 = cardIds->max_length;
      while ( 1 )
      {
        if ( v17 >= LODWORD(cardSpriteList->max_length) )
          goto LABEL_71;
        grantSpriteList = this->fields.grantSpriteList;
        if ( !grantSpriteList )
          goto LABEL_68;
        v19 = (int)v17;
        if ( v17 >= LODWORD(grantSpriteList->max_length) )
          goto LABEL_71;
        cardRankSpriteList = this->fields.cardRankSpriteList;
        if ( !cardRankSpriteList )
          goto LABEL_68;
        if ( (unsigned int)v19 >= LODWORD(cardRankSpriteList->max_length) )
LABEL_71:
          sub_1C372BC(Instance);
        v21 = cardSpriteList->m_Items[v19];
        v22 = (UnityEngine_Behaviour_o *)grantSpriteList->m_Items[v19];
        v23 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v19];
        v24 = 0;
        if ( collectionStatus == 4 )
        {
          v25 = 0;
          v26 = 0;
        }
        else
        {
          v25 = 0;
          v26 = 0;
          if ( (int)v19 < v42 )
          {
            if ( (unsigned int)v19 >= LODWORD(cardIds->max_length) )
              goto LABEL_71;
            v26 = cardIds->m_Items[v19];
            if ( codeIds && (v27 = codeIds->max_length, (int)v19 < v27) )
            {
              if ( (unsigned int)v19 >= v27 )
                goto LABEL_71;
              v25 = codeIds->m_Items[v19];
            }
            else
            {
              v25 = 0;
            }
            if ( cardParams && (v28 = cardParams->max_length, (int)v19 < v28) )
            {
              if ( (unsigned int)v19 >= v28 )
                goto LABEL_71;
              v24 = cardParams->m_Items[v19];
            }
            else
            {
              v24 = 0;
            }
          }
        }
        if ( !BattleCommand_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
        BattleCommand__setSprite(v21, v26, 0);
        if ( this->fields.isChkLock )
        {
          v29 = entity;
          if ( entity )
          {
            userCommandCodeIds = entity->fields.userCommandCodeIds;
            if ( !userCommandCodeIds )
              goto LABEL_68;
            v31 = userCommandCodeIds->max_length;
            if ( (int)v19 >= v31 )
            {
              v29 = 0;
            }
            else
            {
              if ( (unsigned int)v19 >= v31 )
                goto LABEL_71;
              v29 = (UserServantCommandCodeEntity_o *)userCommandCodeIds->m_Items[v19];
            }
          }
          if ( ((v29 != (UserServantCommandCodeEntity_o *)-1LL) & v41) != 0 )
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_NORMAL;
            p_a = &this->fields.COMMAND_CARD_NORMAL.fields.a;
            p_g = &this->fields.COMMAND_CARD_NORMAL.fields.g;
            p_b = &this->fields.COMMAND_CARD_NORMAL.fields.b;
            if ( !v21 )
              goto LABEL_68;
          }
          else
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_GRAY_OUT;
            p_a = &this->fields.COMMAND_CARD_GRAY_OUT.fields.a;
            p_g = &this->fields.COMMAND_CARD_GRAY_OUT.fields.g;
            p_b = &this->fields.COMMAND_CARD_GRAY_OUT.fields.b;
            if ( !v21 )
              goto LABEL_68;
          }
          v44.fields.a = *p_a;
          v44.fields.b = *p_b;
          v44.fields.g = *p_g;
          v44.fields.r = p_COMMAND_CARD_NORMAL->fields.r;
          UIWidget__set_color((UIWidget_o *)v21, v44, 0);
        }
        if ( !v22 )
          goto LABEL_68;
        if ( v25 < 1 )
        {
          UnityEngine_Behaviour__set_enabled(v22, 0, 0);
        }
        else
        {
          UnityEngine_Behaviour__set_enabled(v22, 1, 0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommandCodeMiniImage((UISprite_o *)v22, v25, 0);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v23, 0, 0);
        if ( v24 < 1 )
        {
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_68;
            v37 = (UnityEngine_Behaviour_o *)v23;
            v36 = 0;
LABEL_65:
            UnityEngine_Behaviour__set_enabled(v37, v36, 0);
          }
        }
        else if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          Instance = (DataManager_o *)AtlasManager__SetCommandCardIconImage((UISprite_o *)v23, v24, cardIconType, 0, 0);
          if ( !v23 )
            goto LABEL_68;
          v36 = (unsigned __int8)Instance & 1;
          v37 = (UnityEngine_Behaviour_o *)v23;
          goto LABEL_65;
        }
        if ( v16 == (_DWORD)v19 )
          return;
        cardSpriteList = this->fields.cardSpriteList;
        v17 = v19 + 1;
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


void ServantCommandCardListComponent__Set_40994228(
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

  if ( (byte_4C42451 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C42451 = 1;
  }
  if ( userSvtEntity )
  {
    v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    *(_QWORD *)&v13.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v13, 0);
    CommandCardParam = UserServantEntity__GetCommandCardParam(userSvtEntity, 0);
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0);
    ServantCommandCardListComponent__Set_40994424(this, v9, CommandCardParam, CommandCodeIdList, 2, cardIconType, v12);
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantCommandCardListComponent__Set_40994424(
        ServantCommandCardListComponent_o *this,
        int32_t svtId,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x7

  if ( (byte_4C42453 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42453 = 1;
  }
  if ( svtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       svtId,
                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
    {
      sub_1C372B4(Instance);
    }
    ServantCommandCardListComponent__Set_40992924(
      this,
      (System_Int32_array *)Instance[9].klass,
      cardParams,
      codeIds,
      collectionStatus,
      cardIconType,
      svtId,
      v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantCommandCardListComponent__Set_40994668(
        ServantCommandCardListComponent_o *this,
        int32_t svtId,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *v12; // x24
  long double v13; // q0
  __int64 v14; // x8
  __int64 v15; // x0
  Il2CppObject *MasterData_object; // x25
  const MethodInfo *v17; // x7
  System_Int32_array *commandCardParam; // x2
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C42452 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42452 = 1;
  }
  entity = 0;
  if ( svtId > 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        v12 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                svtId,
                (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
          v14 = sub_1C8776C(v13);
        v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
        if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
          v15 = sub_1C8776C(v13);
        Instance = **(DataManager_o ***)(v15 + 184);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
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
                                          0);
            commandCardParam = 0;
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_25;
              commandCardParam = entity->fields.commandCardParam;
            }
            if ( v12 )
            {
              ServantCommandCardListComponent__Set_40992924(
                this,
                (System_Int32_array *)v12[9].klass,
                commandCardParam,
                codeIds,
                collectionStatus,
                cardIconType,
                svtId,
                v17);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C372B4(Instance);
  }
  ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
}