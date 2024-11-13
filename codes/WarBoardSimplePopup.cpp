void __fastcall WarBoardSimplePopup___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct WarBoardSimplePopup_StaticFields *static_fields; // x8

  if ( (byte_4B140D4 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardSimplePopup_TypeInfo, v1, v2);
    byte_4B140D4 = 1;
  }
  static_fields = WarBoardSimplePopup_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = xmmword_BD2E90;
  *(_OWORD *)&static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = xmmword_BD1FB0;
}


void __fastcall WarBoardSimplePopup___ctor(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4B140D3 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardInfoPopupBase_TypeInfo, method, v2);
    byte_4B140D3 = 1;
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.targetPiecePosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.targetPiecePosition.fields.z = z;
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo, method);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardSimplePopup__AddElement(
        WarBoardSimplePopup_o *this,
        UnityEngine_GameObject_o *elemPrefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *mainView; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_4B140CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, elemPrefab, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B140CF = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    sub_1BCAA3C(0LL, elemPrefab);
  transform = UnityEngine_GameObject__get_transform(mainView, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49903816(
                                       (Il2CppObject *)elemPrefab,
                                       transform,
                                       (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
}


void __fastcall WarBoardSimplePopup__AdjustMainViewPosition(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_GameObject_o *mainView; // x0
  __int64 v15; // x1
  Il2CppObject *Component_object; // x19
  __int64 v17; // x1
  float x; // s8
  int v19; // w8
  _DWORD *monitor; // x21
  int v21; // w22
  _DWORD *v22; // x9
  _DWORD *klass; // x8
  int v24; // w9
  __int64 v25; // x1
  Il2CppObject *v26; // x21
  int32_t width; // w22
  __int64 v28; // x1
  int32_t height; // w23
  ManagerConfig_c *v30; // x8
  float v31; // s0
  int32_t v32; // w22
  float v33; // s8
  int v34; // w8
  _DWORD *v35; // x21
  _DWORD *v36; // x9
  _DWORD *v37; // x8
  int v38; // w9
  Il2CppClass *v39; // x21
  float y; // s8
  int v41; // w8
  Il2CppClass *v42; // x8
  Il2CppClass *v43; // x9
  float v44; // s8
  _DWORD *v45; // x21
  int v46; // w8
  Il2CppClass *v47; // x8
  _DWORD *v48; // x9
  Il2CppClass *v49; // x21
  WarBoardSimplePopup_c *v50; // x0
  float v51; // s8
  Il2CppClass *v52; // x8
  int v53; // w10
  int v54; // w10
  int v55; // w9
  Il2CppClass *v56; // x21
  float v57; // s8
  int v58; // w8
  Il2CppClass *v59; // x8
  Il2CppClass *v60; // x9
  float v61; // s8
  int v62; // w8
  Il2CppClass *v63; // x21
  WarBoardSimplePopup_c *v64; // x0
  float v65; // s8
  int v66; // w8
  int v67; // w9
  int v68; // w10
  _DWORD *v69; // x9

  if ( (byte_4B140D1 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4, v5);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&WarBoardSimplePopup_TypeInfo, v12, v13);
    byte_4B140D1 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_130;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       mainView,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v17);
    if ( FSUtility__IsUnderVista(0LL) )
    {
      x = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( !Component_object )
        goto LABEL_130;
      if ( (int)mainView >= 0 )
        v19 = (int)mainView;
      else
        v19 = (_DWORD)mainView + 1;
      if ( x < (float)(v19 >> 1) )
      {
        monitor = Component_object[2].monitor;
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v21 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 80LL);
        if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method);
        if ( !monitor )
          goto LABEL_130;
        monitor[7] = v21 - WarBoardSimplePopup_TypeInfo->static_fields->RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v22 = Component_object[2].monitor;
        if ( !v22 )
          goto LABEL_130;
        klass = Component_object[2].klass;
        if ( !klass )
          goto LABEL_130;
        v24 = v22[7] - LODWORD(Component_object[10].monitor);
        goto LABEL_64;
      }
      v39 = Component_object[2].klass;
      mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
      if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method);
      if ( v39 )
      {
        HIDWORD(v39->_1.namespaze) = WarBoardSimplePopup_TypeInfo->static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( mainView )
        {
          if ( LODWORD(mainView[21].monitor) == 1 )
          {
            y = this->fields.targetPiecePosition.fields.y;
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
            v41 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
            if ( y >= (float)(v41 >> 1) )
            {
              v42 = Component_object[2].klass;
              if ( !v42 )
                goto LABEL_130;
              HIDWORD(v42->_1.namespaze) += 48;
            }
          }
          v43 = Component_object[2].klass;
          if ( v43 )
          {
            klass = Component_object[2].monitor;
            if ( klass )
            {
              v24 = HIDWORD(v43->_1.namespaze) + LODWORD(Component_object[10].monitor);
LABEL_64:
              klass[7] = v24;
              v44 = this->fields.targetPiecePosition.fields.y;
              mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
              v45 = Component_object[3].monitor;
              if ( !v45 )
                goto LABEL_130;
              if ( (int)mainView >= 0 )
                v46 = (int)mainView;
              else
                v46 = (_DWORD)mainView + 1;
              if ( v44 < (float)(v46 >> 1) )
              {
                v45[6] = 1065353216;
                v47 = Component_object[3].klass;
                if ( !v47 )
                  goto LABEL_130;
                LODWORD(v47->_1.namespaze) = 1065353216;
                mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
                if ( WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
                {
                  v48 = v45;
                }
                else
                {
                  j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method);
                  mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
                  v47 = Component_object[3].klass;
                  v48 = Component_object[3].monitor;
                }
                v68 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 12LL);
LABEL_126:
                v45[7] = -v68;
                if ( v48 && v47 )
                {
                  HIDWORD(v47->_1.namespaze) = v48[7] - HIDWORD(Component_object[10].monitor);
                  return;
                }
                goto LABEL_130;
              }
              v45[6] = 0;
              v49 = Component_object[3].klass;
              if ( !v49 )
                goto LABEL_130;
              LODWORD(v49->_1.namespaze) = 0;
              v50 = WarBoardSimplePopup_TypeInfo;
              if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method);
                v50 = WarBoardSimplePopup_TypeInfo;
              }
              HIDWORD(v49->_1.namespaze) = v50->static_fields->BOTTOM_MARGIN;
              mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !mainView )
                goto LABEL_130;
              if ( LODWORD(mainView[21].monitor) == 1 )
              {
                v51 = this->fields.targetPiecePosition.fields.x;
                mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
                v52 = Component_object[3].klass;
                if ( !v52 )
                  goto LABEL_130;
                if ( (int)mainView >= 0 )
                  v53 = (int)mainView;
                else
                  v53 = (_DWORD)mainView + 1;
                if ( v51 >= (float)(v53 >> 1) )
                  v54 = -1;
                else
                  v54 = 12;
                v55 = HIDWORD(v52->_1.namespaze) + v54;
LABEL_121:
                HIDWORD(v52->_1.namespaze) = v55;
LABEL_122:
                v69 = Component_object[3].monitor;
                if ( v69 )
                {
                  v69[7] = HIDWORD(v52->_1.namespaze) + HIDWORD(Component_object[10].monitor);
                  return;
                }
                goto LABEL_130;
              }
              v52 = Component_object[3].klass;
              goto LABEL_115;
            }
          }
        }
      }
