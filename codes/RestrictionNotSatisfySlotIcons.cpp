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
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v11; // x8
  UISprite_o *v12; // x21
  int32_t v13; // w22
  struct UISprite_array *v14; // x8
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  struct ServantFaceIconComponent_array *servantFaceIcons; // x20
  int v18; // w8
  __int64 v19; // x21
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  struct UISprite_array *supportIcons; // x19
  int v23; // w8
  __int64 v24; // x20
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0

  v4 = this;
  if ( (byte_40FC844 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlotIcons_o *)sub_B16FFC(&AtlasManager_TypeInfo, classImageIds);
    byte_40FC844 = 1;
  }
  classIcons = v4->fields.classIcons;
  if ( classIcons )
  {
    if ( !classImageIds )
LABEL_43:
      sub_B170D4();
    max_length = classImageIds->max_length;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = classIcons->max_length;
      if ( (int)v7 >= v8 )
        break;
      if ( (unsigned int)v7 >= v8 )
        goto LABEL_44;
      v9 = (UnityEngine_Component_o *)classIcons->m_Items[v7];
      if ( !v9 )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( !gameObject )
        goto LABEL_43;
      if ( (int)v7 >= max_length )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v11 = v4->fields.classIcons;
        if ( !v11 )
          goto LABEL_43;
        if ( (unsigned int)v7 >= v11->max_length || (unsigned int)v7 >= classImageIds->max_length )
          goto LABEL_44;
        v12 = v11->m_Items[v7];
        v13 = classImageIds->m_Items[v7 + 1];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (RestrictionNotSatisfySlotIcons_o *)AtlasManager__SetClassIcon(v12, v13, 3, 0LL);
      }
      if ( max_length == 1 || max_length == 3 && (_DWORD)v7 == 2 )
      {
        v14 = v4->fields.classIcons;
        if ( !v14 )
          goto LABEL_43;
        if ( (unsigned int)v7 >= v14->max_length )
          goto LABEL_44;
        v15 = (UnityEngine_Component_o *)v14->m_Items[v7];
        if ( !v15 )
          goto LABEL_43;
        v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
        GameObjectExtensions__SetLocalPositionX(v16, 0.0, 0LL);
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
    v18 = servantFaceIcons->max_length;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      while ( (unsigned int)v19 < v18 )
      {
        v20 = (UnityEngine_Component_o *)servantFaceIcons->m_Items[v19];
        if ( !v20 )
          goto LABEL_43;
        v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
        if ( !v21 )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive(v21, 0, 0LL);
        v18 = servantFaceIcons->max_length;
        if ( (int)++v19 >= v18 )
          goto LABEL_35;
      }
LABEL_44:
      sub_B17100(this, classImageIds, method);
      sub_B170A0();
    }
  }
