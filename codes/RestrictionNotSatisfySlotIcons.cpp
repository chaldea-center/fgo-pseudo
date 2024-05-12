void __fastcall RestrictionNotSatisfySlotIcons___ctor(RestrictionNotSatisfySlotIcons_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RestrictionNotSatisfySlotIcons__Awake(RestrictionNotSatisfySlotIcons_o *this, const MethodInfo *method)
{
  ;
}


UIWidget_o *__fastcall RestrictionNotSatisfySlotIcons__GetUIWidget(
        RestrictionNotSatisfySlotIcons_o *this,
        const MethodInfo *method)
{
  return this->fields.iconsWidget;
}


void __fastcall RestrictionNotSatisfySlotIcons__SetClassIcons(
        RestrictionNotSatisfySlotIcons_o *this,
        System_Int32_array *classImageIds,
        const MethodInfo *method)
{
  RestrictionNotSatisfySlotIcons_o *v4; // x19
  struct UISprite_array *classIcons; // x8
  signed int max_length; // w24
  __int64 v7; // x23
  int v8; // w9
  struct UISprite_array *v9; // x8
  UISprite_o *v10; // x21
  int32_t v11; // w22
  struct UISprite_array *v12; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct ServantFaceIconComponent_array *servantFaceIcons; // x20
  int v15; // w8
  __int64 v16; // x21
  struct UISprite_array *supportIcons; // x19
  int v18; // w8
  __int64 v19; // x20
  __int64 v20; // x0

  v4 = this;
  if ( (byte_438DBF1 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlotIcons_o *)sub_B775C4(&AtlasManager_TypeInfo);
    byte_438DBF1 = 1;
  }
  classIcons = v4->fields.classIcons;
  if ( classIcons )
  {
    if ( !classImageIds )
LABEL_43:
      sub_B7769C(this, classImageIds);
    max_length = classImageIds->max_length;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = classIcons->max_length;
      if ( (int)v7 >= v8 )
        break;
      if ( (unsigned int)v7 >= v8 )
        goto LABEL_44;
      this = (RestrictionNotSatisfySlotIcons_o *)classIcons->m_Items[v7];
      if ( !this )
        goto LABEL_43;
      this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_43;
      if ( (int)v7 >= max_length )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v9 = v4->fields.classIcons;
        if ( !v9 )
          goto LABEL_43;
        if ( (unsigned int)v7 >= v9->max_length || (unsigned int)v7 >= classImageIds->max_length )
          goto LABEL_44;
        v10 = v9->m_Items[v7];
        v11 = classImageIds->m_Items[v7 + 1];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (RestrictionNotSatisfySlotIcons_o *)AtlasManager__SetClassIcon(v10, v11, 3, 0LL);
      }
      if ( max_length == 1 || max_length == 3 && (_DWORD)v7 == 2 )
      {
        v12 = v4->fields.classIcons;
        if ( !v12 )
          goto LABEL_43;
        if ( (unsigned int)v7 >= v12->max_length )
          goto LABEL_44;
        this = (RestrictionNotSatisfySlotIcons_o *)v12->m_Items[v7];
        if ( !this )
          goto LABEL_43;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0LL);
      }
      classIcons = v4->fields.classIcons;
      ++v7;
      if ( !classIcons )
        goto LABEL_43;
    }
  }
  servantFaceIcons = v4->fields.servantFaceIcons;
  if ( servantFaceIcons )
  {
    v15 = servantFaceIcons->max_length;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      while ( (unsigned int)v16 < v15 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v16];
        if ( !this )
          goto LABEL_43;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v15 = servantFaceIcons->max_length;
        if ( (int)++v16 >= v15 )
          goto LABEL_35;
      }
LABEL_44:
      v20 = sub_B776C8(this);
      sub_B77668(v20, 0LL);
    }
  }
