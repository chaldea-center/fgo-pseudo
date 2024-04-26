void __fastcall WarBoardSimplePopup___cctor(const MethodInfo *method)
{
  WarBoardSimplePopup_c *v1; // x8

  if ( (byte_4353A2E & 1) == 0 )
  {
    sub_B70694(&WarBoardSimplePopup_TypeInfo);
    byte_4353A2E = 1;
  }
  WarBoardSimplePopup_TypeInfo->static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = 20;
  WarBoardSimplePopup_TypeInfo->static_fields->RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE = 20;
  v1 = WarBoardSimplePopup_TypeInfo;
  WarBoardSimplePopup_TypeInfo->static_fields->BOTTOM_MARGIN = 10;
  v1->static_fields->TOP_MARGIN = 70;
  v1->static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = 84;
  v1->static_fields->FS_RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE = 84;
  v1->static_fields->FS_BOTTOM_MARGIN = 46;
  v1->static_fields->FS_TOP_MARGIN = 70;
}


void __fastcall WarBoardSimplePopup___ctor(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  if ( (byte_4353A2D & 1) == 0 )
  {
    sub_B70694(&WarBoardInfoPopupBase_TypeInfo);
    byte_4353A2D = 1;
  }
  this->fields.targetPiecePosition = UnityEngine_Vector3__get_zero(0LL);
  if ( (BYTE3(WarBoardInfoPopupBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
  }
  WarBoardInfoPopupBase___ctor((WarBoardInfoPopupBase_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardSimplePopup__AddElement(
        WarBoardSimplePopup_o *this,
        UnityEngine_GameObject_o *elemPrefab,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_4353A29 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353A29 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    sub_B7076C(0LL, elemPrefab);
  transform = UnityEngine_GameObject__get_transform(mainView, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                       (UILabel_o *)elemPrefab,
                                       transform,
                                       (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
}


void __fastcall WarBoardSimplePopup__AdjustMainViewPosition(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  srcLineSprite_o *Component_srcLineSprite; // x19
  float x; // s8
  int v6; // w8
  __int64 v7; // x21
  int v8; // w22
  __int64 v9; // x9
  struct CStateManager_srcLineSprite__o *mFSM; // x8
  int v11; // w9
  UIWidget_o *v12; // x21
  int32_t width; // w22
  int32_t height; // w23
  ManagerConfig_c *v15; // x8
  float v16; // s0
  double v17; // d0
  int32_t v18; // w22
  float v19; // s8
  int v20; // w8
  __int64 v21; // x21
  __int64 v22; // x9
  struct CStateManager_srcLineSprite__o *v23; // x8
  int v24; // w9
  struct CStateManager_srcLineSprite__o *v25; // x21
  float y; // s8
  int v27; // w8
  struct CStateManager_srcLineSprite__o *v28; // x8
  struct CStateManager_srcLineSprite__o *v29; // x9
  float v30; // s8
  struct UISprite_o *mcLineSprite; // x8
  int v32; // w9
  struct UnityEngine_Transform_o *mcMyTrans; // x8
  struct UISprite_o *v34; // x20
  int32_t TOP_MARGIN; // w8
  struct UnityEngine_Transform_o *v36; // x8
  struct UnityEngine_Transform_o *v37; // x21
  float v38; // s8
  struct UnityEngine_Transform_o *v39; // x8
  int v40; // w10
  int v41; // w10
  int v42; // w9
  struct CStateManager_srcLineSprite__o *v43; // x21
  float v44; // s8
  int v45; // w8
  struct CStateManager_srcLineSprite__o *v46; // x8
  struct CStateManager_srcLineSprite__o *v47; // x9
  float v48; // s8
  struct UISprite_o *v49; // x8
  int v50; // w9
  struct UnityEngine_Transform_o *v51; // x8
  struct UISprite_o *v52; // x8
  _DWORD *v53; // x9
  int v54; // w8
  struct UnityEngine_Transform_o *v55; // x8
  struct UnityEngine_Transform_o *v56; // x21
  float v57; // s8
  int v58; // w8
  struct UnityEngine_Transform_o *v59; // x8

  if ( (byte_4353A2B & 1) == 0 )
  {
    sub_B70694(&FSUtility_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&WarBoardSimplePopup_TypeInfo);
    byte_4353A2B = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_146;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              mainView,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( FSUtility__IsUnderVista(0LL) )
    {
      x = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_146;
      if ( (int)mainView >= 0 )
        v6 = (int)mainView;
      else
        v6 = (_DWORD)mainView + 1;
      if ( x < (float)(v6 >> 1) )
      {
        v7 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v8 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 80LL);
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v7 )
          goto LABEL_146;
        *(_DWORD *)(v7 + 28) = v8
                             - WarBoardSimplePopup_TypeInfo->static_fields->RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v9 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v9 )
          goto LABEL_146;
        mFSM = Component_srcLineSprite->fields.mFSM;
        if ( !mFSM )
          goto LABEL_146;
        v11 = *(_DWORD *)(v9 + 28) - LODWORD(Component_srcLineSprite[1].fields.mFSM);
        goto LABEL_74;
      }
      v25 = Component_srcLineSprite->fields.mFSM;
      mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
      if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
      }
      if ( v25 )
      {
        *(&v25->fields.m_state + 1) = WarBoardSimplePopup_TypeInfo->static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( mainView )
        {
          if ( LODWORD(mainView[21].klass) == 1 )
          {
            y = this->fields.targetPiecePosition.fields.y;
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
            v27 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
            if ( y >= (float)(v27 >> 1) )
            {
              v28 = Component_srcLineSprite->fields.mFSM;
              if ( !v28 )
                goto LABEL_146;
              *(&v28->fields.m_state + 1) += 48;
            }
          }
          v29 = Component_srcLineSprite->fields.mFSM;
          if ( v29 )
          {
            mFSM = *(struct CStateManager_srcLineSprite__o **)&Component_srcLineSprite->fields.mtIsUpdate;
            if ( mFSM )
            {
              v11 = *(&v29->fields.m_state + 1) + LODWORD(Component_srcLineSprite[1].fields.mFSM);
LABEL_74:
              *(&mFSM->fields.m_state + 1) = v11;
              v30 = this->fields.targetPiecePosition.fields.y;
              mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
              mcLineSprite = Component_srcLineSprite->fields.mcLineSprite;
              if ( !mcLineSprite )
                goto LABEL_146;
              if ( (int)mainView >= 0 )
                v32 = (int)mainView;
              else
                v32 = (_DWORD)mainView + 1;
              if ( v30 < (float)(v32 >> 1) )
              {
                LODWORD(mcLineSprite->fields.leftAnchor) = 1065353216;
                mcMyTrans = Component_srcLineSprite->fields.mcMyTrans;
                if ( !mcMyTrans )
                  goto LABEL_146;
                LODWORD(mcMyTrans[1].klass) = 1065353216;
                v34 = Component_srcLineSprite->fields.mcLineSprite;
                mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
                if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
                }
                if ( !v34 )
                  goto LABEL_146;
                TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->TOP_MARGIN;
LABEL_126:
                HIDWORD(v34->fields.leftAnchor) = -TOP_MARGIN;
                v52 = Component_srcLineSprite->fields.mcLineSprite;
                if ( v52 )
                {
                  v53 = Component_srcLineSprite->fields.mcMyTrans;
                  if ( v53 )
                  {
                    v54 = HIDWORD(v52->fields.leftAnchor) - HIDWORD(Component_srcLineSprite[1].fields.mFSM);
LABEL_144:
                    v53[7] = v54;
                    return;
                  }
                }
                goto LABEL_146;
              }
              LODWORD(mcLineSprite->fields.leftAnchor) = 0;
              v36 = Component_srcLineSprite->fields.mcMyTrans;
              if ( !v36 )
                goto LABEL_146;
              LODWORD(v36[1].klass) = 0;
              v37 = Component_srcLineSprite->fields.mcMyTrans;
              mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
              if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
              }
              if ( !v37 )
                goto LABEL_146;
              HIDWORD(v37[1].klass) = WarBoardSimplePopup_TypeInfo->static_fields->BOTTOM_MARGIN;
              mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !mainView )
                goto LABEL_146;
              if ( LODWORD(mainView[21].klass) != 1 )
                goto LABEL_141;
              v38 = this->fields.targetPiecePosition.fields.x;
              mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
              v39 = Component_srcLineSprite->fields.mcMyTrans;
              if ( !v39 )
                goto LABEL_146;
              if ( (int)mainView >= 0 )
                v40 = (int)mainView;
              else
                v40 = (_DWORD)mainView + 1;
              if ( v38 >= (float)(v40 >> 1) )
                v41 = -1;
              else
                v41 = 12;
              v42 = HIDWORD(v39[1].klass) + v41;
LABEL_140:
              HIDWORD(v39[1].klass) = v42;
LABEL_141:
              v59 = Component_srcLineSprite->fields.mcMyTrans;
              if ( v59 )
              {
                v53 = Component_srcLineSprite->fields.mcLineSprite;
                if ( v53 )
                {
                  v54 = HIDWORD(v59[1].klass) + HIDWORD(Component_srcLineSprite[1].fields.mFSM);
                  goto LABEL_144;
                }
              }
            }
          }
        }
      }
LABEL_146:
      sub_B7076C(mainView, method);
    }
    mainView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !mainView )
      goto LABEL_146;
    v12 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          mainView,
                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
    {
      width = UnityEngine_Screen__get_width(0LL);
      height = UnityEngine_Screen__get_height(0LL);
      v15 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v15 = ManagerConfig_TypeInfo;
      }
      v16 = (float)((float)((float)width / (float)height) / 1.7778) * (float)v15->static_fields->WIDTH;
      if ( v16 == INFINITY )
        v17 = -v16;
      else
        v17 = v16;
      v18 = (int)v17;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      mainView = (UnityEngine_GameObject_o *)FSUtility__IsOverScope(0LL);
      if ( ((unsigned __int8)mainView & 1) != 0 )
      {
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v18 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 84LL);
      }
      if ( !v12 )
        goto LABEL_146;
      UIWidget__set_width(v12, v18, 0LL);
      v19 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_146;
      if ( (int)mainView >= 0 )
        v20 = (int)mainView;
      else
        v20 = (_DWORD)mainView + 1;
      if ( v19 >= (float)(v20 >> 1) )
      {
        v43 = Component_srcLineSprite->fields.mFSM;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v43 )
          goto LABEL_146;
        *(&v43->fields.m_state + 1) = WarBoardSimplePopup_TypeInfo->static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !mainView )
          goto LABEL_146;
        if ( LODWORD(mainView[21].klass) == 1 )
        {
          v44 = this->fields.targetPiecePosition.fields.y;
          mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
          v45 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
          if ( v44 >= (float)(v45 >> 1) )
          {
            v46 = Component_srcLineSprite->fields.mFSM;
            if ( !v46 )
              goto LABEL_146;
            *(&v46->fields.m_state + 1) += 52;
          }
        }
        v47 = Component_srcLineSprite->fields.mFSM;
        if ( !v47 )
          goto LABEL_146;
        v23 = *(struct CStateManager_srcLineSprite__o **)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v23 )
          goto LABEL_146;
        v24 = *(&v47->fields.m_state + 1) + LODWORD(Component_srcLineSprite[1].fields.mFSM);
      }
      else
      {
        v21 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v21 )
          goto LABEL_146;
        *(_DWORD *)(v21 + 28) = v18
                              - WarBoardSimplePopup_TypeInfo->static_fields->FS_RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v22 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v22 )
          goto LABEL_146;
        v23 = Component_srcLineSprite->fields.mFSM;
        if ( !v23 )
          goto LABEL_146;
        v24 = *(_DWORD *)(v22 + 28) - LODWORD(Component_srcLineSprite[1].fields.mFSM);
      }
      *(&v23->fields.m_state + 1) = v24;
      v48 = this->fields.targetPiecePosition.fields.y;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
      v49 = Component_srcLineSprite->fields.mcLineSprite;
      if ( !v49 )
        goto LABEL_146;
      if ( (int)mainView >= 0 )
        v50 = (int)mainView;
      else
        v50 = (_DWORD)mainView + 1;
      if ( v48 < (float)(v50 >> 1) )
      {
        LODWORD(v49->fields.leftAnchor) = 1065353216;
        v51 = Component_srcLineSprite->fields.mcMyTrans;
        if ( !v51 )
          goto LABEL_146;
        LODWORD(v51[1].klass) = 1065353216;
        v34 = Component_srcLineSprite->fields.mcLineSprite;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v34 )
          goto LABEL_146;
        TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->FS_TOP_MARGIN;
        goto LABEL_126;
      }
      LODWORD(v49->fields.leftAnchor) = 0;
      v55 = Component_srcLineSprite->fields.mcMyTrans;
      if ( !v55 )
        goto LABEL_146;
      LODWORD(v55[1].klass) = 0;
      v56 = Component_srcLineSprite->fields.mcMyTrans;
      mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
      if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
      }
      if ( !v56 )
        goto LABEL_146;
      HIDWORD(v56[1].klass) = WarBoardSimplePopup_TypeInfo->static_fields->FS_BOTTOM_MARGIN;
      v57 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( (int)mainView >= 0 )
        v58 = (int)mainView;
      else
        v58 = (_DWORD)mainView + 1;
      if ( v57 < (float)(v58 >> 1) )
        goto LABEL_141;
      v39 = Component_srcLineSprite->fields.mcMyTrans;
      if ( !v39 )
        goto LABEL_146;
      v42 = HIDWORD(v39[1].klass) - 13;
      goto LABEL_140;
    }
  }
}