LABEL_35:
  supportIcons = v4->fields.supportIcons;
  if ( supportIcons )
  {
    v23 = supportIcons->max_length;
    if ( v23 >= 1 )
    {
      v24 = 0LL;
      while ( (unsigned int)v24 < v23 )
      {
        v25 = (UnityEngine_Component_o *)supportIcons->m_Items[v24];
        if ( !v25 )
          goto LABEL_43;
        v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
        if ( !v26 )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive(v26, 0, 0LL);
        v23 = supportIcons->max_length;
        if ( (int)++v24 >= v23 )
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct ServantFaceIconComponent_array *servantFaceIcons; // x8
  __int64 v17; // x26
  unsigned __int64 v18; // x25
  int32_t *v19; // x27
  unsigned __int64 max_length; // x9
  UnityEngine_Component_o *v21; // x0
  int32_t v22; // w20
  UnityEngine_GameObject_o *v23; // x0
  struct UISprite_array *v24; // x8
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *HeroineData; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *supportIcons; // x8
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  struct UISprite_array *v34; // x8
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  int32_t v37; // w3
  struct ServantFaceIconComponent_array *v38; // x8
  ServantFaceIconComponent_o *v39; // x0
  struct ServantFaceIconComponent_array *v40; // x8
  ServantFaceIconComponent_o *v41; // x0
  struct ServantFaceIconComponent_array *v42; // x8
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  struct UISprite_array *v45; // x8
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  struct UISprite_array *classIcons; // x20
  int v49; // w8
  __int64 v50; // x21
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  v11 = this;
  if ( (byte_40FC843 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, servantIds);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    this = (RestrictionNotSatisfySlotIcons_o *)sub_B16FFC(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v15);
    byte_40FC843 = 1;
  }
  entity = 0LL;
  servantFaceIcons = v11->fields.servantFaceIcons;
  if ( servantFaceIcons )
  {
    if ( !servantIds )
      goto LABEL_83;
    v17 = *(_QWORD *)&servantIds->max_length;
    v18 = 0LL;
    v19 = &servantIds->m_Items[1];
    while ( 1 )
    {
      max_length = servantFaceIcons->max_length;
      if ( (__int64)v18 >= (int)max_length )
        break;
      if ( (__int64)v18 >= (int)v17 )
      {
        if ( v18 >= max_length )
          goto LABEL_84;
        v29 = (UnityEngine_Component_o *)servantFaceIcons->m_Items[v18];
        if ( !v29 )
          goto LABEL_83;
        gameObject = UnityEngine_Component__get_gameObject(v29, 0LL);
        if ( !gameObject )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        supportIcons = v11->fields.supportIcons;
        if ( !supportIcons )
          goto LABEL_83;
        if ( v18 >= supportIcons->max_length )
          goto LABEL_84;
        v32 = (UnityEngine_Component_o *)supportIcons->m_Items[v18];
        if ( !v32 )
          goto LABEL_83;
        v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
        if ( !v33 )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive(v33, 0, 0LL);
      }
      else
      {
        if ( v18 >= servantIds->max_length || v18 >= max_length )
          goto LABEL_84;
        v21 = (UnityEngine_Component_o *)servantFaceIcons->m_Items[v18];
        if ( !v21 )
          goto LABEL_83;
        v22 = v19[v18];
        v23 = UnityEngine_Component__get_gameObject(v21, 0LL);
        if ( !v23 )
          goto LABEL_83;
        if ( v22 )
        {
          UnityEngine_GameObject__SetActive(v23, 1, 0LL);
          v24 = v11->fields.supportIcons;
          if ( !v24 )
            goto LABEL_83;
          if ( v18 >= v24->max_length )
            goto LABEL_84;
          v25 = (UnityEngine_Component_o *)v24->m_Items[v18];
          if ( !v25 )
            goto LABEL_83;
          v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
          if ( !v26 )
            goto LABEL_83;
          UnityEngine_GameObject__SetActive(v26, 0, 0LL);
          if ( questRestrictionInfo )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( v18 >= servantIds->max_length )
              goto LABEL_84;
            if ( !this )
              goto LABEL_83;
            this = (RestrictionNotSatisfySlotIcons_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                         &entity,
                                                         v19[v18],
                                                         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_43;
            if ( !entity )
              goto LABEL_83;
            this = (RestrictionNotSatisfySlotIcons_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_83;
              this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
              if ( v18 >= servantIds->max_length )
                goto LABEL_84;
              if ( !this )
                goto LABEL_83;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)this, v19[v18], 0LL);
              this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(
                                                           questRestrictionInfo,
                                                           HeroineData,
                                                           0LL);
            }
            else
            {
LABEL_43:
              if ( v18 >= servantIds->max_length )
                goto LABEL_84;
              this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount(
                                                           questRestrictionInfo,
                                                           v19[v18],
                                                           0LL);
            }
            v37 = (int)this;
          }
          else
          {
            v37 = -1;
          }
          v38 = v11->fields.servantFaceIcons;
          if ( !v38 )
            goto LABEL_83;
          if ( v18 >= v38->max_length || v18 >= servantIds->max_length )
            goto LABEL_84;
          if ( !limitCounts )
            goto LABEL_83;
          if ( v18 >= limitCounts->max_length )
            goto LABEL_84;
          if ( !imageServantIds )
            goto LABEL_83;
          if ( v18 >= imageServantIds->max_length )
            goto LABEL_84;
          v39 = v38->m_Items[v18];
          if ( !v39 )
            goto LABEL_83;
          ServantFaceIconComponent__Set_30702780(
            v39,
            v19[v18],
            limitCounts->m_Items[v18 + 1],
            v37,
            0,
            0LL,
            0LL,
            2,
            0,
            0,
            0LL,
            1,
            0,
            imageServantIds->m_Items[v18 + 1],
            0,
            0LL);
          if ( !rarityHideFlags )
            goto LABEL_83;
          if ( v18 >= rarityHideFlags->max_length )
            goto LABEL_84;
          if ( rarityHideFlags->m_Items[v18 + 4] )
          {
            v40 = v11->fields.servantFaceIcons;
            if ( !v40 )
              goto LABEL_83;
            if ( v18 >= v40->max_length )
              goto LABEL_84;
            v41 = v40->m_Items[v18];
            if ( !v41 )
              goto LABEL_83;
            ServantFaceIconComponent__SetDispRaritySprite(v41, 0, 0LL);
          }
        }
        else
        {
          UnityEngine_GameObject__SetActive(v23, 0, 0LL);
          v34 = v11->fields.supportIcons;
          if ( !v34 )
            goto LABEL_83;
          if ( v18 >= v34->max_length )
            goto LABEL_84;
          v35 = (UnityEngine_Component_o *)v34->m_Items[v18];
          if ( !v35 )
            goto LABEL_83;
          v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
          if ( !v36 )
            goto LABEL_83;
          UnityEngine_GameObject__SetActive(v36, 1, 0LL);
        }
        if ( (_DWORD)v17 == 1 || (_DWORD)v17 == 3 && v18 == 2 )
        {
          v42 = v11->fields.servantFaceIcons;
          if ( !v42 )
            goto LABEL_83;
          if ( v18 >= v42->max_length )
            goto LABEL_84;
          v43 = (UnityEngine_Component_o *)v42->m_Items[v18];
          if ( !v43 )
            goto LABEL_83;
          v44 = UnityEngine_Component__get_gameObject(v43, 0LL);
          GameObjectExtensions__SetLocalPositionX(v44, 0.0, 0LL);
          v45 = v11->fields.supportIcons;
          if ( !v45 )
            goto LABEL_83;
          if ( v18 >= v45->max_length )
            goto LABEL_84;
          v46 = (UnityEngine_Component_o *)v45->m_Items[v18];
          if ( !v46 )
            goto LABEL_83;
          v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
          GameObjectExtensions__SetLocalPositionX(v47, 0.0, 0LL);
        }
      }
      servantFaceIcons = v11->fields.servantFaceIcons;
      ++v18;
      if ( !servantFaceIcons )
        goto LABEL_83;
    }
  }
  classIcons = v11->fields.classIcons;
  if ( classIcons )
  {
    v49 = classIcons->max_length;
    if ( v49 >= 1 )
    {
      v50 = 0LL;
      while ( (unsigned int)v50 < v49 )
      {
        v51 = (UnityEngine_Component_o *)classIcons->m_Items[v50];
        if ( !v51 )
          goto LABEL_83;
        v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
        if ( !v52 )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive(v52, 0, 0LL);
        v49 = classIcons->max_length;
        if ( (int)++v50 >= v49 )
          goto LABEL_81;
      }
LABEL_84:
      sub_B17100(this, servantIds, limitCounts);
      sub_B170A0();
    }
  }
LABEL_81:
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
  if ( !v53 )
LABEL_83:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v53, 1, 0LL);
}