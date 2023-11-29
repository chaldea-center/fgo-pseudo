void __fastcall WarBoardSimplePopup___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardSimplePopup_c *v2; // x8

  if ( (byte_40FBAB5 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardSimplePopup_TypeInfo, v1);
    byte_40FBAB5 = 1;
  }
  WarBoardSimplePopup_TypeInfo->static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = 20;
  WarBoardSimplePopup_TypeInfo->static_fields->RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE = 20;
  v2 = WarBoardSimplePopup_TypeInfo;
  WarBoardSimplePopup_TypeInfo->static_fields->BOTTOM_MARGIN = 10;
  v2->static_fields->TOP_MARGIN = 70;
  v2->static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = 84;
  v2->static_fields->FS_RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE = 84;
  v2->static_fields->FS_BOTTOM_MARGIN = 46;
  v2->static_fields->FS_TOP_MARGIN = 70;
}


void __fastcall WarBoardSimplePopup___ctor(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  if ( (byte_40FBAB4 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardInfoPopupBase_TypeInfo, method);
    byte_40FBAB4 = 1;
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *mainView; // x0
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_40FBAB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, elemPrefab);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FBAB0 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    sub_B170D4();
  transform = UnityEngine_GameObject__get_transform(mainView, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                       (UILabel_o *)elemPrefab,
                                       transform,
                                       (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
}


void __fastcall WarBoardSimplePopup__AdjustMainViewPosition(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *mainView; // x0
  srcLineSprite_o *Component_srcLineSprite; // x19
  float x; // s8
  int32_t width; // w0
  int v12; // w8
  __int64 v13; // x21
  ManagerConfig_c *v14; // x0
  int32_t v15; // w22
  __int64 v16; // x9
  struct CStateManager_srcLineSprite__o *mFSM; // x8
  int v18; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *v20; // x21
  int32_t v21; // w22
  int32_t v22; // w23
  ManagerConfig_c *v23; // x8
  float v24; // s0
  double v25; // d0
  int32_t WIDTH_21_9; // w22
  ManagerConfig_c *v27; // x0
  float v28; // s8
  int32_t v29; // w0
  int v30; // w8
  __int64 v31; // x21
  __int64 v32; // x9
  struct CStateManager_srcLineSprite__o *v33; // x8
  int v34; // w9
  struct CStateManager_srcLineSprite__o *v35; // x21
  WebViewManager_o *Instance; // x0
  float y; // s8
  int32_t height; // w0
  int v39; // w8
  struct CStateManager_srcLineSprite__o *v40; // x8
  struct CStateManager_srcLineSprite__o *v41; // x9
  float v42; // s8
  int32_t v43; // w0
  struct UISprite_o *mcLineSprite; // x8
  int v45; // w9
  struct UnityEngine_Transform_o *mcMyTrans; // x8
  struct UISprite_o *v47; // x20
  int32_t TOP_MARGIN; // w8
  struct UnityEngine_Transform_o *v49; // x8
  struct UnityEngine_Transform_o *v50; // x21
  WebViewManager_o *v51; // x0
  float v52; // s8
  int32_t v53; // w0
  struct UnityEngine_Transform_o *v54; // x8
  int v55; // w10
  int v56; // w10
  int v57; // w9
  struct CStateManager_srcLineSprite__o *v58; // x21
  WebViewManager_o *v59; // x0
  float v60; // s8
  int32_t v61; // w0
  int v62; // w8
  struct CStateManager_srcLineSprite__o *v63; // x8
  struct CStateManager_srcLineSprite__o *v64; // x9
  float v65; // s8
  int32_t v66; // w0
  struct UISprite_o *v67; // x8
  int v68; // w9
  struct UnityEngine_Transform_o *v69; // x8
  struct UISprite_o *v70; // x8
  _DWORD *v71; // x9
  int v72; // w8
  struct UnityEngine_Transform_o *v73; // x8
  struct UnityEngine_Transform_o *v74; // x21
  float v75; // s8
  int32_t v76; // w0
  int v77; // w8
  struct UnityEngine_Transform_o *v78; // x8

  if ( (byte_40FBAB2 & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B16FFC(&WarBoardSimplePopup_TypeInfo, v7);
    byte_40FBAB2 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_146;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              mainView,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      width = UnityEngine_Screen__get_width(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_146;
      if ( width >= 0 )
        v12 = width;
      else
        v12 = width + 1;
      if ( x < (float)(v12 >> 1) )
      {
        v13 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        v14 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v14 = ManagerConfig_TypeInfo;
        }
        v15 = v14->static_fields->WIDTH;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v13 )
          goto LABEL_146;
        *(_DWORD *)(v13 + 28) = v15
                              - WarBoardSimplePopup_TypeInfo->static_fields->RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v16 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v16 )
          goto LABEL_146;
        mFSM = Component_srcLineSprite->fields.mFSM;
        if ( !mFSM )
          goto LABEL_146;
        v18 = *(_DWORD *)(v16 + 28) - LODWORD(Component_srcLineSprite[1].fields.mFSM);
        goto LABEL_74;
      }
      v35 = Component_srcLineSprite->fields.mFSM;
      if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
      }
      if ( v35 )
      {
        *(&v35->fields.m_state + 1) = WarBoardSimplePopup_TypeInfo->static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          if ( *(_DWORD *)&Instance[4].fields.isButtonEnable == 1 )
          {
            y = this->fields.targetPiecePosition.fields.y;
            height = UnityEngine_Screen__get_height(0LL);
            v39 = height >= 0 ? height : height + 1;
            if ( y >= (float)(v39 >> 1) )
            {
              v40 = Component_srcLineSprite->fields.mFSM;
              if ( !v40 )
                goto LABEL_146;
              *(&v40->fields.m_state + 1) += 48;
            }
          }
          v41 = Component_srcLineSprite->fields.mFSM;
          if ( v41 )
          {
            mFSM = *(struct CStateManager_srcLineSprite__o **)&Component_srcLineSprite->fields.mtIsUpdate;
            if ( mFSM )
            {
              v18 = *(&v41->fields.m_state + 1) + LODWORD(Component_srcLineSprite[1].fields.mFSM);
LABEL_74:
              *(&mFSM->fields.m_state + 1) = v18;
              v42 = this->fields.targetPiecePosition.fields.y;
              v43 = UnityEngine_Screen__get_height(0LL);
              mcLineSprite = Component_srcLineSprite->fields.mcLineSprite;
              if ( !mcLineSprite )
                goto LABEL_146;
              if ( v43 >= 0 )
                v45 = v43;
              else
                v45 = v43 + 1;
              if ( v42 < (float)(v45 >> 1) )
              {
                LODWORD(mcLineSprite->fields.leftAnchor) = 1065353216;
                mcMyTrans = Component_srcLineSprite->fields.mcMyTrans;
                if ( !mcMyTrans )
                  goto LABEL_146;
                LODWORD(mcMyTrans[1].klass) = 1065353216;
                v47 = Component_srcLineSprite->fields.mcLineSprite;
                if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
                }
                if ( !v47 )
                  goto LABEL_146;
                TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->TOP_MARGIN;
LABEL_126:
                HIDWORD(v47->fields.leftAnchor) = -TOP_MARGIN;
                v70 = Component_srcLineSprite->fields.mcLineSprite;
                if ( v70 )
                {
                  v71 = Component_srcLineSprite->fields.mcMyTrans;
                  if ( v71 )
                  {
                    v72 = HIDWORD(v70->fields.leftAnchor) - HIDWORD(Component_srcLineSprite[1].fields.mFSM);
LABEL_144:
                    v71[7] = v72;
                    return;
                  }
                }
                goto LABEL_146;
              }
              LODWORD(mcLineSprite->fields.leftAnchor) = 0;
              v49 = Component_srcLineSprite->fields.mcMyTrans;
              if ( !v49 )
                goto LABEL_146;
              LODWORD(v49[1].klass) = 0;
              v50 = Component_srcLineSprite->fields.mcMyTrans;
              if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
              }
              if ( !v50 )
                goto LABEL_146;
              HIDWORD(v50[1].klass) = WarBoardSimplePopup_TypeInfo->static_fields->BOTTOM_MARGIN;
              v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !v51 )
                goto LABEL_146;
              if ( *(_DWORD *)&v51[4].fields.isButtonEnable != 1 )
                goto LABEL_141;
              v52 = this->fields.targetPiecePosition.fields.x;
              v53 = UnityEngine_Screen__get_width(0LL);
              v54 = Component_srcLineSprite->fields.mcMyTrans;
              if ( !v54 )
                goto LABEL_146;
              if ( v53 >= 0 )
                v55 = v53;
              else
                v55 = v53 + 1;
              if ( v52 >= (float)(v55 >> 1) )
                v56 = -1;
              else
                v56 = 12;
              v57 = HIDWORD(v54[1].klass) + v56;
LABEL_140:
              HIDWORD(v54[1].klass) = v57;
LABEL_141:
              v78 = Component_srcLineSprite->fields.mcMyTrans;
              if ( v78 )
              {
                v71 = Component_srcLineSprite->fields.mcLineSprite;
                if ( v71 )
                {
                  v72 = HIDWORD(v78[1].klass) + HIDWORD(Component_srcLineSprite[1].fields.mFSM);
                  goto LABEL_144;
                }
              }
            }
          }
        }
      }
