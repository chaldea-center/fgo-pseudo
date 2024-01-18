void __fastcall WarBoardSimplePopup___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardSimplePopup_c *v2; // x8

  if ( (byte_41892A2 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardSimplePopup_TypeInfo, v1);
    byte_41892A2 = 1;
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
  if ( (byte_41892A1 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardInfoPopupBase_TypeInfo, method);
    byte_41892A1 = 1;
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

  if ( (byte_418929D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, elemPrefab);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418929D = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    sub_B2C434(0LL, elemPrefab);
  transform = UnityEngine_GameObject__get_transform(mainView, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                       (UILabel_o *)elemPrefab,
                                       transform,
                                       (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
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
  int v11; // w8
  __int64 v12; // x21
  int v13; // w22
  __int64 v14; // x9
  struct CStateManager_srcLineSprite__o *mFSM; // x8
  int v16; // w9
  UIWidget_o *v17; // x21
  int32_t width; // w22
  int32_t height; // w23
  ManagerConfig_c *v20; // x8
  float v21; // s0
  double v22; // d0
  int32_t v23; // w22
  float v24; // s8
  int v25; // w8
  __int64 v26; // x21
  __int64 v27; // x9
  struct CStateManager_srcLineSprite__o *v28; // x8
  int v29; // w9
  struct CStateManager_srcLineSprite__o *v30; // x21
  float y; // s8
  int v32; // w8
  struct CStateManager_srcLineSprite__o *v33; // x8
  struct CStateManager_srcLineSprite__o *v34; // x9
  float v35; // s8
  struct UISprite_o *mcLineSprite; // x8
  int v37; // w9
  struct UnityEngine_Transform_o *mcMyTrans; // x8
  struct UISprite_o *v39; // x20
  int32_t TOP_MARGIN; // w8
  struct UnityEngine_Transform_o *v41; // x8
  struct UnityEngine_Transform_o *v42; // x21
  float v43; // s8
  struct UnityEngine_Transform_o *v44; // x8
  int v45; // w10
  int v46; // w10
  int v47; // w9
  struct CStateManager_srcLineSprite__o *v48; // x21
  float v49; // s8
  int v50; // w8
  struct CStateManager_srcLineSprite__o *v51; // x8
  struct CStateManager_srcLineSprite__o *v52; // x9
  float v53; // s8
  struct UISprite_o *v54; // x8
  int v55; // w9
  struct UnityEngine_Transform_o *v56; // x8
  struct UISprite_o *v57; // x8
  _DWORD *v58; // x9
  int v59; // w8
  struct UnityEngine_Transform_o *v60; // x8
  struct UnityEngine_Transform_o *v61; // x21
  float v62; // s8
  int v63; // w8
  struct UnityEngine_Transform_o *v64; // x8

  if ( (byte_418929F & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B2C35C(&WarBoardSimplePopup_TypeInfo, v7);
    byte_418929F = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_146;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              mainView,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        v11 = (int)mainView;
      else
        v11 = (_DWORD)mainView + 1;
      if ( x < (float)(v11 >> 1) )
      {
        v12 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v13 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 80LL);
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v12 )
          goto LABEL_146;
        *(_DWORD *)(v12 + 28) = v13
                              - WarBoardSimplePopup_TypeInfo->static_fields->RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v14 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v14 )
          goto LABEL_146;
        mFSM = Component_srcLineSprite->fields.mFSM;
        if ( !mFSM )
          goto LABEL_146;
        v16 = *(_DWORD *)(v14 + 28) - LODWORD(Component_srcLineSprite[1].fields.mFSM);
        goto LABEL_74;
      }
      v30 = Component_srcLineSprite->fields.mFSM;
      mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
      if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
      }
      if ( v30 )
      {
        *(&v30->fields.m_state + 1) = WarBoardSimplePopup_TypeInfo->static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( mainView )
        {
          if ( LODWORD(mainView[21].klass) == 1 )
          {
            y = this->fields.targetPiecePosition.fields.y;
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
            v32 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
            if ( y >= (float)(v32 >> 1) )
            {
              v33 = Component_srcLineSprite->fields.mFSM;
              if ( !v33 )
                goto LABEL_146;
              *(&v33->fields.m_state + 1) += 48;
            }
          }
          v34 = Component_srcLineSprite->fields.mFSM;
          if ( v34 )
          {
            mFSM = *(struct CStateManager_srcLineSprite__o **)&Component_srcLineSprite->fields.mtIsUpdate;
            if ( mFSM )
            {
              v16 = *(&v34->fields.m_state + 1) + LODWORD(Component_srcLineSprite[1].fields.mFSM);
LABEL_74:
              *(&mFSM->fields.m_state + 1) = v16;
              v35 = this->fields.targetPiecePosition.fields.y;
              mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
              mcLineSprite = Component_srcLineSprite->fields.mcLineSprite;
              if ( !mcLineSprite )
                goto LABEL_146;
              if ( (int)mainView >= 0 )
                v37 = (int)mainView;
              else
                v37 = (_DWORD)mainView + 1;
              if ( v35 < (float)(v37 >> 1) )
              {
                LODWORD(mcLineSprite->fields.leftAnchor) = 1065353216;
                mcMyTrans = Component_srcLineSprite->fields.mcMyTrans;
                if ( !mcMyTrans )
                  goto LABEL_146;
                LODWORD(mcMyTrans[1].klass) = 1065353216;
                v39 = Component_srcLineSprite->fields.mcLineSprite;
                mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
                if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
                }
                if ( !v39 )
                  goto LABEL_146;
                TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->TOP_MARGIN;
LABEL_126:
                HIDWORD(v39->fields.leftAnchor) = -TOP_MARGIN;
                v57 = Component_srcLineSprite->fields.mcLineSprite;
                if ( v57 )
                {
                  v58 = Component_srcLineSprite->fields.mcMyTrans;
                  if ( v58 )
                  {
                    v59 = HIDWORD(v57->fields.leftAnchor) - HIDWORD(Component_srcLineSprite[1].fields.mFSM);
LABEL_144:
                    v58[7] = v59;
                    return;
                  }
                }
                goto LABEL_146;
              }
              LODWORD(mcLineSprite->fields.leftAnchor) = 0;
              v41 = Component_srcLineSprite->fields.mcMyTrans;
              if ( !v41 )
                goto LABEL_146;
              LODWORD(v41[1].klass) = 0;
              v42 = Component_srcLineSprite->fields.mcMyTrans;
              mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
              if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
              }
              if ( !v42 )
                goto LABEL_146;
              HIDWORD(v42[1].klass) = WarBoardSimplePopup_TypeInfo->static_fields->BOTTOM_MARGIN;
              mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !mainView )
                goto LABEL_146;
              if ( LODWORD(mainView[21].klass) != 1 )
                goto LABEL_141;
              v43 = this->fields.targetPiecePosition.fields.x;
              mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
              v44 = Component_srcLineSprite->fields.mcMyTrans;
              if ( !v44 )
                goto LABEL_146;
              if ( (int)mainView >= 0 )
                v45 = (int)mainView;
              else
                v45 = (_DWORD)mainView + 1;
              if ( v43 >= (float)(v45 >> 1) )
                v46 = -1;
              else
                v46 = 12;
              v47 = HIDWORD(v44[1].klass) + v46;
LABEL_140:
              HIDWORD(v44[1].klass) = v47;
LABEL_141:
              v64 = Component_srcLineSprite->fields.mcMyTrans;
              if ( v64 )
              {
                v58 = Component_srcLineSprite->fields.mcLineSprite;
                if ( v58 )
                {
                  v59 = HIDWORD(v64[1].klass) + HIDWORD(Component_srcLineSprite[1].fields.mFSM);
                  goto LABEL_144;
                }
              }
            }
          }
        }
      }
