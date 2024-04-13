void __fastcall WarBoardSimplePopup___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  WarBoardSimplePopup_c *v4; // x8

  if ( (byte_42EAB82 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardSimplePopup_TypeInfo, v1, v2, v3);
    byte_42EAB82 = 1;
  }
  WarBoardSimplePopup_TypeInfo->static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = 20;
  WarBoardSimplePopup_TypeInfo->static_fields->RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE = 20;
  v4 = WarBoardSimplePopup_TypeInfo;
  WarBoardSimplePopup_TypeInfo->static_fields->BOTTOM_MARGIN = 10;
  v4->static_fields->TOP_MARGIN = 70;
  v4->static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = 84;
  v4->static_fields->FS_RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE = 84;
  v4->static_fields->FS_BOTTOM_MARGIN = 46;
  v4->static_fields->FS_TOP_MARGIN = 70;
}


void __fastcall WarBoardSimplePopup___ctor(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAB81 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardInfoPopupBase_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB81 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *mainView; // x0
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_42EAB7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, (_DWORD)elemPrefab, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EAB7D = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    sub_B5D69C(0LL, elemPrefab);
  transform = UnityEngine_GameObject__get_transform(mainView, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                       (UILabel_o *)elemPrefab,
                                       transform,
                                       (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
}


void __fastcall WarBoardSimplePopup__AdjustMainViewPosition(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_GameObject_o *mainView; // x0
  srcLineSprite_o *Component_srcLineSprite; // x19
  float x; // s8
  int v23; // w8
  __int64 v24; // x21
  int v25; // w22
  __int64 v26; // x9
  struct CStateManager_srcLineSprite__o *mFSM; // x8
  int v28; // w9
  UIWidget_o *v29; // x21
  int32_t width; // w22
  int32_t height; // w23
  ManagerConfig_c *v32; // x8
  float v33; // s0
  double v34; // d0
  int32_t v35; // w22
  float v36; // s8
  int v37; // w8
  __int64 v38; // x21
  __int64 v39; // x9
  struct CStateManager_srcLineSprite__o *v40; // x8
  int v41; // w9
  struct CStateManager_srcLineSprite__o *v42; // x21
  float y; // s8
  int v44; // w8
  struct CStateManager_srcLineSprite__o *v45; // x8
  struct CStateManager_srcLineSprite__o *v46; // x9
  float v47; // s8
  struct UISprite_o *mcLineSprite; // x8
  int v49; // w9
  struct UnityEngine_Transform_o *mcMyTrans; // x8
  struct UISprite_o *v51; // x20
  int32_t TOP_MARGIN; // w8
  struct UnityEngine_Transform_o *v53; // x8
  struct UnityEngine_Transform_o *v54; // x21
  float v55; // s8
  struct UnityEngine_Transform_o *v56; // x8
  int v57; // w10
  int v58; // w10
  int v59; // w9
  struct CStateManager_srcLineSprite__o *v60; // x21
  float v61; // s8
  int v62; // w8
  struct CStateManager_srcLineSprite__o *v63; // x8
  struct CStateManager_srcLineSprite__o *v64; // x9
  float v65; // s8
  struct UISprite_o *v66; // x8
  int v67; // w9
  struct UnityEngine_Transform_o *v68; // x8
  struct UISprite_o *v69; // x8
  _DWORD *v70; // x9
  int v71; // w8
  struct UnityEngine_Transform_o *v72; // x8
  struct UnityEngine_Transform_o *v73; // x21
  float v74; // s8
  int v75; // w8
  struct UnityEngine_Transform_o *v76; // x8

  if ( (byte_42EAB7F & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&WarBoardSimplePopup_TypeInfo, v17, v18, v19);
    byte_42EAB7F = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_146;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              mainView,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        v23 = (int)mainView;
      else
        v23 = (_DWORD)mainView + 1;
      if ( x < (float)(v23 >> 1) )
      {
        v24 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v25 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 80LL);
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v24 )
          goto LABEL_146;
        *(_DWORD *)(v24 + 28) = v25
                              - WarBoardSimplePopup_TypeInfo->static_fields->RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v26 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v26 )
          goto LABEL_146;
        mFSM = Component_srcLineSprite->fields.mFSM;
        if ( !mFSM )
          goto LABEL_146;
        v28 = *(_DWORD *)(v26 + 28) - LODWORD(Component_srcLineSprite[1].fields.mFSM);
        goto LABEL_74;
      }
      v42 = Component_srcLineSprite->fields.mFSM;
      mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
      if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
      }
      if ( v42 )
      {
        *(&v42->fields.m_state + 1) = WarBoardSimplePopup_TypeInfo->static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( mainView )
        {
          if ( LODWORD(mainView[21].klass) == 1 )
          {
            y = this->fields.targetPiecePosition.fields.y;
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
            v44 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
            if ( y >= (float)(v44 >> 1) )
            {
              v45 = Component_srcLineSprite->fields.mFSM;
              if ( !v45 )
                goto LABEL_146;
              *(&v45->fields.m_state + 1) += 48;
            }
          }
          v46 = Component_srcLineSprite->fields.mFSM;
          if ( v46 )
          {
            mFSM = *(struct CStateManager_srcLineSprite__o **)&Component_srcLineSprite->fields.mtIsUpdate;
            if ( mFSM )
            {
              v28 = *(&v46->fields.m_state + 1) + LODWORD(Component_srcLineSprite[1].fields.mFSM);
LABEL_74:
              *(&mFSM->fields.m_state + 1) = v28;
              v47 = this->fields.targetPiecePosition.fields.y;
              mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
              mcLineSprite = Component_srcLineSprite->fields.mcLineSprite;
              if ( !mcLineSprite )
                goto LABEL_146;
              if ( (int)mainView >= 0 )
                v49 = (int)mainView;
              else
                v49 = (_DWORD)mainView + 1;
              if ( v47 < (float)(v49 >> 1) )
              {
                LODWORD(mcLineSprite->fields.leftAnchor) = 1065353216;
                mcMyTrans = Component_srcLineSprite->fields.mcMyTrans;
                if ( !mcMyTrans )
                  goto LABEL_146;
                LODWORD(mcMyTrans[1].klass) = 1065353216;
                v51 = Component_srcLineSprite->fields.mcLineSprite;
                mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
                if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
                }
                if ( !v51 )
                  goto LABEL_146;
                TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->TOP_MARGIN;
LABEL_126:
                HIDWORD(v51->fields.leftAnchor) = -TOP_MARGIN;
                v69 = Component_srcLineSprite->fields.mcLineSprite;
                if ( v69 )
                {
                  v70 = Component_srcLineSprite->fields.mcMyTrans;
                  if ( v70 )
                  {
                    v71 = HIDWORD(v69->fields.leftAnchor) - HIDWORD(Component_srcLineSprite[1].fields.mFSM);
LABEL_144:
                    v70[7] = v71;
                    return;
                  }
                }
                goto LABEL_146;
              }
              LODWORD(mcLineSprite->fields.leftAnchor) = 0;
              v53 = Component_srcLineSprite->fields.mcMyTrans;
              if ( !v53 )
                goto LABEL_146;
              LODWORD(v53[1].klass) = 0;
              v54 = Component_srcLineSprite->fields.mcMyTrans;
              mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
              if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
              }
              if ( !v54 )
                goto LABEL_146;
              HIDWORD(v54[1].klass) = WarBoardSimplePopup_TypeInfo->static_fields->BOTTOM_MARGIN;
              mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !mainView )
                goto LABEL_146;
              if ( LODWORD(mainView[21].klass) != 1 )
                goto LABEL_141;
              v55 = this->fields.targetPiecePosition.fields.x;
              mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
              v56 = Component_srcLineSprite->fields.mcMyTrans;
              if ( !v56 )
                goto LABEL_146;
              if ( (int)mainView >= 0 )
                v57 = (int)mainView;
              else
                v57 = (_DWORD)mainView + 1;
              if ( v55 >= (float)(v57 >> 1) )
                v58 = -1;
              else
                v58 = 12;
              v59 = HIDWORD(v56[1].klass) + v58;
LABEL_140:
              HIDWORD(v56[1].klass) = v59;
LABEL_141:
              v76 = Component_srcLineSprite->fields.mcMyTrans;
              if ( v76 )
              {
                v70 = Component_srcLineSprite->fields.mcLineSprite;
                if ( v70 )
                {
                  v71 = HIDWORD(v76[1].klass) + HIDWORD(Component_srcLineSprite[1].fields.mFSM);
                  goto LABEL_144;
                }
              }
            }
          }
        }
      }