LABEL_146:
      sub_B170D4();
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_146;
    v20 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          gameObject,
                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0LL, 0LL) )
    {
      v21 = UnityEngine_Screen__get_width(0LL);
      v22 = UnityEngine_Screen__get_height(0LL);
      v23 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v23 = ManagerConfig_TypeInfo;
      }
      v24 = (float)((float)((float)v21 / (float)v22) / 1.7778) * (float)v23->static_fields->WIDTH;
      if ( v24 == INFINITY )
        v25 = -v24;
      else
        v25 = v24;
      WIDTH_21_9 = (int)v25;
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      if ( FSUtility__IsOverScope(0LL) )
      {
        v27 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v27 = ManagerConfig_TypeInfo;
        }
        WIDTH_21_9 = v27->static_fields->WIDTH_21_9;
      }
      if ( !v20 )
        goto LABEL_146;
      UIWidget__set_width(v20, WIDTH_21_9, 0LL);
      v28 = this->fields.targetPiecePosition.fields.x;
      v29 = UnityEngine_Screen__get_width(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_146;
      if ( v29 >= 0 )
        v30 = v29;
      else
        v30 = v29 + 1;
      if ( v28 >= (float)(v30 >> 1) )
      {
        v58 = Component_srcLineSprite->fields.mFSM;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v58 )
          goto LABEL_146;
        *(&v58->fields.m_state + 1) = WarBoardSimplePopup_TypeInfo->static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !v59 )
          goto LABEL_146;
        if ( *(_DWORD *)&v59[4].fields.isButtonEnable == 1 )
        {
          v60 = this->fields.targetPiecePosition.fields.y;
          v61 = UnityEngine_Screen__get_height(0LL);
          v62 = v61 >= 0 ? v61 : v61 + 1;
          if ( v60 >= (float)(v62 >> 1) )
          {
            v63 = Component_srcLineSprite->fields.mFSM;
            if ( !v63 )
              goto LABEL_146;
            *(&v63->fields.m_state + 1) += 52;
          }
        }
        v64 = Component_srcLineSprite->fields.mFSM;
        if ( !v64 )
          goto LABEL_146;
        v33 = *(struct CStateManager_srcLineSprite__o **)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v33 )
          goto LABEL_146;
        v34 = *(&v64->fields.m_state + 1) + LODWORD(Component_srcLineSprite[1].fields.mFSM);
      }
      else
      {
        v31 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v31 )
          goto LABEL_146;
        *(_DWORD *)(v31 + 28) = WIDTH_21_9
                              - WarBoardSimplePopup_TypeInfo->static_fields->FS_RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v32 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v32 )
          goto LABEL_146;
        v33 = Component_srcLineSprite->fields.mFSM;
        if ( !v33 )
          goto LABEL_146;
        v34 = *(_DWORD *)(v32 + 28) - LODWORD(Component_srcLineSprite[1].fields.mFSM);
      }
      *(&v33->fields.m_state + 1) = v34;
      v65 = this->fields.targetPiecePosition.fields.y;
      v66 = UnityEngine_Screen__get_height(0LL);
      v67 = Component_srcLineSprite->fields.mcLineSprite;
      if ( !v67 )
        goto LABEL_146;
      if ( v66 >= 0 )
        v68 = v66;
      else
        v68 = v66 + 1;
      if ( v65 < (float)(v68 >> 1) )
      {
        LODWORD(v67->fields.leftAnchor) = 1065353216;
        v69 = Component_srcLineSprite->fields.mcMyTrans;
        if ( !v69 )
          goto LABEL_146;
        LODWORD(v69[1].klass) = 1065353216;
        v47 = Component_srcLineSprite->fields.mcLineSprite;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v47 )
          goto LABEL_146;
        TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->FS_TOP_MARGIN;
        goto LABEL_126;
      }
      LODWORD(v67->fields.leftAnchor) = 0;
      v73 = Component_srcLineSprite->fields.mcMyTrans;
      if ( !v73 )
        goto LABEL_146;
      LODWORD(v73[1].klass) = 0;
      v74 = Component_srcLineSprite->fields.mcMyTrans;
      if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
      }
      if ( !v74 )
        goto LABEL_146;
      HIDWORD(v74[1].klass) = WarBoardSimplePopup_TypeInfo->static_fields->FS_BOTTOM_MARGIN;
      v75 = this->fields.targetPiecePosition.fields.x;
      v76 = UnityEngine_Screen__get_width(0LL);
      if ( v76 >= 0 )
        v77 = v76;
      else
        v77 = v76 + 1;
      if ( v75 < (float)(v77 >> 1) )
        goto LABEL_141;
      v54 = Component_srcLineSprite->fields.mcMyTrans;
      if ( !v54 )
        goto LABEL_146;
      v57 = HIDWORD(v54[1].klass) - 13;
      goto LABEL_140;
    }
  }
}


