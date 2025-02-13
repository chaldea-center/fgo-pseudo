void __fastcall FriendshipGaugeEx___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct FriendshipGaugeEx_StaticFields *static_fields; // x0
  int64_t v8; // x1
  int64_t v9; // x1
  struct FriendshipGaugeEx_StaticFields *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  struct FriendshipGaugeEx_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BDF9FF & 1) == 0 )
  {
    sub_1C21E38(&FriendshipGaugeEx_TypeInfo);
    sub_1C21E38(&StringLiteral_5478/*"DownloadBondAtlas"*/);
    sub_1C21E38(&StringLiteral_20631/*"img_bondsgage_11"*/);
    sub_1C21E38(&StringLiteral_3356/*"Bond/DownloadBond"*/);
    byte_4BDF9FF = 1;
  }
  static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
  static_fields->MAX_COLUMN = 5;
  *(_QWORD *)&static_fields->POSITION_Y_DEFAULT = 0x412000003F19999ALL;
  v8 = StringLiteral_3356/*"Bond/DownloadBond"*/;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_3356/*"Bond/DownloadBond"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->AtlasPath, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_5478/*"DownloadBondAtlas"*/;
  v10 = FriendshipGaugeEx_TypeInfo->static_fields;
  v10->ObjectName = (struct System_String_o *)StringLiteral_5478/*"DownloadBondAtlas"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v10->ObjectName, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_20631/*"img_bondsgage_11"*/;
  v18 = FriendshipGaugeEx_TypeInfo->static_fields;
  v18->SpriteName = (struct System_String_o *)StringLiteral_20631/*"img_bondsgage_11"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v18->SpriteName, v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall FriendshipGaugeEx___ctor(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.prevRank = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall FriendshipGaugeEx__ChangeGauge(
        FriendshipGaugeEx_o *this,
        float val,
        bool *isMax,
        bool *isLevelUp,
        bool *isChange,
        int32_t *remainingFriendship,
        const MethodInfo *method)
{
  float v13; // s0
  int32_t v14; // w24
  void *Master_object; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  int32_t prevPoint; // w9

  if ( (byte_4BDF9FD & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_FriendshipMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDF9FD = 1;
  }
  v13 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0LL);
  v14 = BattleUtility__FloorToInt(v13, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || (Master_object = FriendshipMaster__GetFriendShipRankEntity(
                          (FriendshipMaster_o *)Master_object,
                          this->fields.friendshipId,
                          v14,
                          this->fields.nowFriendshipRank,
                          0LL)) == 0LL )
  {
    sub_1C22094(Master_object, v16);
  }
  *remainingFriendship = *((_DWORD *)Master_object + 6) - v14;
  *isMax = *((_DWORD *)Master_object + 5) == this->fields.exceedMaxFriendshipRank;
  *isLevelUp = *((_DWORD *)Master_object + 5) != this->fields.prevRank;
  prevPoint = this->fields.prevPoint;
  this->fields.prevRank = *((_DWORD *)Master_object + 5);
  *isChange = v14 != prevPoint;
  this->fields.prevPoint = v14;
  FriendshipGaugeEx__ChangeGaugeData(this, v14, v17);
  return v14 - this->fields.nowFriendship;
}


void __fastcall FriendshipGaugeEx__ChangeGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendship,
        const MethodInfo *method)
{
  int **Master_object; // x0
  __int64 v6; // x1
  FriendshipMaster_o *v7; // x21
  int v8; // w25
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v10; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v12; // x26
  struct UISprite_array *icons; // x10
  int32_t v14; // w2
  int32_t v15; // w8
  int **v16; // x22
  struct UISprite_array *v17; // x10
  float v18; // s0
  struct UISprite_array *v19; // x8
  struct UISprite_array *v20; // x8
  signed __int64 v21; // x28
  int32_t exceedCount; // w27
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  FriendshipGaugeEx_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x22
  struct FriendshipGaugeEx_StaticFields *static_fields; // x8
  float POSITION_Y_DEFAULT; // s0

  if ( (byte_4BDF9FE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_FriendshipMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&FriendshipGaugeEx_TypeInfo);
    byte_4BDF9FE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int **)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || ((v7 = (FriendshipMaster_o *)Master_object,
         (Master_object = (int **)FriendshipMaster__GetEntity(
                                    (FriendshipMaster_o *)Master_object,
                                    this->fields.friendshipId,
                                    this->fields.maxFriendshipRank - 1,
                                    0LL)) == 0LL)
      ? (v8 = 0)
      : (v8 = *((_DWORD *)Master_object + 6)),
        (iconRoots = this->fields.iconRoots) == 0LL) )
  {
LABEL_48:
    sub_1C22094(Master_object, v6);
  }
  v10 = 4LL;
  while ( 1 )
  {
    max_length = iconRoots->max_length;
    v12 = v10 - 4;
    if ( v10 - 4 >= (int)max_length )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_48;
    if ( (__int64)v12 >= (int)icons->max_length )
      break;
    v14 = v10 + this->fields.maxFriendshipRank - 4;
    if ( v14 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v12 >= max_length )
        goto LABEL_50;
      Master_object = (int **)*((_QWORD *)&iconRoots->obj.klass + v10);
      if ( !Master_object )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
    else
    {
      Master_object = (int **)FriendshipMaster__GetEntity(v7, this->fields.friendshipId, v14, 0LL);
      if ( !Master_object )
        goto LABEL_48;
      v15 = *((_DWORD *)Master_object + 6);
      v16 = Master_object;
      if ( v15 <= friendship )
      {
        v19 = this->fields.icons;
        if ( !v19 )
          goto LABEL_48;
        if ( v12 >= v19->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v19->obj.klass + v10);
        if ( !Master_object )
          goto LABEL_48;
        v18 = 1.0;
      }
      else if ( friendship - v8 <= 0 )
      {
        v20 = this->fields.icons;
        if ( !v20 )
          goto LABEL_48;
        if ( v12 >= v20->max_length )
LABEL_50:
          sub_1C2209C(Master_object, v6);
        Master_object = (int **)*((_QWORD *)&v20->obj.klass + v10);
        if ( !Master_object )
          goto LABEL_48;
        v18 = 0.0;
      }
      else
      {
        v17 = this->fields.icons;
        if ( !v17 )
          goto LABEL_48;
        if ( v12 >= v17->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v17->obj.klass + v10);
        if ( !Master_object )
          goto LABEL_48;
        v18 = (float)(friendship - v8) / (float)(v15 - v8);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_object, v18, 0LL);
      Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      v8 = *((_DWORD *)v16 + 6);
      if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
        Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      }
      v21 = *Master_object[23];
      if ( (__int64)v12 < v21 )
      {
        exceedCount = this->fields.exceedCount;
        if ( !*((_DWORD *)Master_object + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          LODWORD(v21) = FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN;
        }
        v23 = this->fields.iconRoots;
        if ( !v23 )
          goto LABEL_48;
        if ( v12 >= v23->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v23->obj.klass + v10);
        if ( !Master_object )
          goto LABEL_48;
        gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
        v25 = FriendshipGaugeEx_TypeInfo;
        v26 = gameObject;
        if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
          v25 = FriendshipGaugeEx_TypeInfo;
        }
        static_fields = v25->static_fields;
        if ( exceedCount <= (int)v21 )
          POSITION_Y_DEFAULT = static_fields->POSITION_Y_DEFAULT;
        else
          POSITION_Y_DEFAULT = static_fields->POSITION_Y_OTHER;
        GameObjectExtensions__SetLocalPositionY(v26, POSITION_Y_DEFAULT, 0LL);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v10;
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
    sub_1C22094(0LL, v3);
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
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendshipRank = inMaxFriendShipRank;
  this->fields.nowFriendship = friendship;
  this->fields.nowFriendshipRank = friendshipRank;
  this->fields.exceedCount = exceedCount;
  this->fields.exceedMaxFriendshipRank = exceedCount + inMaxFriendShipRank;
  this->fields.prevRank = friendshipRank;
  this->fields.prevPoint = friendship;
  FriendshipGaugeEx__ChangeGaugeData(this, friendship, *(const MethodInfo **)&friendship);
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
    sub_1C22094(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGaugeEx__Start(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  FriendshipGaugeEx_c *v3; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v5; // x21

  if ( (byte_4BDF9FC & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_FriendshipGaugeEx__Start_b__19_0__);
    sub_1C21E38(&FriendshipGaugeEx_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&StringLiteral_5155/*"DISABLE_FRIENDSHIP_EXCEED"*/);
    byte_4BDF9FC = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_5155/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL) != 1 )
  {
    v3 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v3 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v3->static_fields->AtlasPath;
    v5 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v5, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(AtlasPath, v5, 1, 0LL);
  }
}


void __fastcall FriendshipGaugeEx___Start_b__19_0(
        FriendshipGaugeEx_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  FriendshipGaugeEx_c *v5; // x0
  UnityEngine_GameObject_o *Object_object__49880776; // x0
  __int64 v7; // x1

  if ( (byte_4BDFA00 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&FriendshipGaugeEx_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4BDFA00 = 1;
  }
  if ( asset )
  {
    v5 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v5 = FriendshipGaugeEx_TypeInfo;
    }
    Object_object__49880776 = (UnityEngine_GameObject_o *)AssetData__GetObject_object__49880776(
                                                            asset,
                                                            v5->static_fields->ObjectName,
                                                            (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    if ( !Object_object__49880776
      || (Object_object__49880776 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  Object_object__49880776,
                                                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_object__49880776, 0LL),
          (Object_object__49880776 = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0LL) )
    {
      sub_1C22094(Object_object__49880776, v7);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_object__49880776,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0LL);
  }
}