void RestrictionNotSatisfySlotIcons___ctor(RestrictionNotSatisfySlotIcons_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RestrictionNotSatisfySlotIcons__Awake(RestrictionNotSatisfySlotIcons_o *this, const MethodInfo *method)
{
  ;
}


UIWidget_o *RestrictionNotSatisfySlotIcons__GetUIWidget(
        RestrictionNotSatisfySlotIcons_o *this,
        const MethodInfo *method)
{
  return this->fields.iconsWidget;
}


void RestrictionNotSatisfySlotIcons__SetClassIcons(
        RestrictionNotSatisfySlotIcons_o *this,
        System_Int32_array *classImageIds,
        const MethodInfo *method)
{
  RestrictionNotSatisfySlotIcons_o *v4; // x19
  struct UISprite_array *classIcons; // x8
  il2cpp_array_size_t max_length; // x24
  unsigned __int64 v7; // x23
  unsigned __int64 max_length_low; // x9
  __int64 v9; // x2
  struct UISprite_array *v10; // x8
  int32_t v11; // w22
  UISprite_o *v12; // x21
  struct UISprite_array *v13; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct ServantFaceIconComponent_array *servantFaceIcons; // x20
  int v16; // w8
  __int64 v17; // x21
  struct UISprite_array *supportIcons; // x19
  int v19; // w8
  __int64 v20; // x20

  v4 = this;
  if ( (byte_5934239 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlotIcons_o *)sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5934239 = 1;
  }
  classIcons = v4->fields.classIcons;
  if ( classIcons )
  {
    if ( !classImageIds )
LABEL_29:
      sub_21FFECC(this, classImageIds);
    max_length = classImageIds->max_length;
    v7 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(classIcons->max_length);
      if ( (__int64)v7 >= (int)max_length_low )
        break;
      if ( (__int64)v7 >= (int)max_length )
      {
        if ( v7 >= max_length_low )
          goto LABEL_45;
        this = (RestrictionNotSatisfySlotIcons_o *)classIcons->m_Items[v7];
        if ( !this )
          goto LABEL_29;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      else
      {
        if ( v7 >= max_length_low )
          goto LABEL_45;
        this = (RestrictionNotSatisfySlotIcons_o *)classIcons->m_Items[v7];
        if ( !this )
          goto LABEL_29;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v10 = v4->fields.classIcons;
        if ( !v10 )
          goto LABEL_29;
        if ( v7 >= LODWORD(v10->max_length) || v7 >= LODWORD(classImageIds->max_length) )
          goto LABEL_45;
        v11 = classImageIds->m_Items[v7];
        v12 = v10->m_Items[v7];
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, classImageIds, v9);
        this = (RestrictionNotSatisfySlotIcons_o *)AtlasManager__SetClassIcon(v12, v11, 3, 0, 0, 0);
      }
      if ( (_DWORD)max_length == 1 || (_DWORD)max_length == 3 && v7 == 2 )
      {
        v13 = v4->fields.classIcons;
        if ( !v13 )
          goto LABEL_29;
        if ( v7 >= LODWORD(v13->max_length) )
          goto LABEL_45;
        this = (RestrictionNotSatisfySlotIcons_o *)v13->m_Items[v7];
        if ( !this )
          goto LABEL_29;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0);
      }
      classIcons = v4->fields.classIcons;
      ++v7;
      if ( !classIcons )
        goto LABEL_29;
    }
  }
  servantFaceIcons = v4->fields.servantFaceIcons;
  if ( servantFaceIcons )
  {
    v16 = servantFaceIcons->max_length;
    if ( v16 >= 1 )
    {
      v17 = 0;
      while ( (unsigned int)v17 < v16 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v17];
        if ( !this )
          goto LABEL_29;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v16 = servantFaceIcons->max_length;
        if ( (int)++v17 >= v16 )
          goto LABEL_37;
      }
LABEL_45:
      sub_21FFED4(this);
    }
  }
LABEL_37:
  supportIcons = v4->fields.supportIcons;
  if ( supportIcons )
  {
    v19 = supportIcons->max_length;
    if ( v19 >= 1 )
    {
      v20 = 0;
      while ( (unsigned int)v20 < v19 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)supportIcons->m_Items[v20];
        if ( !this )
          goto LABEL_29;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v19 = supportIcons->max_length;
        if ( (int)++v20 >= v19 )
          return;
      }
      goto LABEL_45;
    }
  }
}


