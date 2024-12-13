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
  __int64 v9; // x1
  __int64 v10; // x1
  struct FriendshipGaugeEx_StaticFields *static_fields; // x0
  int64_t v12; // x1
  int64_t v13; // x1
  struct FriendshipGaugeEx_StaticFields *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  struct FriendshipGaugeEx_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B3A58F & 1) == 0 )
  {
    sub_1BD3458(&FriendshipGaugeEx_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_5448/*"DownloadBondAtlas"*/, v8);
    sub_1BD3458(&StringLiteral_20516/*"img_bondsgage_11"*/, v9);
    sub_1BD3458(&StringLiteral_3340/*"Bond/DownloadBond"*/, v10);
    byte_4B3A58F = 1;
  }
  static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
  static_fields->MAX_COLUMN = 5;
  *(_QWORD *)&static_fields->POSITION_Y_DEFAULT = 0x412000003F19999ALL;
  v12 = StringLiteral_3340/*"Bond/DownloadBond"*/;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_3340/*"Bond/DownloadBond"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->AtlasPath, v12, v2, v3, v4, v5, v6, v7);
  v13 = StringLiteral_5448/*"DownloadBondAtlas"*/;
  v14 = FriendshipGaugeEx_TypeInfo->static_fields;
  v14->ObjectName = (struct System_String_o *)StringLiteral_5448/*"DownloadBondAtlas"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v14->ObjectName, v13, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_20516/*"img_bondsgage_11"*/;
  v22 = FriendshipGaugeEx_TypeInfo->static_fields;
  v22->SpriteName = (struct System_String_o *)StringLiteral_20516/*"img_bondsgage_11"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v22->SpriteName, v21, v23, v24, v25, v26, v27, v28);
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
  __int64 v13; // x1
  float v14; // s0
  int32_t v15; // w24
  void *Master_object; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  int32_t prevPoint; // w9

  if ( (byte_4B3A58D & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_FriendshipMaster___, isMax);
    sub_1BD3458(&DataManager_TypeInfo, v13);
    byte_4B3A58D = 1;
  }
  v14 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0LL);
  v15 = BattleUtility__FloorToInt(v14, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || (Master_object = FriendshipMaster__GetFriendShipRankEntity(
                          (FriendshipMaster_o *)Master_object,
                          this->fields.friendshipId,
                          v15,
                          this->fields.nowFriendshipRank,
                          0LL)) == 0LL )
  {
    sub_1BD36B4(Master_object, v17);
  }
  *remainingFriendship = *((_DWORD *)Master_object + 6) - v15;
  *isMax = *((_DWORD *)Master_object + 5) == this->fields.exceedMaxFriendshipRank;
  *isLevelUp = *((_DWORD *)Master_object + 5) != this->fields.prevRank;
  prevPoint = this->fields.prevPoint;
  this->fields.prevRank = *((_DWORD *)Master_object + 5);
  *isChange = v15 != prevPoint;
  this->fields.prevPoint = v15;
  FriendshipGaugeEx__ChangeGaugeData(this, v15, v18);
  return v15 - this->fields.nowFriendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGaugeEx__ChangeGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendship,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int **Master_object; // x0
  __int64 v8; // x1
  FriendshipMaster_o *v9; // x21
  int v10; // w25
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v12; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v14; // x26
  struct UISprite_array *icons; // x10
  int32_t v16; // w2
  int32_t v17; // w8
  int **v18; // x22
  struct UISprite_array *v19; // x10
  float v20; // s0
  struct UISprite_array *v21; // x8
  struct UISprite_array *v22; // x8
  signed __int64 v23; // x28
  int32_t exceedCount; // w27
  struct UnityEngine_GameObject_array *v25; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  FriendshipGaugeEx_c *v27; // x8
  UnityEngine_GameObject_o *v28; // x22
  struct FriendshipGaugeEx_StaticFields *static_fields; // x8
  float POSITION_Y_DEFAULT; // s0

  if ( (byte_4B3A58E & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_FriendshipMaster___, *(_QWORD *)&friendship);
    sub_1BD3458(&DataManager_TypeInfo, v5);
    sub_1BD3458(&FriendshipGaugeEx_TypeInfo, v6);
    byte_4B3A58E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int **)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || ((v9 = (FriendshipMaster_o *)Master_object,
         (Master_object = (int **)FriendshipMaster__GetEntity(
                                    (FriendshipMaster_o *)Master_object,
                                    this->fields.friendshipId,
                                    this->fields.maxFriendshipRank - 1,
                                    0LL)) == 0LL)
      ? (v10 = 0)
      : (v10 = *((_DWORD *)Master_object + 6)),
        (iconRoots = this->fields.iconRoots) == 0LL) )
  {
LABEL_48:
    sub_1BD36B4(Master_object, v8);
  }
  v12 = 4LL;
  while ( 1 )
  {
    max_length = iconRoots->max_length;
    v14 = v12 - 4;
    if ( v12 - 4 >= (int)max_length )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_48;
    if ( (__int64)v14 >= (int)icons->max_length )
      break;
    v16 = v12 + this->fields.maxFriendshipRank - 4;
    if ( v16 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v14 >= max_length )
        goto LABEL_50;
      Master_object = (int **)*((_QWORD *)&iconRoots->obj.klass + v12);
      if ( !Master_object )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
    else
    {
      Master_object = (int **)FriendshipMaster__GetEntity(v9, this->fields.friendshipId, v16, 0LL);
      if ( !Master_object )
        goto LABEL_48;
      v17 = *((_DWORD *)Master_object + 6);
      v18 = Master_object;
      if ( v17 <= friendship )
      {
        v21 = this->fields.icons;
        if ( !v21 )
          goto LABEL_48;
        if ( v14 >= v21->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v21->obj.klass + v12);
        if ( !Master_object )
          goto LABEL_48;
        v20 = 1.0;
      }
      else if ( friendship - v10 <= 0 )
      {
        v22 = this->fields.icons;
        if ( !v22 )
          goto LABEL_48;
        if ( v14 >= v22->max_length )
LABEL_50:
          sub_1BD36BC(Master_object, v8);
        Master_object = (int **)*((_QWORD *)&v22->obj.klass + v12);
        if ( !Master_object )
          goto LABEL_48;
        v20 = 0.0;
      }
      else
      {
        v19 = this->fields.icons;
        if ( !v19 )
          goto LABEL_48;
        if ( v14 >= v19->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v19->obj.klass + v12);
        if ( !Master_object )
          goto LABEL_48;
        v20 = (float)(friendship - v10) / (float)(v17 - v10);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_object, v20, 0LL);
      Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      v10 = *((_DWORD *)v18 + 6);
      if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
        Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      }
      v23 = *Master_object[23];
      if ( (__int64)v14 < v23 )
      {
        exceedCount = this->fields.exceedCount;
        if ( !*((_DWORD *)Master_object + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          LODWORD(v23) = FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN;
        }
        v25 = this->fields.iconRoots;
        if ( !v25 )
          goto LABEL_48;
        if ( v14 >= v25->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v25->obj.klass + v12);
        if ( !Master_object )
          goto LABEL_48;
        gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
        v27 = FriendshipGaugeEx_TypeInfo;
        v28 = gameObject;
        if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
          v27 = FriendshipGaugeEx_TypeInfo;
        }
        static_fields = v27->static_fields;
        if ( exceedCount <= (int)v23 )
          POSITION_Y_DEFAULT = static_fields->POSITION_Y_DEFAULT;
        else
          POSITION_Y_DEFAULT = static_fields->POSITION_Y_OTHER;
        GameObjectExtensions__SetLocalPositionY(v28, POSITION_Y_DEFAULT, 0LL);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v12;
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
    sub_1BD36B4(0LL, v3);
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
    sub_1BD36B4(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGaugeEx__Start(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FriendshipGaugeEx_c *v7; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_4B3A58C & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    sub_1BD3458(&Method_FriendshipGaugeEx__Start_b__19_0__, v3);
    sub_1BD3458(&FriendshipGaugeEx_TypeInfo, v4);
    sub_1BD3458(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_5128/*"DISABLE_FRIENDSHIP_EXCEED"*/, v6);
    byte_4B3A58C = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_5128/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL) != 1 )
  {
    v7 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v7 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v7->static_fields->AtlasPath;
    v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1BD36A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(AtlasPath, v9, 1, 0LL);
  }
}


void __fastcall FriendshipGaugeEx___Start_b__19_0(
        FriendshipGaugeEx_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FriendshipGaugeEx_c *v7; // x0
  UnityEngine_GameObject_o *Object_object__49362760; // x0
  __int64 v9; // x1

  if ( (byte_4B3A590 & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, asset);
    sub_1BD3458(&FriendshipGaugeEx_TypeInfo, v5);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    byte_4B3A590 = 1;
  }
  if ( asset )
  {
    v7 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v7 = FriendshipGaugeEx_TypeInfo;
    }
    Object_object__49362760 = (UnityEngine_GameObject_o *)AssetData__GetObject_object__49362760(
                                                            asset,
                                                            v7->static_fields->ObjectName,
                                                            (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
    if ( !Object_object__49362760
      || (Object_object__49362760 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  Object_object__49362760,
                                                                  (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_object__49362760, 0LL),
          (Object_object__49362760 = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0LL) )
    {
      sub_1BD36B4(Object_object__49362760, v9);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_object__49362760,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0LL);
  }
}