void __fastcall WarBoardSimplePopup__CleanPopup(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w20
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_40FBAB3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBAB3 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_14;
  transform = UnityEngine_GameObject__get_transform(mainView, 0LL);
  if ( !transform )
    goto LABEL_14;
  v5 = UnityEngine_Transform__get_childCount(transform, 0LL) - 1;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v6 = this->fields.mainView;
      if ( !v6 )
        break;
      v7 = UnityEngine_GameObject__get_transform(v6, 0LL);
      if ( !v7 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v7, v5, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_B170D4();
  }
}


void __fastcall WarBoardSimplePopup__MainViewContentsFit(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *mainView; // x0
  UIWidget_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v10; // w22
  int32_t v11; // w21
  int32_t i; // w23
  UnityEngine_Component_o *Child; // x0
  WebViewObject_o *Component_WebViewObject; // x24
  int onStarted_high; // w28
  struct System_Action_string__o *onStarted; // x8
  struct System_Action_string__o *onHttpError; // x8
  struct System_Action_string__o *v18; // x8
  struct System_Action_string__o *v19; // x8
  struct System_Action_string__o *v20; // x9

  if ( (byte_40FBAB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FBAB1 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_28;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            mainView,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    v7 = this->fields.mainView;
    if ( v7 )
    {
      transform = UnityEngine_GameObject__get_transform(v7, 0LL);
      if ( transform )
      {
        childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
        if ( childCount < 1 )
        {
          v11 = 0;
          if ( Component_srcLineSprite )
          {
LABEL_26:
            UIWidget__set_height(Component_srcLineSprite, v11, 0LL);
            return;
          }
        }
        else
        {
          v10 = childCount;
          v11 = 0;
          for ( i = 0; i < v10; ++i )
          {
            Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(this->fields.mainView, i, 0LL);
            if ( !Child )
              goto LABEL_28;
            Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        Child,
                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
            {
              if ( !Component_WebViewObject )
                goto LABEL_28;
              onStarted_high = HIDWORD(Component_WebViewObject[1].fields.onStarted);
              UIRect__SetAnchor_37822600((UIRect_o *)Component_WebViewObject, this->fields.mainView, 0LL);
              onStarted = Component_WebViewObject->fields.onStarted;
              if ( !onStarted )
                goto LABEL_28;
              LODWORD(onStarted->fields.m_target) = 1065353216;
              onHttpError = Component_WebViewObject->fields.onHttpError;
              if ( !onHttpError )
                goto LABEL_28;
              LODWORD(onHttpError->fields.m_target) = 1065353216;
              v18 = Component_WebViewObject->fields.onStarted;
              if ( !v18 )
                goto LABEL_28;
              HIDWORD(v18->fields.m_target) = -v11;
              v19 = Component_WebViewObject->fields.onStarted;
              if ( !v19 )
                goto LABEL_28;
              v20 = Component_WebViewObject->fields.onHttpError;
              if ( !v20 )
                goto LABEL_28;
              v11 += onStarted_high;
              HIDWORD(v20->fields.m_target) = HIDWORD(v19->fields.m_target) - onStarted_high;
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
    sub_B170D4();
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