void ServantCommandCardListComponent___ctor(ServantCommandCardListComponent_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct UISprite_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UISprite_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596FCE7 & 1) == 0 )
  {
    sub_2213A60(&UISprite___TypeInfo);
    byte_596FCE7 = 1;
  }
  v3 = (struct UISprite_array *)sub_2213B20(UISprite___TypeInfo, 5);
  this->fields.cardSpriteList = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cardSpriteList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct UISprite_array *)sub_2213B20(UISprite___TypeInfo, 5);
  this->fields.grantSpriteList = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grantSpriteList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (struct UISprite_array *)sub_2213B20(UISprite___TypeInfo, 5);
  this->fields.cardRankSpriteList = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cardRankSpriteList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.COMMAND_CARD_GRAY_OUT = (struct UnityEngine_Color_o)xmmword_E9C860;
  this->fields.COMMAND_CARD_NORMAL = _Q0;
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
    sub_2213CDC(this, method);
  v6 = this;
  v8 = 0;
  while ( 1 )
  {
    max_length = cardSpriteList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_2213CE4(this);
    this = (ServantCommandCardListComponent_o *)cardSpriteList->m_Items[v8];
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, start, 0);
      start = start + interval;
      cardSpriteList = v6->fields.cardSpriteList;
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
  int max_length; // w8
  int v5; // w22
  __int64 v6; // x23
  struct UISprite_array *v7; // x8
  unsigned int v8; // w24
  struct UISprite_array *grantSpriteList; // x8
  struct UISprite_array *cardRankSpriteList; // x8
  UnityEngine_Object_o *v11; // x20
  struct UISprite_array *v12; // x8

  v2 = this;
  if ( (byte_596FCE1 & 1) == 0 )
  {
    this = (ServantCommandCardListComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FCE1 = 1;
  }
  cardSpriteList = v2->fields.cardSpriteList;
  if ( !cardSpriteList )
    goto LABEL_23;
  max_length = cardSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v5 = -max_length;
    v6 = 4;
    while ( 1 )
    {
      v7 = v2->fields.cardSpriteList;
      if ( !v7 )
        break;
      v8 = v6 - 4;
      if ( (unsigned int)(v6 - 4) >= LODWORD(v7->max_length) )
        goto LABEL_24;
      this = (ServantCommandCardListComponent_o *)*((_QWORD *)&v7->obj.klass + v6);
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      grantSpriteList = v2->fields.grantSpriteList;
      if ( !grantSpriteList )
        break;
      if ( v8 >= LODWORD(grantSpriteList->max_length) )
        goto LABEL_24;
      this = (ServantCommandCardListComponent_o *)*((_QWORD *)&grantSpriteList->obj.klass + v6);
      if ( !this )
        break;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      cardRankSpriteList = v2->fields.cardRankSpriteList;
      if ( !cardRankSpriteList )
        break;
      if ( v8 >= LODWORD(cardRankSpriteList->max_length) )
        goto LABEL_24;
      v11 = (UnityEngine_Object_o *)*((_QWORD *)&cardRankSpriteList->obj.klass + v6);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (ServantCommandCardListComponent_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = v2->fields.cardRankSpriteList;
        if ( !v12 )
          break;
        if ( v8 >= LODWORD(v12->max_length) )
LABEL_24:
          sub_2213CE4(this);
        this = (ServantCommandCardListComponent_o *)*((_QWORD *)&v12->obj.klass + v6);
        if ( !this )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      }
      if ( v5 + (_DWORD)++v6 == 4 )
        return;
    }
LABEL_23:
    sub_2213CDC(this, method);
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
  __int64 v10; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v12; // x3

  v8 = isChkLock;
  if ( (byte_596FCE2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596FCE2 = 1;
  }
  this->fields.isChkLock = v8;
  if ( userSvtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v10);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               userSvtId,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantCommandCardListComponent__Set_48038052(this, (UserServantEntity_o *)Entity, cardIconType, v12);
  }
}


void ServantCommandCardListComponent__SetHide(ServantCommandCardListComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x7

  ServantCommandCardListComponent__Set_48036664(this, 0, 0, 0, 4, 1, 0, v2);
}


