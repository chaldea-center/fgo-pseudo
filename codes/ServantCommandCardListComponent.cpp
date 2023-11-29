void __fastcall ServantCommandCardListComponent___ctor(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x2
  struct UISprite_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x2
  struct UISprite_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  float v27; // s4
  float v28; // s5
  float v29; // s6
  float v30; // s4
  float v31; // s5
  float v32; // s6
  struct UnityEngine_Color_o v33; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v34; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCE68 & 1) == 0 )
  {
    sub_B16FFC(&UISprite___TypeInfo, method);
    byte_40FCE68 = 1;
  }
  v4 = (struct UISprite_array *)sub_B17014(UISprite___TypeInfo, 5LL, v2);
  this->fields.cardSpriteList = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cardSpriteList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = (struct UISprite_array *)sub_B17014(UISprite___TypeInfo, 5LL, v11);
  this->fields.grantSpriteList = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.grantSpriteList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v20 = (struct UISprite_array *)sub_B17014(UISprite___TypeInfo, 5LL, v19);
  this->fields.cardRankSpriteList = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cardRankSpriteList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v35.fields.r = 0.4;
  v34 = (struct UnityEngine_Color_o)0LL;
  v35.fields.g = 0.4;
  v35.fields.b = 0.4;
  UnityEngine_Color___ctor_40666012(v35, v27, v28, v29, (const MethodInfo *)&v34);
  this->fields.COMMAND_CARD_GRAY_OUT = v34;
  v36.fields.r = 1.0;
  v36.fields.g = 1.0;
  v36.fields.b = 1.0;
  v33 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40666012(v36, v30, v31, v32, (const MethodInfo *)&v33);
  this->fields.COMMAND_CARD_NORMAL = v33;
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
  __int64 v9; // x20
  int max_length; // w9
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  cardSpriteList = this->fields.cardSpriteList;
  if ( !cardSpriteList )