LABEL_146:
      sub_B2C434(mainView, method);
    }
    mainView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !mainView )
      goto LABEL_146;
    v17 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          mainView,
                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
    {
      width = UnityEngine_Screen__get_width(0LL);
      height = UnityEngine_Screen__get_height(0LL);
      v20 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v20 = ManagerConfig_TypeInfo;
      }
      v21 = (float)((float)((float)width / (float)height) / 1.7778) * (float)v20->static_fields->WIDTH;
      if ( v21 == INFINITY )
        v22 = -v21;
      else
        v22 = v21;
      v23 = (int)v22;
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
        v23 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 84LL);
      }
      if ( !v17 )
        goto LABEL_146;
      UIWidget__set_width(v17, v23, 0LL);
      v24 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_146;
      if ( (int)mainView >= 0 )
        v25 = (int)mainView;
      else
        v25 = (_DWORD)mainView + 1;
      if ( v24 >= (float)(v25 >> 1) )
      {
        v48 = Component_srcLineSprite->fields.mFSM;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v48 )
          goto LABEL_146;
        *(&v48->fields.m_state + 1) = WarBoardSimplePopup_TypeInfo->static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !mainView )
          goto LABEL_146;
        if ( LODWORD(mainView[21].klass) == 1 )
        {
          v49 = this->fields.targetPiecePosition.fields.y;
          mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
          v50 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
          if ( v49 >= (float)(v50 >> 1) )
          {
            v51 = Component_srcLineSprite->fields.mFSM;
            if ( !v51 )
              goto LABEL_146;
            *(&v51->fields.m_state + 1) += 52;
          }
        }
        v52 = Component_srcLineSprite->fields.mFSM;
        if ( !v52 )
          goto LABEL_146;
        v28 = *(struct CStateManager_srcLineSprite__o **)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v28 )
          goto LABEL_146;
        v29 = *(&v52->fields.m_state + 1) + LODWORD(Component_srcLineSprite[1].fields.mFSM);
      }
      else
      {
        v26 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v26 )
          goto LABEL_146;
        *(_DWORD *)(v26 + 28) = v23
                              - WarBoardSimplePopup_TypeInfo->static_fields->FS_RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v27 = *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate;
        if ( !v27 )
          goto LABEL_146;
        v28 = Component_srcLineSprite->fields.mFSM;
        if ( !v28 )
          goto LABEL_146;
        v29 = *(_DWORD *)(v27 + 28) - LODWORD(Component_srcLineSprite[1].fields.mFSM);
      }
      *(&v28->fields.m_state + 1) = v29;
      v53 = this->fields.targetPiecePosition.fields.y;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
      v54 = Component_srcLineSprite->fields.mcLineSprite;
      if ( !v54 )
        goto LABEL_146;
      if ( (int)mainView >= 0 )
        v55 = (int)mainView;
      else
        v55 = (_DWORD)mainView + 1;
      if ( v53 < (float)(v55 >> 1) )
      {
        LODWORD(v54->fields.leftAnchor) = 1065353216;
        v56 = Component_srcLineSprite->fields.mcMyTrans;
        if ( !v56 )
          goto LABEL_146;
        LODWORD(v56[1].klass) = 1065353216;
        v39 = Component_srcLineSprite->fields.mcLineSprite;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        }
        if ( !v39 )
          goto LABEL_146;
        TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->FS_TOP_MARGIN;
        goto LABEL_126;
      }
      LODWORD(v54->fields.leftAnchor) = 0;
      v60 = Component_srcLineSprite->fields.mcMyTrans;
      if ( !v60 )
        goto LABEL_146;
      LODWORD(v60[1].klass) = 0;
      v61 = Component_srcLineSprite->fields.mcMyTrans;
      mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
      if ( (BYTE3(WarBoardSimplePopup_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
      }
      if ( !v61 )
        goto LABEL_146;
      HIDWORD(v61[1].klass) = WarBoardSimplePopup_TypeInfo->static_fields->FS_BOTTOM_MARGIN;
      v62 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( (int)mainView >= 0 )
        v63 = (int)mainView;
      else
        v63 = (_DWORD)mainView + 1;
      if ( v62 < (float)(v63 >> 1) )
        goto LABEL_141;
      v44 = Component_srcLineSprite->fields.mcMyTrans;
      if ( !v44 )
        goto LABEL_146;
      v47 = HIDWORD(v44[1].klass) - 13;
      goto LABEL_140;
    }
  }
}