void __fastcall WarBoardSimplePopup__CleanPopup(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4353A2C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353A2C = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_14;
  mainView = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mainView, 0LL);
  if ( !mainView )
    goto LABEL_14;
  v4 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)mainView, 0LL) - 1;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      mainView = this->fields.mainView;
      if ( !mainView )
        break;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mainView, 0LL);
      if ( !mainView )
        break;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                               (UnityEngine_Transform_o *)mainView,
                                               v4,
                                               0LL);
      if ( !mainView )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)mainView,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_36067420(gameObject, 0LL);
      if ( --v4 < 0 )
        return;
    }
LABEL_14:
    sub_B7076C(mainView, method);
  }
}


void __fastcall WarBoardSimplePopup__MainViewContentsFit(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  UIWidget_o *Component_srcLineSprite; // x20
  int32_t v5; // w22
  int32_t v6; // w21
  int32_t i; // w23
  WebViewObject_o *Component_WebViewObject; // x24
  int onStarted_high; // w28
  struct System_Action_string__o *onStarted; // x8
  struct System_Action_string__o *onHttpError; // x8
  struct System_Action_string__o *v12; // x8
  struct System_Action_string__o *v13; // x8
  struct System_Action_string__o *v14; // x9

  if ( (byte_4353A2A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353A2A = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_28;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            mainView,
                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    mainView = this->fields.mainView;
    if ( mainView )
    {
      mainView = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mainView, 0LL);
      if ( mainView )
      {
        mainView = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_childCount(
                                                 (UnityEngine_Transform_o *)mainView,
                                                 0LL);
        if ( (int)mainView < 1 )
        {
          v6 = 0;
          if ( Component_srcLineSprite )
          {
LABEL_26:
            UIWidget__set_height(Component_srcLineSprite, v6, 0LL);
            return;
          }
        }
        else
        {
          v5 = (int)mainView;
          v6 = 0;
          for ( i = 0; i < v5; ++i )
          {
            mainView = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(this->fields.mainView, i, 0LL);
            if ( !mainView )
              goto LABEL_28;
            Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)mainView,
                                        (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_WebViewObject,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)mainView & 1) != 0 )
            {
              if ( !Component_WebViewObject )
                goto LABEL_28;
              onStarted_high = HIDWORD(Component_WebViewObject[1].fields.onStarted);
              UIRect__SetAnchor_38833932((UIRect_o *)Component_WebViewObject, this->fields.mainView, 0LL);
              onStarted = Component_WebViewObject->fields.onStarted;
              if ( !onStarted )
                goto LABEL_28;
              LODWORD(onStarted->fields.m_target) = 1065353216;
              onHttpError = Component_WebViewObject->fields.onHttpError;
              if ( !onHttpError )
                goto LABEL_28;
              LODWORD(onHttpError->fields.m_target) = 1065353216;
              v12 = Component_WebViewObject->fields.onStarted;
              if ( !v12 )
                goto LABEL_28;
              HIDWORD(v12->fields.m_target) = -v6;
              v13 = Component_WebViewObject->fields.onStarted;
              if ( !v13 )
                goto LABEL_28;
              v14 = Component_WebViewObject->fields.onHttpError;
              if ( !v14 )
                goto LABEL_28;
              v6 += onStarted_high;
              HIDWORD(v14->fields.m_target) = HIDWORD(v13->fields.m_target) - onStarted_high;
              UIRect__ResetAnchors((UIRect_o *)Component_WebViewObject, 0LL);
              UIRect__UpdateAnchors((UIRect_o *)Component_WebViewObject, 0LL);
            }
          }
          if ( Component_srcLineSprite )
            goto LABEL_26;
        }
      }
    }
LABEL_28:
    sub_B7076C(mainView, method);
  }
}


void __fastcall WarBoardSimplePopup__OnBeforeShow(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  WarBoardInfoPopupBase__OnBeforeShow((WarBoardInfoPopupBase_o *)this, 0LL);
  WarBoardSimplePopup__MainViewContentsFit(this, v3);
  WarBoardSimplePopup__AdjustMainViewPosition(this, v4);
}


void __fastcall WarBoardSimplePopup__OnDestroy(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(WarBoardSimplePopup_o *, void *))this->klass->vtable._9_CleanPopup.method)(
    this,
    this->klass[1]._1.image);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopup__SetTargetPiecePosition(
        WarBoardSimplePopup_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  this->fields.targetPiecePosition = pos;
}