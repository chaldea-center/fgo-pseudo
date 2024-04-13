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
  __int64 v3; // x3
  RestrictionNotSatisfySlotIcons_o *v5; // x19
  struct UISprite_array *classIcons; // x8
  signed int max_length; // w24
  __int64 v8; // x23
  int v9; // w9
  struct UISprite_array *v10; // x8
  UISprite_o *v11; // x21
  int32_t v12; // w22
  struct UISprite_array *v13; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct ServantFaceIconComponent_array *servantFaceIcons; // x20
  int v16; // w8
  __int64 v17; // x21
  struct UISprite_array *supportIcons; // x19
  int v19; // w8
  __int64 v20; // x20
  __int64 v21; // x0

  v5 = this;
  if ( (byte_42EAF12 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlotIcons_o *)sub_B5D5C4(
                                                 &AtlasManager_TypeInfo,
                                                 (_DWORD)classImageIds,
                                                 (_DWORD)method,
                                                 v3);
    byte_42EAF12 = 1;
  }
  classIcons = v5->fields.classIcons;
  if ( classIcons )
  {
    if ( !classImageIds )
LABEL_43:
      sub_B5D69C(this, classImageIds);
    max_length = classImageIds->max_length;
    v8 = 0LL;
    while ( 1 )
    {
      v9 = classIcons->max_length;
      if ( (int)v8 >= v9 )
        break;
      if ( (unsigned int)v8 >= v9 )
        goto LABEL_44;
      this = (RestrictionNotSatisfySlotIcons_o *)classIcons->m_Items[v8];
      if ( !this )
        goto LABEL_43;
      this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_43;
      if ( (int)v8 >= max_length )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v10 = v5->fields.classIcons;
        if ( !v10 )
          goto LABEL_43;
        if ( (unsigned int)v8 >= v10->max_length || (unsigned int)v8 >= classImageIds->max_length )
          goto LABEL_44;
        v11 = v10->m_Items[v8];
        v12 = classImageIds->m_Items[v8 + 1];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (RestrictionNotSatisfySlotIcons_o *)AtlasManager__SetClassIcon(v11, v12, 3, 0LL);
      }
      if ( max_length == 1 || max_length == 3 && (_DWORD)v8 == 2 )
      {
        v13 = v5->fields.classIcons;
        if ( !v13 )
          goto LABEL_43;
        if ( (unsigned int)v8 >= v13->max_length )
          goto LABEL_44;
        this = (RestrictionNotSatisfySlotIcons_o *)v13->m_Items[v8];
        if ( !this )
          goto LABEL_43;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0LL);
      }
      classIcons = v5->fields.classIcons;
      ++v8;
      if ( !classIcons )
        goto LABEL_43;
    }
  }
  servantFaceIcons = v5->fields.servantFaceIcons;
  if ( servantFaceIcons )
  {
    v16 = servantFaceIcons->max_length;
    if ( v16 >= 1 )
    {
      v17 = 0LL;
      while ( (unsigned int)v17 < v16 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v17];
        if ( !this )
          goto LABEL_43;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v16 = servantFaceIcons->max_length;
        if ( (int)++v17 >= v16 )
          goto LABEL_35;
      }
LABEL_44:
      v21 = sub_B5D6C8(this);
      sub_B5D668(v21, 0LL);
    }
  }
