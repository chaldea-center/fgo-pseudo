void ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4E001EE & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_4E001EE = 1;
  }
  ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH = 10;
}


void ServantStatusCharaGraphListViewItemDraw___ctor(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UICharaGraphTexture_o *v7; // x0

  if ( (byte_4E001EC & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E001EC = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1CE6958(0, v6);
    UICharaGraphTexture__ExecuteSpriteFadein(v7, duration, 0);
  }
}


void ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UICharaGraphTexture_o *v7; // x0

  if ( (byte_4E001EB & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E001EB = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1CE6958(0, v6);
    UICharaGraphTexture__ExecuteSpriteFadeout(v7, duration, 0);
  }
}


void ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UICharaGraphTexture_o *v5; // x0

  if ( (byte_4E001EA & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E001EA = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v5 = this->fields.charaGraph;
    if ( !v5 )
      sub_1CE6958(0, v4);
    UICharaGraphTexture__ExecuteSpriteFadeoutForce(v5, 0);
  }
}


void ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x21
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v7; // x1
  ServantEntity_o *ServantEntity; // x0
  UICharaGraphTexture_o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w0
  int32_t limitCountStage; // w8
  int32_t v14; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4E001ED & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E001ED = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)UnityEngine_Object__op_Equality(charaGraph, 0, 0);
  if ( ((unsigned __int8)mainInfo & 1) == 0 )
  {
    if ( !item )
      goto LABEL_14;
    mainInfo = item->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_14;
    ServantEntity = ServantStatusListViewItem__GetServantEntity(mainInfo, 0, 0);
    if ( ServantEntity )
    {
      v9 = this->fields.charaGraph;
      v11 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v15.fields.currentCryptoKey = v11;
      *(_QWORD *)&v15.fields.fakeValue = v10;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v15, 0);
      limitCountStage = item->fields.limitCountStage;
      v14 = v12;
      mainInfo = (ServantStatusListViewItem_o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                                  limitCountStage,
                                                  0);
      if ( v9 )
      {
        UICharaGraphTexture__SetExCharaGraph(v9, v14, (int32_t)mainInfo, 0);
        return;
      }
LABEL_14:
      sub_1CE6958(mainInfo, v7);
    }
  }
}