LABEL_130:
      sub_1BCAA3C(mainView, method);
    }
    mainView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !mainView )
      goto LABEL_130;
    v26 = UnityEngine_GameObject__GetComponent_object_(
            mainView,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v26, 0LL, 0LL) )
    {
      width = UnityEngine_Screen__get_width(0LL);
      height = UnityEngine_Screen__get_height(0LL);
      v30 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v28);
        v30 = ManagerConfig_TypeInfo;
      }
      v31 = (float)((float)((float)width / (float)height) / 1.7778) * (float)v30->static_fields->WIDTH;
      if ( v31 == INFINITY )
        v32 = 0x80000000;
      else
        v32 = (int)v31;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v28);
      mainView = (UnityEngine_GameObject_o *)FSUtility__IsOverScope(0LL);
      if ( ((unsigned __int8)mainView & 1) != 0 )
      {
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v32 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 84LL);
      }
      if ( !v26 )
        goto LABEL_130;
      UIWidget__set_width((UIWidget_o *)v26, v32, 0LL);
      v33 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( !Component_object )
        goto LABEL_130;
      if ( (int)mainView >= 0 )
        v34 = (int)mainView;
      else
        v34 = (_DWORD)mainView + 1;
      if ( v33 >= (float)(v34 >> 1) )
      {
        v56 = Component_object[2].klass;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method);
        if ( !v56 )
          goto LABEL_130;
        HIDWORD(v56->_1.namespaze) = WarBoardSimplePopup_TypeInfo->static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !mainView )
          goto LABEL_130;
        if ( LODWORD(mainView[21].monitor) == 1 )
        {
          v57 = this->fields.targetPiecePosition.fields.y;
          mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
          v58 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
          if ( v57 >= (float)(v58 >> 1) )
          {
            v59 = Component_object[2].klass;
            if ( !v59 )
              goto LABEL_130;
            HIDWORD(v59->_1.namespaze) += 52;
          }
        }
        v60 = Component_object[2].klass;
        if ( !v60 )
          goto LABEL_130;
        v37 = Component_object[2].monitor;
        if ( !v37 )
          goto LABEL_130;
        v38 = HIDWORD(v60->_1.namespaze) + LODWORD(Component_object[10].monitor);
      }
      else
      {
        v35 = Component_object[2].monitor;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method);
        if ( !v35 )
          goto LABEL_130;
        v35[7] = v32 - WarBoardSimplePopup_TypeInfo->static_fields->FS_RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v36 = Component_object[2].monitor;
        if ( !v36 )
          goto LABEL_130;
        v37 = Component_object[2].klass;
        if ( !v37 )
          goto LABEL_130;
        v38 = v36[7] - LODWORD(Component_object[10].monitor);
      }
      v37[7] = v38;
      v61 = this->fields.targetPiecePosition.fields.y;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
      v45 = Component_object[3].monitor;
      if ( !v45 )
        goto LABEL_130;
      if ( (int)mainView >= 0 )
        v62 = (int)mainView;
      else
        v62 = (_DWORD)mainView + 1;
      if ( v61 < (float)(v62 >> 1) )
      {
        v45[6] = 1065353216;
        v47 = Component_object[3].klass;
        if ( !v47 )
          goto LABEL_130;
        LODWORD(v47->_1.namespaze) = 1065353216;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          v48 = v45;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method);
          mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
          v47 = Component_object[3].klass;
          v48 = Component_object[3].monitor;
        }
        v68 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 28LL);
        goto LABEL_126;
      }
      v45[6] = 0;
      v63 = Component_object[3].klass;
      if ( !v63 )
        goto LABEL_130;
      LODWORD(v63->_1.namespaze) = 0;
      v64 = WarBoardSimplePopup_TypeInfo;
      if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method);
        v64 = WarBoardSimplePopup_TypeInfo;
      }
      HIDWORD(v63->_1.namespaze) = v64->static_fields->FS_BOTTOM_MARGIN;
      v65 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( (int)mainView >= 0 )
        v66 = (int)mainView;
      else
        v66 = (_DWORD)mainView + 1;
      v67 = v66 >> 1;
      v52 = Component_object[3].klass;
      if ( v65 >= (float)v67 )
      {
        if ( !v52 )
          goto LABEL_130;
        v55 = HIDWORD(v52->_1.namespaze) - 13;
        goto LABEL_121;
      }
