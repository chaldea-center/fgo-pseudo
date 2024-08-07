void __fastcall ServantCommandCardListComponent___ctor(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  struct UISprite_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct UISprite_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FE097 & 1) == 0 )
  {
    sub_1B64A00(&UISprite___TypeInfo, method);
    byte_49FE097 = 1;
  }
  v3 = (struct UISprite_array *)sub_1B64AA8(UISprite___TypeInfo, 5LL);
  this->fields.cardSpriteList = v3;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.cardSpriteList, (int32_t)v3, v4, v5);
  v6 = (struct UISprite_array *)sub_1B64AA8(UISprite___TypeInfo, 5LL);
  this->fields.grantSpriteList = v6;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.grantSpriteList, (int32_t)v6, v7, v8);
  v9 = (struct UISprite_array *)sub_1B64AA8(UISprite___TypeInfo, 5LL);
  this->fields.cardRankSpriteList = v9;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.cardRankSpriteList, (int32_t)v9, v10, v11);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.COMMAND_CARD_NORMAL = _Q1;
  this->fields.COMMAND_CARD_GRAY_OUT = (struct UnityEngine_Color_o)xmmword_BA2D10;
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

  cardSpriteList = this->fields.cardSpriteList;
  if ( !cardSpriteList )
LABEL_7:
    sub_1B64C5C(this, method);
  v6 = this;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = cardSpriteList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1B64C64(this, method);
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
  int max_length; // w9
  int v5; // w21
  il2cpp_array_size_t v6; // w9
  __int64 v7; // x23
  struct UISprite_array *grantSpriteList; // x8
  struct UISprite_array *cardRankSpriteList; // x8
  UnityEngine_Object_o *v10; // x20
  struct UISprite_array *v11; // x8

  v2 = this;
  if ( (byte_49FE091 & 1) == 0 )
  {
    this = (ServantCommandCardListComponent_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FE091 = 1;
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
      if ( v6 >= cardSpriteList->max_length )
LABEL_24:
        sub_1B64C64(this, method);
      v7 = (int)v6;
      this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v6];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      grantSpriteList = v2->fields.grantSpriteList;
      if ( !grantSpriteList )
        break;
      if ( (unsigned int)v7 >= grantSpriteList->max_length )
        goto LABEL_24;
      this = (ServantCommandCardListComponent_o *)grantSpriteList->m_Items[v7];
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      cardRankSpriteList = v2->fields.cardRankSpriteList;
      if ( !cardRankSpriteList )
        break;
      if ( (unsigned int)v7 >= cardRankSpriteList->max_length )
        goto LABEL_24;
      v10 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ServantCommandCardListComponent_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = v2->fields.cardRankSpriteList;
        if ( !v11 )
          break;
        if ( (unsigned int)v7 >= v11->max_length )
          goto LABEL_24;
        this = (ServantCommandCardListComponent_o *)v11->m_Items[v7];
        if ( !this )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      }
      if ( v5 == (_DWORD)v7 )
        return;
      cardSpriteList = v2->fields.cardSpriteList;
      v6 = v7 + 1;
    }
    while ( cardSpriteList );
