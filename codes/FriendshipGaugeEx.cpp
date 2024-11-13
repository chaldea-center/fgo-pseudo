void __fastcall FriendshipGaugeEx___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct FriendshipGaugeEx_StaticFields *static_fields; // x0
  int64_t v15; // x1
  int64_t v16; // x1
  struct FriendshipGaugeEx_StaticFields *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct FriendshipGaugeEx_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B195AA & 1) == 0 )
  {
    sub_1BCA7E0(&FriendshipGaugeEx_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_5440/*"DownloadBondAtlas"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20486/*"img_bondsgage_11"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3333/*"Bond/DownloadBond"*/, v12, v13);
    byte_4B195AA = 1;
  }
  static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
  static_fields->MAX_COLUMN = 5;
  *(_QWORD *)&static_fields->POSITION_Y_DEFAULT = 0x412000003F19999ALL;
  v15 = StringLiteral_3333/*"Bond/DownloadBond"*/;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_3333/*"Bond/DownloadBond"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->AtlasPath, v15, v2, v3, v4, v5, v6, v7);
  v16 = StringLiteral_5440/*"DownloadBondAtlas"*/;
  v17 = FriendshipGaugeEx_TypeInfo->static_fields;
  v17->ObjectName = (struct System_String_o *)StringLiteral_5440/*"DownloadBondAtlas"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v17->ObjectName, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_20486/*"img_bondsgage_11"*/;
  v25 = FriendshipGaugeEx_TypeInfo->static_fields;
  v25->SpriteName = (struct System_String_o *)StringLiteral_20486/*"img_bondsgage_11"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25->SpriteName, v24, v26, v27, v28, v29, v30, v31);
}


void __fastcall FriendshipGaugeEx___ctor(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.prevRank = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall FriendshipGaugeEx__ChangeGauge(
        FriendshipGaugeEx_o *this,
        float val,
        bool *max,
        bool *isLevelUp,
        bool *isChange,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x24
  float v16; // s0
  int32_t v17; // w23
  int32_t FriendShipRank; // w0
  int32_t v19; // w3
  const MethodInfo *v20; // x4

  if ( (byte_4B195A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FriendshipMaster___, max, isLevelUp);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B195A8 = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        v16 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0LL),
        Instance = (Il2CppObject *)BattleUtility__FloorToInt(v16, 0LL),
        !MasterData_object) )
  {
    sub_1BCAA3C(Instance, v14);
  }
  v17 = (int)Instance;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     (FriendshipMaster_o *)MasterData_object,
                     this->fields.friendshipId,
                     (int32_t)Instance,
                     this->fields.nowFriendshipRank,
                     0LL);
  if ( FriendShipRank == this->fields.exceedMaxFriendshipRank )
    *max = 1;
  if ( FriendShipRank != this->fields.prevRank )
  {
    *isLevelUp = 1;
    this->fields.prevRank = FriendShipRank;
  }
  if ( v17 != this->fields.prevPoint )
  {
    *isChange = 1;
    this->fields.prevPoint = v17;
  }
  FriendshipGaugeEx__ChangeGaugeData(this, this->fields.friendshipId, v17, v19, v20);
  return v17 - this->fields.nowFriendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGaugeEx__ChangeGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int **Master_object; // x0
  __int64 v13; // x1
  FriendshipMaster_o *v14; // x22
  int v15; // w26
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v17; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v19; // x27
  struct UISprite_array *icons; // x10
  int32_t v21; // w2
  int32_t v22; // w8
  int **v23; // x23
  struct UISprite_array *v24; // x10
  float v25; // s0
  struct UISprite_array *v26; // x8
  struct UISprite_array *v27; // x8
  signed __int64 v28; // x29
  int32_t exceedCount; // w28
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  FriendshipGaugeEx_c *v33; // x8
  UnityEngine_GameObject_o *v34; // x23
  struct FriendshipGaugeEx_StaticFields *static_fields; // x8
  float POSITION_Y_DEFAULT; // s0

  if ( (byte_4B195A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FriendshipMaster___, *(_QWORD *)&friendshipId, *(_QWORD *)&friendship);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&FriendshipGaugeEx_TypeInfo, v10, v11);
    byte_4B195A9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&friendshipId);
  Master_object = (int **)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || ((v14 = (FriendshipMaster_o *)Master_object,
         (Master_object = (int **)FriendshipMaster__GetEntity(
                                    (FriendshipMaster_o *)Master_object,
                                    friendshipId,
                                    this->fields.maxFriendshipRank - 1,
                                    0LL)) == 0LL)
      ? (v15 = 0)
      : (v15 = *((_DWORD *)Master_object + 6)),
        (iconRoots = this->fields.iconRoots) == 0LL) )
  {
LABEL_48:
    sub_1BCAA3C(Master_object, v13);
  }
  v17 = 4LL;
  while ( 1 )
  {
    max_length = iconRoots->max_length;
    v19 = v17 - 4;
    if ( v17 - 4 >= (int)max_length )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_48;
    if ( (__int64)v19 >= (int)icons->max_length )
      break;
    v21 = v17 + this->fields.maxFriendshipRank - 4;
    if ( v21 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v19 >= max_length )
        goto LABEL_50;
      Master_object = (int **)*((_QWORD *)&iconRoots->obj.klass + v17);
      if ( !Master_object )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
    else
    {
      Master_object = (int **)FriendshipMaster__GetEntity(v14, friendshipId, v21, 0LL);
      if ( !Master_object )
        goto LABEL_48;
      v22 = *((_DWORD *)Master_object + 6);
      v23 = Master_object;
      if ( v22 <= friendship )
      {
        v26 = this->fields.icons;
        if ( !v26 )
          goto LABEL_48;
        if ( v19 >= v26->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v26->obj.klass + v17);
        if ( !Master_object )
          goto LABEL_48;
        v25 = 1.0;
      }
      else if ( friendship - v15 <= 0 )
      {
        v27 = this->fields.icons;
        if ( !v27 )
          goto LABEL_48;
        if ( v19 >= v27->max_length )
LABEL_50:
          sub_1BCAA44(Master_object, v13);
        Master_object = (int **)*((_QWORD *)&v27->obj.klass + v17);
        if ( !Master_object )
          goto LABEL_48;
        v25 = 0.0;
      }
      else
      {
        v24 = this->fields.icons;
        if ( !v24 )
          goto LABEL_48;
        if ( v19 >= v24->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v24->obj.klass + v17);
        if ( !Master_object )
          goto LABEL_48;
        v25 = (float)(friendship - v15) / (float)(v22 - v15);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_object, v25, 0LL);
      Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      v15 = *((_DWORD *)v23 + 6);
      if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo, v13);
        Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      }
      v28 = *Master_object[23];
      if ( (__int64)v19 < v28 )
      {
        exceedCount = this->fields.exceedCount;
        if ( !*((_DWORD *)Master_object + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_object, v13);
          LODWORD(v28) = FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN;
        }
        v30 = this->fields.iconRoots;
        if ( !v30 )
          goto LABEL_48;
        if ( v19 >= v30->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v30->obj.klass + v17);
        if ( !Master_object )
          goto LABEL_48;
        gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
        v33 = FriendshipGaugeEx_TypeInfo;
        v34 = gameObject;
        if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo, v32);
          v33 = FriendshipGaugeEx_TypeInfo;
        }
        static_fields = v33->static_fields;
        if ( exceedCount <= (int)v28 )
          POSITION_Y_DEFAULT = static_fields->POSITION_Y_DEFAULT;
        else
          POSITION_Y_DEFAULT = static_fields->POSITION_Y_OTHER;
        GameObjectExtensions__SetLocalPositionY(v34, POSITION_Y_DEFAULT, 0LL);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v17;
    if ( !iconRoots )
      goto LABEL_48;
  }
}


void __fastcall FriendshipGaugeEx__Hide(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


bool __fastcall FriendshipGaugeEx__IsChange(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  return this->fields.nowFriendship != this->fields.nextFriendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGaugeEx__SetGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t friendshipRank,
        int32_t inMaxFriendShipRank,
        int32_t exceedCount,
        const MethodInfo *method)
{
  this->fields.nowFriendship = friendship;
  this->fields.nowFriendshipRank = friendshipRank;
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendshipRank = inMaxFriendShipRank;
  this->fields.exceedCount = exceedCount;
  this->fields.exceedMaxFriendshipRank = exceedCount + inMaxFriendShipRank;
  this->fields.prevRank = friendshipRank;
  this->fields.prevPoint = friendship;
  FriendshipGaugeEx__ChangeGaugeData(
    this,
    friendshipId,
    friendship,
    friendshipRank,
    *(const MethodInfo **)&inMaxFriendShipRank);
}


void __fastcall FriendshipGaugeEx__SetNextGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  this->fields.nextFriendship = friendship;
  this->fields.nextFriendshipRank = friendshipRank;
}


void __fastcall FriendshipGaugeEx__Show(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGaugeEx__Start(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  FriendshipGaugeEx_c *v15; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21
  __int64 v18; // x1

  if ( (byte_4B195A7 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendshipGaugeEx__Start_b__19_0__, v4, v5);
    sub_1BCA7E0(&FriendshipGaugeEx_TypeInfo, v6, v7);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_5120/*"DISABLE_FRIENDSHIP_EXCEED"*/, v10, v11);
    byte_4B195A7 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_5120/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL) != 1 )
  {
    v15 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo, v12);
      v15 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v15->static_fields->AtlasPath;
    v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13, v14);
    AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v18);
    AssetManager__loadAssetStorage(AtlasPath, v17, 1, 0LL);
  }
}


void __fastcall FriendshipGaugeEx___Start_b__19_0(
        FriendshipGaugeEx_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  FriendshipGaugeEx_c *v9; // x0
  UnityEngine_GameObject_o *Object_object__49237568; // x0
  __int64 v11; // x1

  if ( (byte_4B195AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, asset, method);
    sub_1BCA7E0(&FriendshipGaugeEx_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7, v8);
    byte_4B195AB = 1;
  }
  if ( asset )
  {
    v9 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo, asset);
      v9 = FriendshipGaugeEx_TypeInfo;
    }
    Object_object__49237568 = (UnityEngine_GameObject_o *)AssetData__GetObject_object__49237568(
                                                            asset,
                                                            v9->static_fields->ObjectName,
                                                            (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !Object_object__49237568
      || (Object_object__49237568 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  Object_object__49237568,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_object__49237568, 0LL),
          (Object_object__49237568 = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0LL) )
    {
      sub_1BCAA3C(Object_object__49237568, v11);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_object__49237568,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0LL);
  }
}