void ServantCommandCardListComponent__Set_48036664(
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
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x23
  struct UISprite_array *cardSpriteList; // x8
  il2cpp_array_size_t max_length; // x8
  __int64 v16; // x21
  unsigned __int64 v17; // x25
  signed __int64 v18; // x22
  struct UISprite_array *v19; // x8
  struct UISprite_array *grantSpriteList; // x9
  struct UISprite_array *cardRankSpriteList; // x10
  int32_t v22; // w19
  UISprite_o *v23; // x29
  UnityEngine_Behaviour_o *v24; // x27
  UnityEngine_Object_o *v25; // x26
  int32_t v26; // w23
  int32_t v27; // w28
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v29; // x8
  UserServantCommandCodeEntity_o *v30; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  unsigned __int64 v32; // x9
  float *p_a; // x8
  struct UnityEngine_Color_o *p_COMMAND_CARD_NORMAL; // x11
  float *p_b; // x9
  float *p_g; // x10
  __int64 v37; // x1
  __int64 v38; // x1
  int v39; // w8
  unsigned __int8 v43; // [xsp+7Ch] [xbp-74h]
  UserServantCommandCodeEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FCE6 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BattleCommand_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596FCE6 = 1;
  }
  entity = 0;
  if ( cardIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_73;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object
      || (Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                        (UserServantCommandCodeMaster_o *)MasterData_object,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        svtId,
                                        0),
          cardSpriteList = this->fields.cardSpriteList,
          v43 = (unsigned __int8)Instance,
          !cardSpriteList) )
    {
LABEL_73:
      sub_2213CDC(Instance, v12);
    }
    max_length = cardSpriteList->max_length;
    if ( (int)max_length >= 1 )
    {
      v16 = (unsigned int)max_length;
      v17 = 0;
      v18 = (int)cardIds->max_length;
      do
      {
        v19 = this->fields.cardSpriteList;
        if ( !v19 )
          goto LABEL_73;
        if ( v17 >= LODWORD(v19->max_length) )
          goto LABEL_74;
        grantSpriteList = this->fields.grantSpriteList;
        if ( !grantSpriteList )
          goto LABEL_73;
        if ( v17 >= LODWORD(grantSpriteList->max_length) )
          goto LABEL_74;
        cardRankSpriteList = this->fields.cardRankSpriteList;
        if ( !cardRankSpriteList )
          goto LABEL_73;
        if ( v17 >= LODWORD(cardRankSpriteList->max_length) )
          goto LABEL_74;
        v22 = 0;
        v23 = v19->m_Items[v17];
        v24 = (UnityEngine_Behaviour_o *)grantSpriteList->m_Items[v17];
        v25 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v17];
        if ( collectionStatus == 4 )
        {
          v26 = 0;
          v27 = 0;
        }
        else
        {
          v26 = 0;
          v27 = 0;
          if ( (__int64)v17 < v18 )
          {
            if ( v17 >= LODWORD(cardIds->max_length) )
              goto LABEL_74;
            v27 = cardIds->m_Items[v17];
            if ( codeIds && (max_length_low = LODWORD(codeIds->max_length), (__int64)v17 < (int)max_length_low) )
            {
              if ( v17 >= max_length_low )
                goto LABEL_74;
              v26 = codeIds->m_Items[v17];
            }
            else
            {
              v26 = 0;
            }
            if ( cardParams && (v29 = LODWORD(cardParams->max_length), (__int64)v17 < (int)v29) )
            {
              if ( v17 >= v29 )
                goto LABEL_74;
              v22 = cardParams->m_Items[v17];
            }
            else
            {
              v22 = 0;
            }
          }
        }
        if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v12);
        BattleCommand__setSprite(v23, v27, 0);
        if ( this->fields.isChkLock )
        {
          v30 = entity;
          if ( entity )
          {
            userCommandCodeIds = entity->fields.userCommandCodeIds;
            if ( !userCommandCodeIds )
              goto LABEL_73;
            v32 = LODWORD(userCommandCodeIds->max_length);
            if ( (__int64)v17 >= (int)v32 )
            {
              v30 = 0;
            }
            else
            {
              if ( v17 >= v32 )
LABEL_74:
                sub_2213CE4(Instance);
              v30 = (UserServantCommandCodeEntity_o *)userCommandCodeIds->m_Items[v17];
            }
          }
          if ( (v43 & (v30 != (UserServantCommandCodeEntity_o *)-1LL)) != 0 )
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_NORMAL;
            p_a = &this->fields.COMMAND_CARD_NORMAL.fields.a;
            p_g = &this->fields.COMMAND_CARD_NORMAL.fields.g;
            p_b = &this->fields.COMMAND_CARD_NORMAL.fields.b;
            if ( !v23 )
              goto LABEL_73;
          }
          else
          {
            p_COMMAND_CARD_NORMAL = &this->fields.COMMAND_CARD_GRAY_OUT;
            p_a = &this->fields.COMMAND_CARD_GRAY_OUT.fields.a;
            p_g = &this->fields.COMMAND_CARD_GRAY_OUT.fields.g;
            p_b = &this->fields.COMMAND_CARD_GRAY_OUT.fields.b;
            if ( !v23 )
              goto LABEL_73;
          }
          v46.fields.a = *p_a;
          v46.fields.b = *p_b;
          v46.fields.g = *p_g;
          v46.fields.r = p_COMMAND_CARD_NORMAL->fields.r;
          UIWidget__set_color((UIWidget_o *)v23, v46, 0);
        }
        if ( v26 < 1 )
        {
          if ( !v24 )
            goto LABEL_73;
          UnityEngine_Behaviour__set_enabled(v24, 0, 0);
        }
        else
        {
          if ( !v24 )
            goto LABEL_73;
          UnityEngine_Behaviour__set_enabled(v24, 1, 0);
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v37);
          AtlasManager__SetCommandCodeMiniImage((UISprite_o *)v24, v26, 0);
        }
        v39 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
        if ( v22 < 1 )
        {
          if ( !v39 )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
          Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v25, 0, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_70;
          if ( !v25 )
            goto LABEL_73;
          LOBYTE(Instance) = 0;
        }
        else
        {
          if ( !v39 )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
          Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v25, 0, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_70;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
          Instance = (DataManager_o *)AtlasManager__SetCommandCardIconImage((UISprite_o *)v25, v22, cardIconType, 0, 0);
          if ( !v25 )
            goto LABEL_73;
        }
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v25, (unsigned __int8)Instance & 1, 0);
LABEL_70:
        ++v17;
      }
      while ( v16 != v17 );
    }
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)cardIds);
  }
}