LABEL_22:
    sub_1B64C5C(this, method);
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
  if ( (byte_49FE092 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FE092 = 1;
  }
  this->fields.isChkLock = v8;
  if ( userSvtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1B64C5C(Instance, v12);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               userSvtId,
               (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantCommandCardListComponent__Set_37902768(this, (UserServantEntity_o *)Entity, cardIconType, v14);
  }
}


void __fastcall ServantCommandCardListComponent__SetHide(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x7

  ServantCommandCardListComponent__Set_37901548(this, 0LL, 0LL, 0LL, 4, 1, 0, v2);
}


void __fastcall ServantCommandCardListComponent__Set_37901548(
        ServantCommandCardListComponent_o *this,
        System_Int32_array *cardIds,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x26
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w9
  int v22; // w19
  il2cpp_array_size_t v23; // w9
  struct UISprite_array *grantSpriteList; // x10
  __int64 v25; // x21
  struct UISprite_array *cardRankSpriteList; // x9
  UISprite_o *v27; // x28
  UnityEngine_Behaviour_o *v28; // x26
  UnityEngine_Object_o *v29; // x25
  int32_t v30; // w27
  int32_t v31; // w29
  il2cpp_array_size_t v32; // w8
  il2cpp_array_size_t v33; // w8
  UserServantCommandCodeEntity_o *v34; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int v36; // w9
  float *p_a; // x8
  struct UnityEngine_Color_o *p_COMMAND_CARD_NORMAL; // x11
  float *p_b; // x9
  float *p_g; // x10
  bool v41; // w1
  UnityEngine_Behaviour_o *v42; // x0
  unsigned __int8 v45; // [xsp+50h] [xbp-70h]
  signed int v46; // [xsp+54h] [xbp-6Ch]
  UserServantCommandCodeEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FE096 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, cardIds);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v13);
    sub_1B64A00(&NetworkManager_TypeInfo, v14);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v15);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FE096 = 1;
  }
  entity = 0LL;
  if ( cardIds )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object
      || (Instance = UserServantCommandCodeMaster__TryGetEntity(
                       (UserServantCommandCodeMaster_o *)MasterData_object,
                       &entity,
                       Instance,
                       svtId,
                       0LL),
          (cardSpriteList = this->fields.cardSpriteList) == 0LL) )
    {
LABEL_62:
      sub_1B64C5C(Instance, v18);
    }
    max_length = cardSpriteList->max_length;
    v22 = max_length - 1;
    if ( max_length >= 1 )
    {
      v23 = 0;
      v45 = Instance;
      v46 = cardIds->max_length;
      while ( 1 )
      {
        if ( v23 >= cardSpriteList->max_length )
          goto LABEL_65;
        grantSpriteList = this->fields.grantSpriteList;
        if ( !grantSpriteList )
          goto LABEL_62;
        v25 = (int)v23;
        if ( v23 >= grantSpriteList->max_length )
          goto LABEL_65;
        cardRankSpriteList = this->fields.cardRankSpriteList;
        if ( !cardRankSpriteList )
          goto LABEL_62;
        if ( (unsigned int)v25 >= cardRankSpriteList->max_length )
LABEL_65:
          sub_1B64C64(Instance, v18);
        v27 = cardSpriteList->m_Items[v25];
        v28 = (UnityEngine_Behaviour_o *)grantSpriteList->m_Items[v25];
        v29 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v25];
        v30 = 0;
        if ( collectionStatus == 4 )
        {
          v31 = 0;
          LODWORD(v18) = 0;
        }
        else
        {
          v31 = 0;
          v18 = 0LL;
          if ( (int)v25 >= v46 )
            goto LABEL_30;
          if ( (unsigned int)v25 >= cardIds->max_length )
            goto LABEL_65;
          v18 = (unsigned int)cardIds->m_Items[v25 + 1];
          if ( codeIds && (v32 = codeIds->max_length, (int)v25 < (int)v32) )
          {
            if ( (unsigned int)v25 >= v32 )
              goto LABEL_65;
            v31 = codeIds->m_Items[v25 + 1];
            if ( !cardParams )
            {
LABEL_28:
              v30 = 0;
              goto LABEL_30;
            }
          }
          else
          {
            v31 = 0;
            if ( !cardParams )
              goto LABEL_28;
          }
          v33 = cardParams->max_length;
          if ( (int)v25 >= (int)v33 )
            goto LABEL_28;
          if ( (unsigned int)v25 >= v33 )
            goto LABEL_65;
          v30 = cardParams->m_Items[v25 + 1];
        }
LABEL_30:
        BattleCommand__setSprite(v27, v18, 0LL);
        if ( this->fields.isChkLock )
        {
          v34 = entity;
          if ( entity )
          {
            userCommandCodeIds = entity->fields.userCommandCodeIds;
            if ( !userCommandCodeIds )
              goto LABEL_62;
            v36 = userCommandCodeIds->max_length;
            if ( (int)v25 >= v36 )
            {
              v34 = 0LL;
            }
            else
            {
              if ( (unsigned int)v25 >= v36 )
                goto LABEL_65;
              v34 = (UserServantCommandCodeEntity_o *)userCommandCodeIds->m_Items[v25];
            }
          }
          if ( ((v34 != (UserServantCommandCodeEntity_o *)-1LL) & v45) != 0 )
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_NORMAL;
            p_a = &this->fields.COMMAND_CARD_NORMAL.fields.a;
            p_g = &this->fields.COMMAND_CARD_NORMAL.fields.g;
            p_b = &this->fields.COMMAND_CARD_NORMAL.fields.b;
            if ( !v27 )
              goto LABEL_62;
          }
          else
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_GRAY_OUT;
            p_a = &this->fields.COMMAND_CARD_GRAY_OUT.fields.a;
            p_g = &this->fields.COMMAND_CARD_GRAY_OUT.fields.g;
            p_b = &this->fields.COMMAND_CARD_GRAY_OUT.fields.b;
            if ( !v27 )
              goto LABEL_62;
          }
          v48.fields.a = *p_a;
          v48.fields.b = *p_b;
          v48.fields.g = *p_g;
          v48.fields.r = p_COMMAND_CARD_NORMAL->fields.r;
          UIWidget__set_color((UIWidget_o *)v27, v48, 0LL);
        }
        if ( !v28 )
          goto LABEL_62;
        if ( v31 < 1 )
        {
          UnityEngine_Behaviour__set_enabled(v28, 0, 0LL);
        }
        else
        {
          UnityEngine_Behaviour__set_enabled(v28, 1, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommandCodeMiniImage((UISprite_o *)v28, v31, 0LL);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
        if ( v30 < 1 )
        {
          if ( (Instance & 1) != 0 )
          {
            if ( !v29 )
              goto LABEL_62;
            v42 = (UnityEngine_Behaviour_o *)v29;
            v41 = 0;
LABEL_59:
            UnityEngine_Behaviour__set_enabled(v42, v41, 0LL);
          }
        }
        else if ( (Instance & 1) != 0 )
        {
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          Instance = AtlasManager__SetCommandCardIconImage((UISprite_o *)v29, v30, cardIconType, 0, 0LL);
          if ( !v29 )
            goto LABEL_62;
          v41 = Instance & 1;
          v42 = (UnityEngine_Behaviour_o *)v29;
          goto LABEL_59;
        }
        if ( v22 == (_DWORD)v25 )
          return;
        cardSpriteList = this->fields.cardSpriteList;
        v23 = v25 + 1;
        if ( !cardSpriteList )
          goto LABEL_62;
      }
    }
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)cardIds);
  }
}