void RestrictionNotSatisfySlotIcons__SetServantIcons(
        RestrictionNotSatisfySlotIcons_o *this,
        System_Int32_array *servantIds,
        System_Int32_array *limitCounts,
        System_Int32_array *imageServantIds,
        System_Boolean_array *rarityHideFlags,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v12; // x19
  intptr_t m_CachedPtr; // x8
  il2cpp_array_size_t max_length; // x29
  unsigned __int64 v15; // x25
  int32_t *m_Items; // x27
  unsigned __int64 v17; // x9
  UnityEngine_Component_c *v18; // x8
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x2
  int32_t v22; // w3
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_c *v24; // x8
  UserServantEntity_o *HeroineData; // x0
  intptr_t v26; // x8
  intptr_t v27; // x8
  intptr_t v28; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  _DWORD *monitor; // x20
  int v33; // w8
  __int64 v34; // x21
  Il2CppObject *v35; // [xsp+70h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  v12 = (UnityEngine_Component_o *)this;
  if ( (byte_5934238 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    this = (RestrictionNotSatisfySlotIcons_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934238 = 1;
  }
  m_CachedPtr = v12[1].fields.m_CachedPtr;
  v35 = 0;
  entity = 0;
  if ( m_CachedPtr )
  {
    if ( servantIds )
    {
      max_length = servantIds->max_length;
      v15 = 0;
      m_Items = servantIds->m_Items;
      do
      {
        v17 = *(unsigned int *)(m_CachedPtr + 24);
        if ( (__int64)v15 >= (int)v17 )
          goto LABEL_83;
        if ( (__int64)v15 >= (int)max_length )
        {
          if ( v15 >= v17 )
            goto LABEL_92;
          this = *(RestrictionNotSatisfySlotIcons_o **)(m_CachedPtr + 8 * v15 + 32);
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          klass = v12[2].klass;
          if ( !klass )
            break;
          if ( v15 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_92;
          this = (RestrictionNotSatisfySlotIcons_o *)*((_QWORD *)&klass->_1.byval_arg.data + v15);
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          goto LABEL_81;
        }
        if ( v15 >= LODWORD(servantIds->max_length) )
          goto LABEL_92;
        if ( !m_Items[v15] )
        {
          if ( v15 >= v17 )
            goto LABEL_92;
          this = *(RestrictionNotSatisfySlotIcons_o **)(m_CachedPtr + 8 * v15 + 32);
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          v24 = v12[2].klass;
          if ( !v24 )
            break;
          if ( v15 >= LODWORD(v24->_1.namespaze) )
            goto LABEL_92;
          this = (RestrictionNotSatisfySlotIcons_o *)*((_QWORD *)&v24->_1.byval_arg.data + v15);
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          goto LABEL_71;
        }
        if ( v15 >= v17 )
          goto LABEL_92;
        this = *(RestrictionNotSatisfySlotIcons_o **)(m_CachedPtr + 8 * v15 + 32);
        if ( !this )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v18 = v12[2].klass;
        if ( !v18 )
          break;
        if ( v15 >= LODWORD(v18->_1.namespaze) )
          goto LABEL_92;
        this = (RestrictionNotSatisfySlotIcons_o *)*((_QWORD *)&v18->_1.byval_arg.data + v15);
        if ( !this )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
        this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( v15 >= LODWORD(servantIds->max_length) )
          goto LABEL_92;
        if ( !this )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     &entity,
                                                     m_Items[v15],
                                                     (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (RestrictionNotSatisfySlotIcons_o *)entity;
          if ( !entity )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                                       (ServantEntity_o *)entity,
                                                       -1,
                                                       0);
          v22 = (int)this;
          if ( !questRestrictionInfo )
            goto LABEL_56;
        }
        else
        {
          v22 = -1;
          if ( !questRestrictionInfo )
            goto LABEL_56;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, servantIds, v21);
        this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( v15 >= LODWORD(servantIds->max_length) )
          goto LABEL_92;
        if ( !this )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     &v35,
                                                     m_Items[v15],
                                                     (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_53;
        this = (RestrictionNotSatisfySlotIcons_o *)v35;
        if ( !v35 )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)v35, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (RestrictionNotSatisfySlotIcons_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( v15 >= LODWORD(servantIds->max_length) )
            goto LABEL_92;
          if ( !this )
            break;
          HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)this, m_Items[v15], 0);
          this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_50476804(
                                                       questRestrictionInfo,
                                                       HeroineData,
                                                       0);
        }
        else
        {
LABEL_53:
          if ( v15 >= LODWORD(servantIds->max_length) )
            goto LABEL_92;
          this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount(
                                                       questRestrictionInfo,
                                                       m_Items[v15],
                                                       0);
        }
        v22 = (int)this;
LABEL_56:
        v26 = v12[1].fields.m_CachedPtr;
        if ( !v26 )
          break;
        if ( v15 >= *(unsigned int *)(v26 + 24) || v15 >= LODWORD(servantIds->max_length) )
          goto LABEL_92;
        if ( !limitCounts )
          break;
        if ( v15 >= LODWORD(limitCounts->max_length) )
          goto LABEL_92;
        if ( !imageServantIds )
          break;
        if ( v15 >= LODWORD(imageServantIds->max_length) )
          goto LABEL_92;
        this = *(RestrictionNotSatisfySlotIcons_o **)(v26 + 8 * v15 + 32);
        if ( !this )
          break;
        ServantFaceIconComponent__Set_48021296(
          (ServantFaceIconComponent_o *)this,
          m_Items[v15],
          limitCounts->m_Items[v15],
          v22,
          0,
          0,
          0,
          2,
          0,
          0,
          0,
          1,
          0,
          imageServantIds->m_Items[v15],
          0,
          0,
          0,
          0,
          0);
        if ( !rarityHideFlags )
          break;
        if ( v15 >= LODWORD(rarityHideFlags->max_length) )
          goto LABEL_92;
        if ( rarityHideFlags->m_Items[v15] )
        {
          v27 = v12[1].fields.m_CachedPtr;
          if ( !v27 )
            break;
          if ( v15 >= *(unsigned int *)(v27 + 24) )
            goto LABEL_92;
          this = *(RestrictionNotSatisfySlotIcons_o **)(v27 + 8 * v15 + 32);
          if ( !this )
            break;
          ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, 0, 0);
        }
LABEL_71:
        if ( (_DWORD)max_length == 1 || (_DWORD)max_length == 3 && v15 == 2 )
        {
          v28 = v12[1].fields.m_CachedPtr;
          if ( !v28 )
            break;
          if ( v15 >= *(unsigned int *)(v28 + 24) )
            goto LABEL_92;
          this = *(RestrictionNotSatisfySlotIcons_o **)(v28 + 8 * v15 + 32);
          if ( !this )
            break;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0);
          v30 = v12[2].klass;
          if ( !v30 )
            break;
          if ( v15 >= LODWORD(v30->_1.namespaze) )
            goto LABEL_92;
          this = (RestrictionNotSatisfySlotIcons_o *)*((_QWORD *)&v30->_1.byval_arg.data + v15);
          if ( !this )
            break;
          v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalPositionX(v31, 0.0, 0);
        }
LABEL_81:
        m_CachedPtr = v12[1].fields.m_CachedPtr;
        ++v15;
      }
      while ( m_CachedPtr );
    }
LABEL_82:
    sub_21FFECC(this, servantIds);
  }
LABEL_83:
  monitor = v12[2].monitor;
  if ( monitor )
  {
    v33 = monitor[6];
    if ( v33 >= 1 )
    {
      v34 = 0;
      while ( (unsigned int)v34 < v33 )
      {
        this = *(RestrictionNotSatisfySlotIcons_o **)&monitor[2 * v34 + 8];
        if ( !this )
          goto LABEL_82;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v33 = monitor[6];
        if ( (int)++v34 >= v33 )
          goto LABEL_90;
      }
LABEL_92:
      sub_21FFED4(this);
    }
  }
LABEL_90:
  this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(v12, 0);
  if ( !this )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}