LABEL_35:
  supportIcons = v4->fields.supportIcons;
  if ( supportIcons )
  {
    v18 = supportIcons->max_length;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      while ( (unsigned int)v19 < v18 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)supportIcons->m_Items[v19];
        if ( !this )
          goto LABEL_43;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v18 = supportIcons->max_length;
        if ( (int)++v19 >= v18 )
          return;
      }
      goto LABEL_44;
    }
  }
}


void __fastcall RestrictionNotSatisfySlotIcons__SetServantIcons(
        RestrictionNotSatisfySlotIcons_o *this,
        System_Int32_array *servantIds,
        System_Int32_array *limitCounts,
        System_Int32_array *imageServantIds,
        System_Boolean_array *rarityHideFlags,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  RestrictionNotSatisfySlotIcons_o *v11; // x19
  struct ServantFaceIconComponent_array *servantFaceIcons; // x8
  __int64 v13; // x26
  unsigned __int64 v14; // x25
  int32_t *v15; // x27
  unsigned __int64 max_length; // x9
  int32_t v17; // w20
  struct UISprite_array *v18; // x8
  UserServantEntity_o *HeroineData; // x0
  struct UISprite_array *supportIcons; // x8
  struct UISprite_array *v21; // x8
  int32_t v22; // w3
  struct ServantFaceIconComponent_array *v23; // x8
  struct ServantFaceIconComponent_array *v24; // x8
  struct ServantFaceIconComponent_array *v25; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v27; // x8
  UnityEngine_GameObject_o *v28; // x0
  struct UISprite_array *classIcons; // x20
  int v30; // w8
  __int64 v31; // x21
  __int64 v32; // x0
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  v11 = this;
  if ( (byte_438DBF0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    this = (RestrictionNotSatisfySlotIcons_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DBF0 = 1;
  }
  entity = 0LL;
  servantFaceIcons = v11->fields.servantFaceIcons;
  if ( servantFaceIcons )
  {
    if ( !servantIds )
      goto LABEL_83;
    v13 = *(_QWORD *)&servantIds->max_length;
    v14 = 0LL;
    v15 = &servantIds->m_Items[1];
    while ( 1 )
    {
      max_length = servantFaceIcons->max_length;
      if ( (__int64)v14 >= (int)max_length )
        break;
      if ( (__int64)v14 >= (int)v13 )
      {
        if ( v14 >= max_length )
          goto LABEL_84;
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v14];
        if ( !this )
          goto LABEL_83;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        supportIcons = v11->fields.supportIcons;
        if ( !supportIcons )
          goto LABEL_83;
        if ( v14 >= supportIcons->max_length )
          goto LABEL_84;
        this = (RestrictionNotSatisfySlotIcons_o *)supportIcons->m_Items[v14];
        if ( !this )
          goto LABEL_83;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      else
      {
        if ( v14 >= servantIds->max_length || v14 >= max_length )
          goto LABEL_84;
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v14];
        if ( !this )
          goto LABEL_83;
        v17 = v15[v14];
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_83;
        if ( v17 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v18 = v11->fields.supportIcons;
          if ( !v18 )
            goto LABEL_83;
          if ( v14 >= v18->max_length )
            goto LABEL_84;
          this = (RestrictionNotSatisfySlotIcons_o *)v18->m_Items[v14];
          if ( !this )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !this )
            goto LABEL_83;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          if ( questRestrictionInfo )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( v14 >= servantIds->max_length )
              goto LABEL_84;
            if ( !this )
              goto LABEL_83;
            this = (RestrictionNotSatisfySlotIcons_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                         &entity,
                                                         v15[v14],
                                                         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_43;
            this = (RestrictionNotSatisfySlotIcons_o *)entity;
            if ( !entity )
              goto LABEL_83;
            this = (RestrictionNotSatisfySlotIcons_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (RestrictionNotSatisfySlotIcons_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_83;
              this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
              if ( v14 >= servantIds->max_length )
                goto LABEL_84;
              if ( !this )
                goto LABEL_83;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)this, v15[v14], 0LL);
              this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34474600(
                                                           questRestrictionInfo,
                                                           HeroineData,
                                                           0LL);
            }
            else
            {
LABEL_43:
              if ( v14 >= servantIds->max_length )
                goto LABEL_84;
              this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount(
                                                           questRestrictionInfo,
                                                           v15[v14],
                                                           0LL);
            }
            v22 = (int)this;
          }
          else
          {
            v22 = -1;
          }
          v23 = v11->fields.servantFaceIcons;
          if ( !v23 )
            goto LABEL_83;
          if ( v14 >= v23->max_length || v14 >= servantIds->max_length )
            goto LABEL_84;
          if ( !limitCounts )
            goto LABEL_83;
          if ( v14 >= limitCounts->max_length )
            goto LABEL_84;
          if ( !imageServantIds )
            goto LABEL_83;
          if ( v14 >= imageServantIds->max_length )
            goto LABEL_84;
          this = (RestrictionNotSatisfySlotIcons_o *)v23->m_Items[v14];
          if ( !this )
            goto LABEL_83;
          ServantFaceIconComponent__Set_31755472(
            (ServantFaceIconComponent_o *)this,
            v15[v14],
            limitCounts->m_Items[v14 + 1],
            v22,
            0,
            0LL,
            0LL,
            2,
            0,
            0,
            0LL,
            1,
            0,
            imageServantIds->m_Items[v14 + 1],
            0,
            0LL);
          if ( !rarityHideFlags )
            goto LABEL_83;
          if ( v14 >= rarityHideFlags->max_length )
            goto LABEL_84;
          if ( rarityHideFlags->m_Items[v14 + 4] )
          {
            v24 = v11->fields.servantFaceIcons;
            if ( !v24 )
              goto LABEL_83;
            if ( v14 >= v24->max_length )
              goto LABEL_84;
            this = (RestrictionNotSatisfySlotIcons_o *)v24->m_Items[v14];
            if ( !this )
              goto LABEL_83;
            ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, 0, 0LL);
          }
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v21 = v11->fields.supportIcons;
          if ( !v21 )
            goto LABEL_83;
          if ( v14 >= v21->max_length )
            goto LABEL_84;
          this = (RestrictionNotSatisfySlotIcons_o *)v21->m_Items[v14];
          if ( !this )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !this )
            goto LABEL_83;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        }
        if ( (_DWORD)v13 == 1 || (_DWORD)v13 == 3 && v14 == 2 )
        {
          v25 = v11->fields.servantFaceIcons;
          if ( !v25 )
            goto LABEL_83;
          if ( v14 >= v25->max_length )
            goto LABEL_84;
          this = (RestrictionNotSatisfySlotIcons_o *)v25->m_Items[v14];
          if ( !this )
            goto LABEL_83;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0LL);
          v27 = v11->fields.supportIcons;
          if ( !v27 )
            goto LABEL_83;
          if ( v14 >= v27->max_length )
            goto LABEL_84;
          this = (RestrictionNotSatisfySlotIcons_o *)v27->m_Items[v14];
          if ( !this )
            goto LABEL_83;
          v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(v28, 0.0, 0LL);
        }
      }
      servantFaceIcons = v11->fields.servantFaceIcons;
      ++v14;
      if ( !servantFaceIcons )
        goto LABEL_83;
    }
  }
  classIcons = v11->fields.classIcons;
  if ( classIcons )
  {
    v30 = classIcons->max_length;
    if ( v30 >= 1 )
    {
      v31 = 0LL;
      while ( (unsigned int)v31 < v30 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)classIcons->m_Items[v31];
        if ( !this )
          goto LABEL_83;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v30 = classIcons->max_length;
        if ( (int)++v31 >= v30 )
          goto LABEL_81;
      }
LABEL_84:
      v32 = sub_B776C8(this);
      sub_B77668(v32, 0LL);
    }
  }
LABEL_81:
  this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
  if ( !this )
LABEL_83:
    sub_B7769C(this, servantIds);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}