void __fastcall ServantCommandCardListComponent__Set_37902768(
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

  if ( (byte_49FE093 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    byte_49FE093 = 1;
  }
  if ( userSvtEntity )
  {
    v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    *(_QWORD *)&v13.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v13, 0LL);
    CommandCardParam = UserServantEntity__GetCommandCardParam(userSvtEntity, 0LL);
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0LL);
    ServantCommandCardListComponent__Set_37902964(this, v9, CommandCardParam, CommandCodeIdList, 2, cardIconType, v12);
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_37902964(
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

  if ( (byte_49FE095 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FE095 = 1;
  }
  if ( svtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       svtId,
                       (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
      sub_1B64C5C(Instance, v16);
    }
    ServantCommandCardListComponent__Set_37901548(
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
void __fastcall ServantCommandCardListComponent__Set_37903208(
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
  __int64 v17; // x1
  Il2CppObject *v18; // x24
  __int64 v19; // x8
  __int64 v20; // x0
  Il2CppObject *MasterData_object; // x25
  const MethodInfo *v22; // x7
  System_Int32_array *commandCardParam; // x2
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FE094 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v11);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B64A00(&NetworkManager_TypeInfo, v13);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FE094 = 1;
  }
  entity = 0LL;
  if ( svtId > 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        v18 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                svtId,
                (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
          v19 = sub_1BB68DC(v19);
        v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
        if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
          v20 = sub_1BB68DC(v20);
        Instance = **(_QWORD **)(v20 + 184);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__get_UserId(0LL);
          if ( MasterData_object )
          {
            Instance = UserServantCommandCardMaster__TryGetEntity(
                         (UserServantCommandCardMaster_o *)MasterData_object,
                         &entity,
                         Instance,
                         (unsigned int)svtId,
                         0LL);
            commandCardParam = 0LL;
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_21;
              commandCardParam = entity->fields.commandCardParam;
            }
            if ( v18 )
            {
              ServantCommandCardListComponent__Set_37901548(
                this,
                (System_Int32_array *)v18[9].klass,
                commandCardParam,
                codeIds,
                collectionStatus,
                cardIconType,
                svtId,
                v22);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B64C5C(Instance, v17);
  }
  ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
}