void __fastcall WarBoardSimplePopup__CleanPopup(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_41892A0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41892A0 = 1;
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
      UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
      if ( --v4 < 0 )
        return;
    }
LABEL_14:
    sub_B2C434(mainView, method);
  }
}


void __fastcall WarBoardSimplePopup__MainViewContentsFit(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *mainView; // x0
  UIWidget_o *Component_srcLineSprite; // x20
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t i; // w23
  WebViewObject_o *Component_WebViewObject; // x24
  int onStarted_high; // w28
  struct System_Action_string__o *onStarted; // x8
  struct System_Action_string__o *onHttpError; // x8
  struct System_Action_string__o *v14; // x8
  struct System_Action_string__o *v15; // x8
  struct System_Action_string__o *v16; // x9

  if ( (byte_418929E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418929E = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_28;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            mainView,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
          v8 = 0;
          if ( Component_srcLineSprite )
          {
LABEL_26:
            UIWidget__set_height(Component_srcLineSprite, v8, 0LL);
            return;
          }
        }
        else
        {
          v7 = (int)mainView;
          v8 = 0;
          for ( i = 0; i < v7; ++i )
          {
            mainView = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(this->fields.mainView, i, 0LL);
            if ( !mainView )
              goto LABEL_28;
            Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)mainView,
                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
              UIRect__SetAnchor_37816404((UIRect_o *)Component_WebViewObject, this->fields.mainView, 0LL);
              onStarted = Component_WebViewObject->fields.onStarted;
              if ( !onStarted )
                goto LABEL_28;
              LODWORD(onStarted->fields.m_target) = 1065353216;
              onHttpError = Component_WebViewObject->fields.onHttpError;
              if ( !onHttpError )
                goto LABEL_28;
              LODWORD(onHttpError->fields.m_target) = 1065353216;
              v14 = Component_WebViewObject->fields.onStarted;
              if ( !v14 )
                goto LABEL_28;
              HIDWORD(v14->fields.m_target) = -v8;
              v15 = Component_WebViewObject->fields.onStarted;
              if ( !v15 )
                goto LABEL_28;
              v16 = Component_WebViewObject->fields.onHttpError;
              if ( !v16 )
                goto LABEL_28;
              v8 += onStarted_high;
              HIDWORD(v16->fields.m_target) = HIDWORD(v15->fields.m_target) - onStarted_high;
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
    sub_B2C434(mainView, method);
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