LABEL_146:
      sub_B5D69C(mainView, method);
    }
    mainView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !mainView )
      goto LABEL_146;
    v29 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          mainView,
                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
    {
      width = UnityEngine_Screen__get_width(0LL);
      height = UnityEngine_Screen__get_height(0LL);
      v32 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v32 = ManagerConfig_TypeInfo;
      }
      v33 = (float)((float)((float)width / (float)height) / 1.7778) * (float)v32->static_fields->WIDTH;
      if ( v33 == INFINITY )
        v34 = -v33;
      else
        v34 = v33;
      v35 = (int)v34;
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
        v35 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 84LL);
      }
      if ( !v29 )
        goto LABEL_146;
      UIWidget__set_width(v29, v35, 0LL);
      v36 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_146;
      if ( (int)mainView >= 0 )
        v37 = (int)mainView;
      else
        v37 = (_DWORD)mainView + 1;
      if ( v36 >= (float)(v37 >> 1) )
      {
        v60 = Component_srcLineSprite->fields.mFSM;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v60 )
          goto LABEL_146;
        *(&v60->fields.m_state + 1) = WarBoardSimplePopup_TypeInfo->static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !mainView )
          goto LABEL_146;
        if ( LODWORD(mainView[21].klass) == 1 )
        {
          v61 = this->fields.targetPiecePosition.fields.y;
          mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
          v62 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
          if ( v61 >= (float)(v62 >> 1) )
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
        v40 = *(struct CStateManager_srcLineSprite__o **)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v40 )
          goto LABEL_146;
        v41 = *(&v64->fields.m_state + 1) + LODWORD(Component_srcLineSprite[1].fields.mFSM);
      }
      else
      {
        v38 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v38 )
          goto LABEL_146;
        *(_DWORD *)(v38 + 28) = v35
                              - WarBoardSimplePopup_TypeInfo->static_fields->FS_RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v39 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v39 )
          goto LABEL_146;
        v40 = Component_srcLineSprite->fields.mFSM;
        if ( !v40 )
          goto LABEL_146;
        v41 = *(_DWORD *)(v39 + 28) - LODWORD(Component_srcLineSprite[1].fields.mFSM);
      }
      *(&v40->fields.m_state + 1) = v41;
      v65 = this->fields.targetPiecePosition.fields.y;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
      v66 = Component_srcLineSprite->fields.mcLineSprite;
      if ( !v66 )
        goto LABEL_146;
      if ( (int)mainView >= 0 )
        v67 = (int)mainView;
      else
        v67 = (_DWORD)mainView + 1;
      if ( v65 < (float)(v67 >> 1) )
      {
        LODWORD(v66->fields.leftAnchor) = 1065353216;
        v68 = Component_srcLineSprite->fields.mcMyTrans;
        if ( !v68 )
          goto LABEL_146;
        LODWORD(v68[1].klass) = 1065353216;
        v51 = Component_srcLineSprite->fields.mcLineSprite;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v51 )
          goto LABEL_146;
        TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->FS_TOP_MARGIN;
        goto LABEL_126;
      }
      LODWORD(v66->fields.leftAnchor) = 0;
      v72 = Component_srcLineSprite->fields.mcMyTrans;
      if ( !v72 )
        goto LABEL_146;
      LODWORD(v72[1].klass) = 0;
      v73 = Component_srcLineSprite->fields.mcMyTrans;
      mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
      if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
      }
      if ( !v73 )
        goto LABEL_146;
      HIDWORD(v73[1].klass) = WarBoardSimplePopup_TypeInfo->static_fields->FS_BOTTOM_MARGIN;
      v74 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( (int)mainView >= 0 )
        v75 = (int)mainView;
      else
        v75 = (_DWORD)mainView + 1;
      if ( v74 < (float)(v75 >> 1) )
        goto LABEL_141;
      v56 = Component_srcLineSprite->fields.mcMyTrans;
      if ( !v56 )
        goto LABEL_146;
      v59 = HIDWORD(v56[1].klass) - 13;
      goto LABEL_140;
    }
  }
}