LABEL_35:
  supportIcons = v5->fields.supportIcons;
  if ( supportIcons )
  {
    v19 = supportIcons->max_length;
    if ( v19 >= 1 )
    {
      v20 = 0LL;
      while ( (unsigned int)v20 < v19 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)supportIcons->m_Items[v20];
        if ( !this )
          goto LABEL_43;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v19 = supportIcons->max_length;
        if ( (int)++v20 >= v19 )
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct ServantFaceIconComponent_array *servantFaceIcons; // x8
  __int64 v25; // x26
  unsigned __int64 v26; // x25
  int32_t *v27; // x27
  unsigned __int64 max_length; // x9
  int32_t v29; // w20
  struct UISprite_array *v30; // x8
  UserServantEntity_o *HeroineData; // x0
  struct UISprite_array *supportIcons; // x8
  struct UISprite_array *v33; // x8
  int32_t v34; // w3
  struct ServantFaceIconComponent_array *v35; // x8
  struct ServantFaceIconComponent_array *v36; // x8
  struct ServantFaceIconComponent_array *v37; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v39; // x8
  UnityEngine_GameObject_o *v40; // x0
  struct UISprite_array *classIcons; // x20
  int v42; // w8
  __int64 v43; // x21
  __int64 v44; // x0
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  v11 = this;
  if ( (byte_42EAF11 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantMaster___,
      (_DWORD)servantIds,
      (_DWORD)limitCounts,
      imageServantIds);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v18, v19, v20);
    this = (RestrictionNotSatisfySlotIcons_o *)sub_B5D5C4(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v21,
                                                 v22,
                                                 v23);
    byte_42EAF11 = 1;
  }
  entity = 0LL;
  servantFaceIcons = v11->fields.servantFaceIcons;
  if ( servantFaceIcons )
  {
    if ( !servantIds )
      goto LABEL_83;
    v25 = *(_QWORD *)&servantIds->max_length;
    v26 = 0LL;
    v27 = &servantIds->m_Items[1];
    while ( 1 )
    {
      max_length = servantFaceIcons->max_length;
      if ( (__int64)v26 >= (int)max_length )
        break;
      if ( (__int64)v26 >= (int)v25 )
      {
        if ( v26 >= max_length )
          goto LABEL_84;
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v26];
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
        if ( v26 >= supportIcons->max_length )
          goto LABEL_84;
        this = (RestrictionNotSatisfySlotIcons_o *)supportIcons->m_Items[v26];
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
        if ( v26 >= servantIds->max_length || v26 >= max_length )
          goto LABEL_84;
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v26];
        if ( !this )
          goto LABEL_83;
        v29 = v27[v26];
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_83;
        if ( v29 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v30 = v11->fields.supportIcons;
          if ( !v30 )
            goto LABEL_83;
          if ( v26 >= v30->max_length )
            goto LABEL_84;
          this = (RestrictionNotSatisfySlotIcons_o *)v30->m_Items[v26];
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
            this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
            if ( v26 >= servantIds->max_length )
              goto LABEL_84;
            if ( !this )
              goto LABEL_83;
            this = (RestrictionNotSatisfySlotIcons_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                         &entity,
                                                         v27[v26],
                                                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_43;
            this = (RestrictionNotSatisfySlotIcons_o *)entity;
            if ( !entity )
              goto LABEL_83;
            this = (RestrictionNotSatisfySlotIcons_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (RestrictionNotSatisfySlotIcons_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_83;
              this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
              if ( v26 >= servantIds->max_length )
                goto LABEL_84;
              if ( !this )
                goto LABEL_83;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)this, v27[v26], 0LL);
              this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(
                                                           questRestrictionInfo,
                                                           HeroineData,
                                                           0LL);
            }
            else
            {
LABEL_43:
              if ( v26 >= servantIds->max_length )
                goto LABEL_84;
              this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount(
                                                           questRestrictionInfo,
                                                           v27[v26],
                                                           0LL);
            }
            v34 = (int)this;
          }
          else
          {
            v34 = -1;
          }
          v35 = v11->fields.servantFaceIcons;
          if ( !v35 )
            goto LABEL_83;
          if ( v26 >= v35->max_length || v26 >= servantIds->max_length )
            goto LABEL_84;
          if ( !limitCounts )
            goto LABEL_83;
          if ( v26 >= limitCounts->max_length )
            goto LABEL_84;
          if ( !imageServantIds )
            goto LABEL_83;
          if ( v26 >= imageServantIds->max_length )
            goto LABEL_84;
          this = (RestrictionNotSatisfySlotIcons_o *)v35->m_Items[v26];
          if ( !this )
            goto LABEL_83;
          ServantFaceIconComponent__Set_30846632(
            (ServantFaceIconComponent_o *)this,
            v27[v26],
            limitCounts->m_Items[v26 + 1],
            v34,
            0,
            0LL,
            0LL,
            2,
            0,
            0,
            0LL,
            1,
            0,
            imageServantIds->m_Items[v26 + 1],
            0,
            0LL);
          if ( !rarityHideFlags )
            goto LABEL_83;
          if ( v26 >= rarityHideFlags->max_length )
            goto LABEL_84;
          if ( rarityHideFlags->m_Items[v26 + 4] )
          {
            v36 = v11->fields.servantFaceIcons;
            if ( !v36 )
              goto LABEL_83;
            if ( v26 >= v36->max_length )
              goto LABEL_84;
            this = (RestrictionNotSatisfySlotIcons_o *)v36->m_Items[v26];
            if ( !this )
              goto LABEL_83;
            ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, 0, 0LL);
          }
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v33 = v11->fields.supportIcons;
          if ( !v33 )
            goto LABEL_83;
          if ( v26 >= v33->max_length )
            goto LABEL_84;
          this = (RestrictionNotSatisfySlotIcons_o *)v33->m_Items[v26];
          if ( !this )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !this )
            goto LABEL_83;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        }
        if ( (_DWORD)v25 == 1 || (_DWORD)v25 == 3 && v26 == 2 )
        {
          v37 = v11->fields.servantFaceIcons;
          if ( !v37 )
            goto LABEL_83;
          if ( v26 >= v37->max_length )
            goto LABEL_84;
          this = (RestrictionNotSatisfySlotIcons_o *)v37->m_Items[v26];
          if ( !this )
            goto LABEL_83;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0LL);
          v39 = v11->fields.supportIcons;
          if ( !v39 )
            goto LABEL_83;
          if ( v26 >= v39->max_length )
            goto LABEL_84;
          this = (RestrictionNotSatisfySlotIcons_o *)v39->m_Items[v26];
          if ( !this )
            goto LABEL_83;
          v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(v40, 0.0, 0LL);
        }
      }
      servantFaceIcons = v11->fields.servantFaceIcons;
      ++v26;
      if ( !servantFaceIcons )
        goto LABEL_83;
    }
  }
  classIcons = v11->fields.classIcons;
  if ( classIcons )
  {
    v42 = classIcons->max_length;
    if ( v42 >= 1 )
    {
      v43 = 0LL;
      while ( (unsigned int)v43 < v42 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)classIcons->m_Items[v43];
        if ( !this )
          goto LABEL_83;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v42 = classIcons->max_length;
        if ( (int)++v43 >= v42 )
          goto LABEL_81;
      }
LABEL_84:
      v44 = sub_B5D6C8(this);
      sub_B5D668(v44, 0LL);
    }
  }
LABEL_81:
  this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
  if ( !this )
LABEL_83:
    sub_B5D69C(this, servantIds);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}