LABEL_115:
      if ( !v52 )
        goto LABEL_130;
      goto LABEL_122;
    }
  }
}


void __fastcall WarBoardSimplePopup__CleanPopup(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *mainView; // x0
  int32_t v5; // w20
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4B140D2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B140D2 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_13;
  mainView = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mainView, 0LL);
  if ( !mainView )
    goto LABEL_13;
  v5 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)mainView, 0LL) - 1;
  if ( v5 >= 0 )
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
                                               v5,
                                               0LL);
      if ( !mainView )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)mainView,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1BCAA3C(mainView, method);
  }
}


void __fastcall WarBoardSimplePopup__MainViewContentsFit(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *mainView; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20
  int v11; // w22
  int32_t v12; // w21
  int32_t i; // w23
  __int64 v14; // x1
  Il2CppObject *v15; // x24
  int monitor_high; // w28
  _DWORD *monitor; // x8
  Il2CppClass *klass; // x9

  if ( (byte_4B140D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B140D0 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_23;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       mainView,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
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
          v12 = 0;
          if ( Component_object )
          {
LABEL_21:
            UIWidget__set_height((UIWidget_o *)Component_object, v12, 0LL);
            return;
          }
        }
        else
        {
          v11 = (int)mainView;
          v12 = 0;
          for ( i = 0; i != v11; ++i )
          {
            mainView = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(this->fields.mainView, i, 0LL);
            if ( !mainView )
              goto LABEL_23;
            v15 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)mainView,
                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v15,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)mainView & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_23;
              monitor_high = HIDWORD(v15[10].monitor);
              UIRect__SetAnchor_47487268((UIRect_o *)v15, this->fields.mainView, 0LL);
              monitor = v15[3].monitor;
              if ( !monitor )
                goto LABEL_23;
              monitor[6] = 1065353216;
              klass = v15[3].klass;
              if ( !klass )
                goto LABEL_23;
              LODWORD(klass->_1.namespaze) = 1065353216;
              monitor[7] = -v12;
              HIDWORD(klass->_1.namespaze) = -v12 - monitor_high;
              v12 += monitor_high;
              UIRect__ResetAnchors((UIRect_o *)v15, 0LL);
              UIRect__UpdateAnchors((UIRect_o *)v15, 0LL);
            }
          }
          if ( Component_object )
            goto LABEL_21;
        }
      }
    }
LABEL_23:
    sub_1BCAA3C(mainView, method);
  }
}


void __fastcall WarBoardSimplePopup__OnBeforeShow(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  WarBoardInfoPopupBase__OnBeforeShow((WarBoardInfoPopupBase_o *)this, method);
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