void __fastcall WarBoardSimplePopup__CleanPopup(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *mainView; // x0
  int32_t v6; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_42EAB80 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB80 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_14;
  mainView = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mainView, 0LL);
  if ( !mainView )
    goto LABEL_14;
  v6 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)mainView, 0LL) - 1;
  if ( v6 >= 0 )
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
                                               v6,
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
      UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
      if ( --v6 < 0 )
        return;
    }
LABEL_14:
    sub_B5D69C(mainView, method);
  }
}


void __fastcall WarBoardSimplePopup__MainViewContentsFit(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *mainView; // x0
  UIWidget_o *Component_srcLineSprite; // x20
  int32_t v13; // w22
  int32_t v14; // w21
  int32_t i; // w23
  WebViewObject_o *Component_WebViewObject; // x24
  int onStarted_high; // w28
  struct System_Action_string__o *onStarted; // x8
  struct System_Action_string__o *onHttpError; // x8
  struct System_Action_string__o *v20; // x8
  struct System_Action_string__o *v21; // x8
  struct System_Action_string__o *v22; // x9

  if ( (byte_42EAB7E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EAB7E = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_28;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            mainView,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
          v14 = 0;
          if ( Component_srcLineSprite )
          {
LABEL_26:
            UIWidget__set_height(Component_srcLineSprite, v14, 0LL);
            return;
          }
        }
        else
        {
          v13 = (int)mainView;
          v14 = 0;
          for ( i = 0; i < v13; ++i )
          {
            mainView = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(this->fields.mainView, i, 0LL);
            if ( !mainView )
              goto LABEL_28;
            Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)mainView,
                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
              UIRect__SetAnchor_39132280((UIRect_o *)Component_WebViewObject, this->fields.mainView, 0LL);
              onStarted = Component_WebViewObject->fields.onStarted;
              if ( !onStarted )
                goto LABEL_28;
              LODWORD(onStarted->fields.m_target) = 1065353216;
              onHttpError = Component_WebViewObject->fields.onHttpError;
              if ( !onHttpError )
                goto LABEL_28;
              LODWORD(onHttpError->fields.m_target) = 1065353216;
              v20 = Component_WebViewObject->fields.onStarted;
              if ( !v20 )
                goto LABEL_28;
              HIDWORD(v20->fields.m_target) = -v14;
              v21 = Component_WebViewObject->fields.onStarted;
              if ( !v21 )
                goto LABEL_28;
              v22 = Component_WebViewObject->fields.onHttpError;
              if ( !v22 )
                goto LABEL_28;
              v14 += onStarted_high;
              HIDWORD(v22->fields.m_target) = HIDWORD(v21->fields.m_target) - onStarted_high;
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
    sub_B5D69C(mainView, method);
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