void ServantCommandCardListComponent__Set_48038052(
        ServantCommandCardListComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t cardIconType,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w22
  int32_t ServantId; // w23
  System_Int32_array *CommandCardParam; // x24
  System_Int32_array *CommandCodeIdList; // x4
  const MethodInfo *v13; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_596FCE3 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596FCE3 = 1;
  }
  if ( userSvtEntity )
  {
    v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    *(_QWORD *)&v14.fields.currentCryptoKey = v7;
    *(_QWORD *)&v14.fields.fakeValue = v8;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0);
    ServantId = UserServantEntity__GetServantId(userSvtEntity, -1, 0);
    CommandCardParam = UserServantEntity__GetCommandCardParam(userSvtEntity, 0);
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0);
    ServantCommandCardListComponent__Set_48038284(
      this,
      v9,
      ServantId,
      CommandCardParam,
      CommandCodeIdList,
      2,
      cardIconType,
      v13);
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantCommandCardListComponent__Set_48038284(
        ServantCommandCardListComponent_o *this,
        int32_t baseSvtId,
        int32_t svtId,
        System_Int32_array *cardParams,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7

  if ( (byte_596FCE5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_596FCE5 = 1;
  }
  if ( baseSvtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&baseSvtId);
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&baseSvtId);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Master_object
      || (Master_object = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            svtId,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
    {
      sub_2213CDC(Master_object, v16);
    }
    ServantCommandCardListComponent__Set_48036664(
      this,
      (System_Int32_array *)Master_object[9].klass,
      cardParams,
      codeIds,
      collectionStatus,
      cardIconType,
      baseSvtId,
      v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantCommandCardListComponent__Set_48038548(
        ServantCommandCardListComponent_o *this,
        int32_t baseSvtId,
        int32_t svtId,
        System_Int32_array *codeIds,
        int32_t collectionStatus,
        int32_t cardIconType,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x24
  Il2CppObject *v16; // x25
  const MethodInfo *v17; // x7
  System_Int32_array *commandCardParam; // x2
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596FCE4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCommandCardMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596FCE4 = 1;
  }
  entity = 0;
  if ( baseSvtId > 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&baseSvtId);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( Master_object )
    {
      v15 = DataMasterBase_object__object__int___GetEntity(
              Master_object,
              svtId,
              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v16 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCommandCardMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      }
      if ( v16 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantCommandCardMaster__TryGetEntity(
                                                                        (UserServantCommandCardMaster_o *)v16,
                                                                        &entity,
                                                                        (int64_t)Master_object[2].fields.list[1].monitor,
                                                                        (unsigned int)baseSvtId,
                                                                        0);
        commandCardParam = 0;
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_20;
          commandCardParam = entity->fields.commandCardParam;
        }
        if ( v15 )
        {
          ServantCommandCardListComponent__Set_48036664(
            this,
            (System_Int32_array *)v15[9].klass,
            commandCardParam,
            codeIds,
            collectionStatus,
            cardIconType,
            baseSvtId,
            v17);
          return;
        }
      }
    }
LABEL_20:
    sub_2213CDC(Master_object, v14);
  }
  ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&baseSvtId);
}