LABEL_7:
    sub_B170D4();
  v9 = 0LL;
  while ( 1 )
  {
    max_length = cardSpriteList->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
    {
      sub_B17100(this, method, v4);
      sub_B170A0();
    }
    v11 = (UnityEngine_Component_o *)cardSpriteList->m_Items[v9];
    if ( v11 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, start, 0LL);
      cardSpriteList = this->fields.cardSpriteList;
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
  int max_length; // w21
  int v6; // w22
  int v7; // w9
  __int64 v8; // x24
  UnityEngine_Behaviour_o *v9; // x0
  struct UISprite_array *grantSpriteList; // x8
  UnityEngine_Behaviour_o *v11; // x0
  struct UISprite_array *cardRankSpriteList; // x8
  UnityEngine_Object_o *v13; // x20
  struct UISprite_array *v14; // x8
  UnityEngine_Behaviour_o *v15; // x0

  v3 = this;
  if ( (byte_40FCE62 & 1) == 0 )
  {
    this = (ServantCommandCardListComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCE62 = 1;
  }
  cardSpriteList = v3->fields.cardSpriteList;
  if ( !cardSpriteList )
    goto LABEL_23;
  max_length = cardSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 1;
    do
    {
      v7 = v6 - 1;
      if ( v6 - 1 >= cardSpriteList->max_length )
      {
LABEL_25:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v8 = v7;
      v9 = (UnityEngine_Behaviour_o *)cardSpriteList->m_Items[v7];
      if ( !v9 )
        break;
      UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
      grantSpriteList = v3->fields.grantSpriteList;
      if ( !grantSpriteList )
        break;
      if ( (unsigned int)v8 >= grantSpriteList->max_length )
        goto LABEL_25;
      v11 = (UnityEngine_Behaviour_o *)grantSpriteList->m_Items[v8];
      if ( !v11 )
        break;
      UnityEngine_Behaviour__set_enabled(v11, 0, 0LL);
      cardRankSpriteList = v3->fields.cardRankSpriteList;
      if ( !cardRankSpriteList )
        break;
      if ( (unsigned int)v8 >= cardRankSpriteList->max_length )
        goto LABEL_25;
      v13 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantCommandCardListComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v14 = v3->fields.cardRankSpriteList;
        if ( !v14 )
          break;
        if ( (unsigned int)v8 >= v14->max_length )
          goto LABEL_25;
        v15 = (UnityEngine_Behaviour_o *)v14->m_Items[v8];
        if ( !v15 )
          break;
        UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
      }
      if ( v6 >= max_length )
        return;
      cardSpriteList = v3->fields.cardSpriteList;
      ++v6;
    }
    while ( cardSpriteList );
LABEL_23:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v14; // x3

  if ( (byte_40FCE63 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FCE63 = 1;
  }
  this->fields.isChkLock = isChkLock;
  if ( userSvtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               userSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantCommandCardListComponent__Set_30471952(this, Entity, cardIconType, v14);
  }
}


void __fastcall ServantCommandCardListComponent__SetHide(
        ServantCommandCardListComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x7

  ServantCommandCardListComponent__Set_30470692(this, 0LL, 0LL, 0LL, 4, 1, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_30470692(
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
  WebViewManager_o *Instance; // x0
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t UserId; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct UISprite_array *cardSpriteList; // x8
  int max_length; // w21
  int v23; // w22
  il2cpp_array_size_t v24; // w10
  struct UISprite_array *grantSpriteList; // x9
  __int64 v26; // x20
  struct UISprite_array *cardRankSpriteList; // x10
  UISprite_o *v28; // x19
  UnityEngine_Behaviour_o *v29; // x26
  UnityEngine_Object_o *v30; // x25
  int32_t v31; // w27
  int32_t v32; // w28
  il2cpp_array_size_t v33; // w8
  il2cpp_array_size_t v34; // w8
  UserServantCommandCodeEntity_o *v35; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int v37; // w9
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  bool v42; // w0
  bool v43; // w1
  UnityEngine_Behaviour_o *v44; // x0
  bool v48; // [xsp+1Ch] [xbp-64h]
  signed int v49; // [xsp+20h] [xbp-60h]
  UserServantCommandCodeEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FCE67 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, cardIds);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FCE67 = 1;
  }
  entity = 0LL;
  if ( cardIds )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster
      || (v18 = UserServantCommandCodeMaster__TryGetEntity(
                  MasterData_WarQuestSelectionMaster,
                  &entity,
                  UserId,
                  svtId,
                  0LL),
          (cardSpriteList = this->fields.cardSpriteList) == 0LL) )
    {
LABEL_70:
      sub_B170D4();
    }
    max_length = cardSpriteList->max_length;
    if ( max_length >= 1 )
    {
      v23 = 1;
      v49 = cardIds->max_length;
      v48 = v18;
      while ( 1 )
      {
        v24 = v23 - 1;
        if ( v23 - 1 >= cardSpriteList->max_length )
          goto LABEL_73;
        grantSpriteList = this->fields.grantSpriteList;
        if ( !grantSpriteList )
          goto LABEL_70;
        v26 = (int)v24;
        if ( v24 >= grantSpriteList->max_length )
          goto LABEL_73;
        cardRankSpriteList = this->fields.cardRankSpriteList;
        if ( !cardRankSpriteList )
          goto LABEL_70;
        if ( (unsigned int)v26 >= cardRankSpriteList->max_length )
        {
LABEL_73:
          sub_B17100(v18, v19, v20);
          sub_B170A0();
        }
        v28 = cardSpriteList->m_Items[v26];
        v29 = (UnityEngine_Behaviour_o *)grantSpriteList->m_Items[v26];
        v30 = (UnityEngine_Object_o *)cardRankSpriteList->m_Items[v26];
        v31 = 0;
        if ( collectionStatus == 4 )
        {
          v32 = 0;
          LODWORD(v19) = 0;
        }
        else
        {
          v32 = 0;
          v19 = 0LL;
          if ( (int)v26 < v49 )
          {
            if ( (unsigned int)v26 >= cardIds->max_length )
              goto LABEL_73;
            v19 = (unsigned int)cardIds->m_Items[v26 + 1];
            if ( codeIds && (v33 = codeIds->max_length, (int)v26 < (int)v33) )
            {
              if ( (unsigned int)v26 >= v33 )
                goto LABEL_73;
              v32 = codeIds->m_Items[v26 + 1];
            }
            else
            {
              v32 = 0;
            }
            if ( cardParams && (v34 = cardParams->max_length, (int)v26 < (int)v34) )
            {
              if ( (unsigned int)v26 >= v34 )
                goto LABEL_73;
              v31 = cardParams->m_Items[v26 + 1];
            }
            else
            {
              v31 = 0;
            }
          }
        }
        BattleCommand__setSprite(v28, v19, 0LL);
        if ( this->fields.isChkLock )
        {
          v35 = entity;
          if ( entity )
          {
            userCommandCodeIds = entity->fields.userCommandCodeIds;
            if ( !userCommandCodeIds )
              goto LABEL_70;
            v37 = userCommandCodeIds->max_length;
            if ( (int)v26 >= v37 )
            {
              v35 = 0LL;
            }
            else
            {
              if ( (unsigned int)v26 >= v37 )
                goto LABEL_73;
              v35 = (UserServantCommandCodeEntity_o *)userCommandCodeIds->m_Items[v26];
            }
          }
          if ( v35 != (UserServantCommandCodeEntity_o *)-1LL && v48 )
          {
            if ( !v28 )
              goto LABEL_70;
            r = this->fields.COMMAND_CARD_NORMAL.fields.r;
            g = this->fields.COMMAND_CARD_NORMAL.fields.g;
            b = this->fields.COMMAND_CARD_NORMAL.fields.b;
            a = this->fields.COMMAND_CARD_NORMAL.fields.a;
          }
          else
          {
            if ( !v28 )
              goto LABEL_70;
            r = this->fields.COMMAND_CARD_GRAY_OUT.fields.r;
            g = this->fields.COMMAND_CARD_GRAY_OUT.fields.g;
            b = this->fields.COMMAND_CARD_GRAY_OUT.fields.b;
            a = this->fields.COMMAND_CARD_GRAY_OUT.fields.a;
          }
          UIWidget__set_color((UIWidget_o *)v28, *(UnityEngine_Color_o *)&r, 0LL);
        }
        if ( !v29 )
          goto LABEL_70;
        if ( v32 < 1 )
        {
          UnityEngine_Behaviour__set_enabled(v29, 0, 0LL);
        }
        else
        {
          UnityEngine_Behaviour__set_enabled(v29, 1, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCommandCodeMiniImage((UISprite_o *)v29, v32, 0LL);
        }
        if ( v31 < 1 )
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v18 = UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
          if ( !v18 )
            goto LABEL_68;
          if ( !v30 )
            goto LABEL_70;
          v44 = (UnityEngine_Behaviour_o *)v30;
          v43 = 0;
        }
        else
        {
          if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v18 = UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
          if ( !v18 )
            goto LABEL_68;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          v42 = AtlasManager__SetCommandCardIconImage((UISprite_o *)v30, v31, cardIconType, 0, 0LL);
          if ( !v30 )
            goto LABEL_70;
          v43 = v42;
          v44 = (UnityEngine_Behaviour_o *)v30;
        }
        UnityEngine_Behaviour__set_enabled(v44, v43, 0LL);
LABEL_68:
        if ( v23 >= max_length )
          return;
        cardSpriteList = this->fields.cardSpriteList;
        ++v23;
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


void __fastcall ServantCommandCardListComponent__Set_30471952(
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

  if ( (byte_40FCE64 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    byte_40FCE64 = 1;
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
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13, 0LL);
    CommandCardParam = UserServantEntity__GetCommandCardParam(userSvtEntity, 0LL);
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0LL);
    ServantCommandCardListComponent__Set_30472172(this, v9, CommandCardParam, CommandCodeIdList, 2, cardIconType, v12);
  }
  else
  {
    ServantCommandCardListComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_30472172(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v18; // x7

  if ( (byte_40FCE66 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FCE66 = 1;
  }
  if ( svtId <= 0 )
  {
    ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
      || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     svtId,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
    {
      sub_B170D4();
    }
    ServantCommandCardListComponent__Set_30470692(
      this,
      *(System_Int32_array **)&Entity[1].fields.id,
      cardParams,
      codeIds,
      collectionStatus,
      cardIconType,
      svtId,
      v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommandCardListComponent__Set_30472432(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v18; // x24
  __int64 v19; // x25
  __int64 v20; // x25
  DataManager_o *v21; // x0
  UserServantCommandCardMaster_o *v22; // x25
  int64_t UserId; // x0
  bool v24; // w0
  const MethodInfo *v25; // x7
  System_Int32_array *commandCardParam; // x2
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FCE65 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FCE65 = 1;
  }
  entity = 0LL;
  if ( svtId > 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v18 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                MasterData_WarQuestSelectionMaster,
                svtId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
          sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v20 = **(_QWORD **)(v19 + 192);
        if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
          sub_AAFCFC(v20);
        v21 = **(DataManager_o ***)(v20 + 184);
        if ( v21 )
        {
          v22 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    v21,
                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          if ( v22 )
          {
            v24 = UserServantCommandCardMaster__TryGetEntity(v22, &entity, UserId, svtId, 0LL);
            commandCardParam = 0LL;
            if ( v24 )
            {
              if ( !entity )
                goto LABEL_21;
              commandCardParam = entity->fields.commandCardParam;
            }
            if ( v18 )
            {
              ServantCommandCardListComponent__Set_30470692(
                this,
                *(System_Int32_array **)&v18[1].fields.id,
                commandCardParam,
                codeIds,
                collectionStatus,
                cardIconType,
                svtId,
                v25);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
  ServantCommandCardListComponent__Clear(this, *(const MethodInfo **)&svtId);
}