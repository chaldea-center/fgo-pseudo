void __fastcall ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F8109 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v1);
    byte_49F8109 = 1;
  }
  ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH = 10;
}


void __fastcall ServantStatusCharaGraphListViewItemDraw___ctor(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UICharaGraphTexture_o *v6; // x0

  if ( (byte_49F8107 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8107 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v6 = this->fields.charaGraph;
    if ( !v6 )
      sub_1B64324(0LL);
    UICharaGraphTexture__ExecuteSpriteFadein(v6, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UICharaGraphTexture_o *v6; // x0

  if ( (byte_49F8106 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8106 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v6 = this->fields.charaGraph;
    if ( !v6 )
      sub_1B64324(0LL);
    UICharaGraphTexture__ExecuteSpriteFadeout(v6, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UICharaGraphTexture_o *v4; // x0

  if ( (byte_49F8105 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8105 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v4 = this->fields.charaGraph;
    if ( !v4 )
      sub_1B64324(0LL);
    UICharaGraphTexture__ExecuteSpriteFadeoutForce(v4, 0LL);
  }
}


int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetCharaGraphBaseKind(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  _BOOL8 v4; // x0
  struct UICharaGraphTexture_o *v6; // x8

  if ( (byte_49F8102 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8102 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( v4 )
    return -1;
  v6 = this->fields.charaGraph;
  if ( !v6 )
    sub_1B64324(v4);
  return v6->fields.baseKind;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F8104 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49F8104 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return ServantLimitImageMaster__GetServantImageLimitSealAfter(
           (ServantLimitImageMaster_o *)Instance,
           svtId,
           limitCount,
           0LL);
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *charaGraph; // x21
  __int64 v7; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  UICharaGraphTexture_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v14; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49F8108 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_49F8108 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( (v7 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_20;
    mainInfo = item->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_20;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v10 = this->fields.charaGraph;
      v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
      {
        servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          return;
        v10 = this->fields.charaGraph;
        v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v11 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          goto LABEL_15;
LABEL_14:
        j_il2cpp_runtime_class_init_0(v14);
LABEL_15:
        *(_QWORD *)&v16.fields.currentCryptoKey = v12;
        *(_QWORD *)&v16.fields.fakeValue = v11;
        v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
        if ( v10 )
        {
          UICharaGraphTexture__SetExCharaGraph(v10, v7, item->fields.imageLimitCount, 0LL);
          return;
        }
LABEL_20:
        sub_1B64324(v7);
      }
      v10 = this->fields.charaGraph;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      goto LABEL_15;
    goto LABEL_14;
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__SetItem(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  UICharaGraphTexture_o *ImageLimitSealAfter; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserCommandCodeEntity_o *userCommandCodeEntity; // x22
  UnityEngine_GameObject_o *charaGraphBase; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v15; // x0
  UICharaGraphTexture_o *TexturePrefab_37595888; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x22
  UnityEngine_GameObject_o *v20; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v21; // x0
  UserCommandCodeCollectionEntity_o *v22; // x1
  CommandCodeEntity_o *commandCodeEntity; // x22
  UnityEngine_GameObject_o *v24; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v25; // x0
  CommandCodeEntity_o *v26; // x1
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v28; // x22
  __int64 v29; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v30; // x0
  const MethodInfo *v31; // x3
  struct ServantStatusListViewItem_o *v32; // x8
  int32_t v33; // w21
  UnityEngine_GameObject_o *v34; // x22
  UserServantEntity_o *v35; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v36; // x0
  struct UserServantEntity_o *v37; // x9
  __int64 v38; // x22
  __int64 v39; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v40; // x0
  const MethodInfo *v41; // x3
  struct ServantStatusListViewItem_o *v42; // x8
  int32_t v43; // w2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  __int64 v45; // x22
  __int64 v46; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v47; // x0
  const MethodInfo *v48; // x3
  struct ServantStatusListViewItem_o *v49; // x8
  int32_t v50; // w21
  UnityEngine_GameObject_o *v51; // x22
  UserServantCollectionEntity_o *v52; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v53; // x0
  struct UserServantCollectionEntity_o *v54; // x9
  __int64 v55; // x22
  __int64 v56; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v57; // x0
  const MethodInfo *v58; // x3
  struct ServantStatusListViewItem_o *v59; // x8
  int32_t v60; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  __int64 v62; // x22
  __int64 v63; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v64; // x0
  const MethodInfo *v65; // x3
  struct ServantStatusListViewItem_o *v66; // x8
  int32_t v67; // w21
  UnityEngine_GameObject_o *v68; // x22
  ServantLeaderInfo_o *v69; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v70; // x0
  struct ServantLeaderInfo_o *v71; // x9
  __int64 v72; // x22
  __int64 v73; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v74; // x0
  const MethodInfo *v75; // x3
  struct ServantStatusListViewItem_o *v76; // x8
  int32_t v77; // w2
  EquipTargetInfo_o *equipTargetInfo; // x22
  UnityEngine_GameObject_o *v79; // x24
  int32_t imageLimitCount; // w23
  UnityEngine_Object_o *baseButton; // x20
  EquipTargetInfo_o *v82; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_49F8103 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v8);
    byte_49F8103 = 1;
  }
  if ( !item || !mode )
    return;
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ImageLimitSealAfter = (UICharaGraphTexture_o *)UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  mainInfo = item->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_83;
  userCommandCodeEntity = mainInfo->fields.userCommandCodeEntity;
  if ( ((unsigned __int8)ImageLimitSealAfter & 1) != 0 )
  {
    if ( userCommandCodeEntity )
    {
      charaGraphBase = this->fields.charaGraphBase;
      v15 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
        v15 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_37595888 = CharaGraphManager__CreateTexturePrefab_37595888(
                                 charaGraphBase,
                                 userCommandCodeEntity,
                                 v15->static_fields->DEFAULT_DEPTH,
                                 0LL,
                                 0LL);
    }
    else
    {
      userCommandCodeCollectionEntity = mainInfo->fields.userCommandCodeCollectionEntity;
      if ( userCommandCodeCollectionEntity )
      {
        v20 = this->fields.charaGraphBase;
        v21 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v21 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_37595888 = CharaGraphManager__CreateTexturePrefab_37596352(
                                   v20,
                                   userCommandCodeCollectionEntity,
                                   v21->static_fields->DEFAULT_DEPTH,
                                   0LL,
                                   0LL);
      }
      else
      {
        commandCodeEntity = mainInfo->fields.commandCodeEntity;
        if ( commandCodeEntity )
        {
          v24 = this->fields.charaGraphBase;
          v25 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
            v25 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          }
          TexturePrefab_37595888 = CharaGraphManager__CreateTexturePrefab_37596816(
                                     v24,
                                     commandCodeEntity,
                                     v25->static_fields->DEFAULT_DEPTH,
                                     0LL,
                                     0LL);
        }
        else
        {
          userSvtEntity = mainInfo->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
            v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v83.fields.currentCryptoKey = v29;
            *(_QWORD *)&v83.fields.fakeValue = v28;
            v30 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                 v83,
                                                                 0LL);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v30,
                                                             (int32_t)v30,
                                                             item->fields.imageLimitCount,
                                                             v31);
            v32 = item->fields.mainInfo;
            if ( !v32 )
              goto LABEL_83;
            v33 = (int)ImageLimitSealAfter;
            v34 = this->fields.charaGraphBase;
            v35 = v32->fields.userSvtEntity;
            v36 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v36 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            }
            TexturePrefab_37595888 = CharaGraphManager__CreateTexturePrefab_37591604(
                                       v34,
                                       v35,
                                       v33,
                                       v36->static_fields->DEFAULT_DEPTH,
                                       0LL,
                                       0,
                                       0LL);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v46 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v45 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v85.fields.currentCryptoKey = v46;
              *(_QWORD *)&v85.fields.fakeValue = v45;
              v47 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                   v85,
                                                                   0LL);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v47,
                                                               (int32_t)v47,
                                                               item->fields.imageLimitCount,
                                                               v48);
              v49 = item->fields.mainInfo;
              if ( !v49 )
                goto LABEL_83;
              v50 = (int)ImageLimitSealAfter;
              v51 = this->fields.charaGraphBase;
              v52 = v49->fields.userSvtCollectionEntity;
              v53 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v53 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              }
              TexturePrefab_37595888 = CharaGraphManager__CreateTexturePrefab_37592800(
                                         v51,
                                         v52,
                                         v50,
                                         v53->static_fields->DEFAULT_DEPTH,
                                         0LL,
                                         0LL);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v63 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v62 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v87.fields.currentCryptoKey = v63;
                *(_QWORD *)&v87.fields.fakeValue = v62;
                v64 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                     v87,
                                                                     0LL);
                ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                 v64,
                                                                 (int32_t)v64,
                                                                 item->fields.imageLimitCount,
                                                                 v65);
                v66 = item->fields.mainInfo;
                if ( !v66 )
                  goto LABEL_83;
                v67 = (int)ImageLimitSealAfter;
                v68 = this->fields.charaGraphBase;
                v69 = v66->fields.servantLeaderInfo;
                v70 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v70 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                }
                TexturePrefab_37595888 = CharaGraphManager__CreateTexturePrefab_37593972(
                                           v68,
                                           v69,
                                           v67,
                                           v70->static_fields->DEFAULT_DEPTH,
                                           0LL,
                                           0LL);
              }
              else
              {
                equipTargetInfo = mainInfo->fields.equipTargetInfo;
                if ( !equipTargetInfo )
                  goto LABEL_74;
                v79 = this->fields.charaGraphBase;
                imageLimitCount = item->fields.imageLimitCount;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  mainInfo = item->fields.mainInfo;
                  if ( !mainInfo )
                    goto LABEL_83;
                }
                TexturePrefab_37595888 = CharaGraphManager__CreateTexturePrefab_37595160(
                                           v79,
                                           equipTargetInfo,
                                           imageLimitCount,
                                           ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                           mainInfo->fields.isNpcFollowerServantEquip,
                                           0LL,
                                           0LL);
              }
            }
          }
        }
      }
    }
    *p_charaGraph = TexturePrefab_37595888;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph,
      (int32_t)TexturePrefab_37595888,
      v17,
      v18);
  }
  else if ( userCommandCodeEntity )
  {
    ImageLimitSealAfter = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_83;
    UICharaGraphTexture__SetCommand(ImageLimitSealAfter, mainInfo->fields.userCommandCodeEntity, 0LL, 0LL);
  }
  else
  {
    v22 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v22 )
    {
      ImageLimitSealAfter = *p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_83;
      UICharaGraphTexture__SetCommand_40504772(ImageLimitSealAfter, v22, 0LL, 0LL);
    }
    else
    {
      v26 = mainInfo->fields.commandCodeEntity;
      if ( v26 )
      {
        ImageLimitSealAfter = *p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_83;
        UICharaGraphTexture__SetCommand_40504920(ImageLimitSealAfter, v26, 0LL, 0LL);
      }
      else
      {
        v37 = mainInfo->fields.userSvtEntity;
        if ( v37 )
        {
          v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
          v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v84.fields.currentCryptoKey = v39;
          *(_QWORD *)&v84.fields.fakeValue = v38;
          v40 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                               v84,
                                                               0LL);
          ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                           v40,
                                                           (int32_t)v40,
                                                           item->fields.imageLimitCount,
                                                           v41);
          v42 = item->fields.mainInfo;
          if ( !v42 )
            goto LABEL_83;
          v43 = (int)ImageLimitSealAfter;
          ImageLimitSealAfter = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_83;
          UICharaGraphTexture__SetCharacter_40502984(ImageLimitSealAfter, v42->fields.userSvtEntity, v43, 0LL, 0, 0LL);
        }
        else
        {
          v54 = mainInfo->fields.userSvtCollectionEntity;
          if ( v54 )
          {
            v56 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
            v55 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v86.fields.currentCryptoKey = v56;
            *(_QWORD *)&v86.fields.fakeValue = v55;
            v57 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                 v86,
                                                                 0LL);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v57,
                                                             (int32_t)v57,
                                                             item->fields.imageLimitCount,
                                                             v58);
            v59 = item->fields.mainInfo;
            if ( !v59 )
              goto LABEL_83;
            v60 = (int)ImageLimitSealAfter;
            ImageLimitSealAfter = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_83;
            UICharaGraphTexture__SetCharacter_40503496(
              ImageLimitSealAfter,
              v59->fields.userSvtCollectionEntity,
              v60,
              0LL,
              0LL);
          }
          else
          {
            v71 = mainInfo->fields.servantLeaderInfo;
            if ( v71 )
            {
              v73 = *(_QWORD *)&v71->fields.svtId.fields.currentCryptoKey;
              v72 = *(_QWORD *)&v71->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v88.fields.currentCryptoKey = v73;
              *(_QWORD *)&v88.fields.fakeValue = v72;
              v74 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                   v88,
                                                                   0LL);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v74,
                                                               (int32_t)v74,
                                                               item->fields.imageLimitCount,
                                                               v75);
              v76 = item->fields.mainInfo;
              if ( !v76 )
                goto LABEL_83;
              v77 = (int)ImageLimitSealAfter;
              ImageLimitSealAfter = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_83;
              UICharaGraphTexture__SetCharacter_40503964(
                ImageLimitSealAfter,
                v76->fields.servantLeaderInfo,
                v77,
                0LL,
                0LL);
            }
            else
            {
              v82 = mainInfo->fields.equipTargetInfo;
              if ( v82 )
              {
                ImageLimitSealAfter = *p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_83;
                UICharaGraphTexture__SetCharacter_40504384(
                  ImageLimitSealAfter,
                  v82,
                  item->fields.imageLimitCount,
                  mainInfo->fields.isNpcFollowerServantEquip,
                  0LL,
                  0LL);
              }
            }
          }
        }
      }
    }
  }
LABEL_74:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    ImageLimitSealAfter = (UICharaGraphTexture_o *)this->fields.baseButton;
    if ( ImageLimitSealAfter )
    {
      ((void (__fastcall *)(UICharaGraphTexture_o *, _QWORD, __int64, Il2CppMethodPointer))ImageLimitSealAfter->klass->vtable._14_OnEnable.method)(
        ImageLimitSealAfter,
        0LL,
        1LL,
        ImageLimitSealAfter->klass->vtable._15_OnInit.methodPtr);
      return;
    }
LABEL_83:
    sub_1B64324(ImageLimitSealAfter);
  }
}