void ServantStatusCharaGraphListViewItemDraw__SetItem(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *v5; // x22
  ServantStatusCharaGraphListViewItemDraw_o *v6; // x19
  ServantStatusListViewItem_o *mainInfo; // x21
  ServantEntity_o *ServantEntity; // x0
  ServantStatusCharaGraphListViewItemDraw_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x24
  ServantEntity_o *v11; // x23
  Il2CppObject *Instance; // x0
  UnityEngine_GameObject_o *charaGraphBase; // x24
  __int64 v14; // x26
  __int64 v15; // x27
  CharaGraphManager_o *v16; // x25
  UICharaGraphTexture_o *TextureLocal; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UICharaGraphTexture_o *v24; // x24
  UnityEngine_Object_o *gameObject; // x24
  Il2CppObject *v26; // x25
  const MethodInfo *v27; // x1
  Il2CppObject *v28; // x0
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x22
  struct ServantStatusListViewItem_o *v31; // x8
  UserCommandCodeEntity_o *userCommandCodeEntity; // x21
  UnityEngine_GameObject_o *v33; // x22
  ServantStatusCharaGraphListViewItemDraw_c *v34; // x0
  UICharaGraphTexture_o *TexturePrefab_41806708; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  ServantStatusCharaGraphListViewItemDraw_o *v42; // x20
  __int64 v43; // x23
  __int64 v44; // x24
  int32_t v45; // w23
  int32_t v46; // w24
  int32_t ExceedCount; // w25
  int32_t Level; // w26
  const MethodInfo *v49; // x1
  int32_t v50; // w0
  ServantOverwriteStatus_o *overwriteStatus; // x22
  int32_t v52; // w27
  int32_t AdjustAtk; // w28
  ServantStatusCharaGraphListViewItemDraw_o *v54; // x20
  __int64 v55; // x23
  __int64 v56; // x24
  int32_t v57; // w23
  int32_t LimitCount; // w24
  int32_t Atk; // w25
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x21
  UnityEngine_GameObject_o *v61; // x22
  ServantStatusCharaGraphListViewItemDraw_c *v62; // x0
  CommandCodeEntity_o *commandCodeEntity; // x21
  UnityEngine_GameObject_o *v64; // x22
  ServantStatusCharaGraphListViewItemDraw_c *v65; // x0
  UnityEngine_Object_o *baseButton; // x20
  int32_t LimitCountStageSealAfterIndexZero; // [xsp+2Ch] [xbp-74h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  v5 = item;
  v6 = this;
  if ( (byte_4E001E9 & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    this = (ServantStatusCharaGraphListViewItemDraw_o *)sub_1CE6700(&StringLiteral_14876/*"UICharaGraphTexture({0}-I{1})"*/);
    byte_4E001E9 = 1;
  }
  if ( !v5 || !mode )
    return;
  mainInfo = v5->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_61;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(v5->fields.mainInfo, 0, 0);
  p_charaGraph = (ServantStatusCharaGraphListViewItemDraw_o **)&v6->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)v6->fields.charaGraph;
  v11 = ServantEntity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusCharaGraphListViewItemDraw_o *)UnityEngine_Object__op_Equality(charaGraph, 0, 0);
  if ( v11 )
  {
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
      charaGraphBase = v6->fields.charaGraphBase;
      v15 = *(_QWORD *)&v11->fields.id.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v11->fields.id.fields.fakeValue;
      v16 = (CharaGraphManager_o *)Instance;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v69.fields.currentCryptoKey = v15;
      *(_QWORD *)&v69.fields.fakeValue = v14;
      this = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                            v69,
                                                            0);
      if ( !v16 )
        goto LABEL_61;
      TextureLocal = CharaGraphManager__CreateTextureLocal(v16, charaGraphBase, (int32_t)this, 0);
      *p_charaGraph = (ServantStatusCharaGraphListViewItemDraw_o *)TextureLocal;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&v6->fields.charaGraph,
        (int32_t)TextureLocal,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = (UICharaGraphTexture_o *)*p_charaGraph;
      this = (ServantStatusCharaGraphListViewItemDraw_o *)ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
      if ( !v24 )
        goto LABEL_61;
      UICharaGraphTexture__SetDepth(
        v24,
        ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
        0);
    }
    this = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_61;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    id = v11->fields.id;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &id);
    LimitCountStageSealAfterIndexZero = ServantStatusCharaGraphListViewItem__get_LimitCountStageSealAfterIndexZero(
                                          v5,
                                          v27);
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LimitCountStageSealAfterIndexZero);
    this = (ServantStatusCharaGraphListViewItemDraw_o *)System_String__Format_65164136(
                                                          (System_String_o *)StringLiteral_14876/*"UICharaGraphTexture({0}-I{1})"*/,
                                                          v26,
                                                          v28,
                                                          0);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
    if ( ServantEntity__get_IsServantEquip(v11, 0) )
    {
      equipTargetInfo = mainInfo->fields.equipTargetInfo;
      if ( equipTargetInfo )
        ImagePartsGroupIdxs_k__BackingField = equipTargetInfo->fields._ImagePartsGroupIdxs_k__BackingField;
      else
        ImagePartsGroupIdxs_k__BackingField = 0;
      v54 = *p_charaGraph;
      v56 = *(_QWORD *)&v11->fields.id.fields.currentCryptoKey;
      v55 = *(_QWORD *)&v11->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v71.fields.currentCryptoKey = v56;
      *(_QWORD *)&v71.fields.fakeValue = v55;
      v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v71, 0);
      LimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0);
      Atk = ServantStatusListViewItem__get_Atk(mainInfo, 0);
      this = (ServantStatusCharaGraphListViewItemDraw_o *)ServantStatusListViewItem__get_Hp(mainInfo, 0);
      if ( !v54 )
        goto LABEL_61;
      UICharaGraphTexture__SetEquip(
        (UICharaGraphTexture_o *)v54,
        v57,
        LimitCount,
        Atk,
        (int32_t)this,
        ImagePartsGroupIdxs_k__BackingField,
        mainInfo->fields.isNpcFollowerServantEquip,
        0);
    }
    else
    {
      v42 = *p_charaGraph;
      v44 = *(_QWORD *)&v11->fields.id.fields.currentCryptoKey;
      v43 = *(_QWORD *)&v11->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v70.fields.currentCryptoKey = v44;
      *(_QWORD *)&v70.fields.fakeValue = v43;
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v70, 0);
      v46 = ServantStatusListViewItem__get_LimitCount(mainInfo, 0);
      ExceedCount = ServantStatusListViewItem__get_ExceedCount(mainInfo, 0);
      Level = ServantStatusListViewItem__get_Level(mainInfo, 0);
      v50 = ServantStatusCharaGraphListViewItem__get_LimitCountStageSealAfterIndexZero(v5, v49);
      overwriteStatus = mainInfo->fields.overwriteStatus;
      v52 = v50;
      AdjustAtk = ServantStatusListViewItem__get_AdjustAtk(mainInfo, 0);
      this = (ServantStatusCharaGraphListViewItemDraw_o *)ServantStatusListViewItem__get_AdjustHp(mainInfo, 0);
      if ( !v42 )
        goto LABEL_61;
      UICharaGraphTexture__SetCharacter_45043580(
        (UICharaGraphTexture_o *)v42,
        v45,
        v46,
        ExceedCount,
        Level,
        v52,
        overwriteStatus,
        AdjustAtk,
        (int32_t)this,
        mainInfo->fields._IsGrandServant_k__BackingField,
        mainInfo->fields._GrandInfo_k__BackingField,
        0);
    }
    goto LABEL_52;
  }
  v31 = v5->fields.mainInfo;
  if ( !v31 )
    goto LABEL_61;
  userCommandCodeEntity = v31->fields.userCommandCodeEntity;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( userCommandCodeEntity )
    {
      v33 = v6->fields.charaGraphBase;
      v34 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
        v34 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_41806708 = CharaGraphManager__CreateTexturePrefab_41806708(
                                 v33,
                                 userCommandCodeEntity,
                                 v34->static_fields->DEFAULT_DEPTH,
                                 0,
                                 0);
    }
    else
    {
      userCommandCodeCollectionEntity = v31->fields.userCommandCodeCollectionEntity;
      if ( userCommandCodeCollectionEntity )
      {
        v61 = v6->fields.charaGraphBase;
        v62 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v62 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_41806708 = CharaGraphManager__CreateTexturePrefab_41807172(
                                   v61,
                                   userCommandCodeCollectionEntity,
                                   v62->static_fields->DEFAULT_DEPTH,
                                   0,
                                   0);
      }
      else
      {
        commandCodeEntity = v31->fields.commandCodeEntity;
        if ( !commandCodeEntity )
          goto LABEL_52;
        v64 = v6->fields.charaGraphBase;
        v65 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v65 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_41806708 = CharaGraphManager__CreateTexturePrefab_41807636(
                                   v64,
                                   commandCodeEntity,
                                   v65->static_fields->DEFAULT_DEPTH,
                                   0,
                                   0);
      }
    }
    *p_charaGraph = (ServantStatusCharaGraphListViewItemDraw_o *)TexturePrefab_41806708;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&v6->fields.charaGraph,
      (int32_t)TexturePrefab_41806708,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  else if ( userCommandCodeEntity )
  {
    this = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_61;
    UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)this, v31->fields.userCommandCodeEntity, 0, 0);
  }
  else
  {
    item = (ServantStatusCharaGraphListViewItem_o *)v31->fields.userCommandCodeCollectionEntity;
    if ( item )
    {
      this = *p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_61;
      UICharaGraphTexture__SetCommand_45044172(
        (UICharaGraphTexture_o *)this,
        (UserCommandCodeCollectionEntity_o *)item,
        0,
        0);
    }
    else
    {
      item = (ServantStatusCharaGraphListViewItem_o *)v31->fields.commandCodeEntity;
      if ( item )
      {
        this = *p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_61;
        UICharaGraphTexture__SetCommand_45044320((UICharaGraphTexture_o *)this, (CommandCodeEntity_o *)item, 0, 0);
      }
    }
  }
LABEL_52:
  baseButton = (UnityEngine_Object_o *)v6->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    this = (ServantStatusCharaGraphListViewItemDraw_o *)v6->fields.baseButton;
    if ( this )
    {
      ((void (__fastcall *)(ServantStatusCharaGraphListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
      return;
    }
LABEL_61:
    sub_1CE6958(this, item);
  }
}