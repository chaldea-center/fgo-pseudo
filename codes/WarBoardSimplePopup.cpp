void WarBoardSimplePopup___cctor(const MethodInfo *method)
{
  struct WarBoardSimplePopup_StaticFields *static_fields; // x8

  if ( (byte_4C40C99 & 1) == 0 )
  {
    sub_1C37058(&WarBoardSimplePopup_TypeInfo);
    byte_4C40C99 = 1;
  }
  static_fields = WarBoardSimplePopup_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = xmmword_C0F0E0;
  *(_OWORD *)&static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = xmmword_C0E0B0;
}


void WarBoardSimplePopup___ctor(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4C40C98 & 1) == 0 )
  {
    sub_1C37058(&WarBoardInfoPopupBase_TypeInfo);
    byte_4C40C98 = 1;
  }
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.targetPiecePosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.targetPiecePosition.fields.z = z;
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_GameObject_o *WarBoardSimplePopup__AddElement(
        WarBoardSimplePopup_o *this,
        UnityEngine_GameObject_o *elemPrefab,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_4C40C94 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40C94 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    sub_1C372B4(0);
  transform = UnityEngine_GameObject__get_transform(mainView, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51855596(
                                       (Il2CppObject *)elemPrefab,
                                       transform,
                                       (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
}


void WarBoardSimplePopup__AdjustMainViewPosition(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  Il2CppObject *Component_object; // x19
  float x; // s8
  int v6; // w8
  _DWORD *monitor; // x21
  int v8; // w22
  _DWORD *v9; // x9
  _DWORD *klass; // x8
  int v11; // w9
  Il2CppObject *v12; // x21
  int32_t width; // w22
  int32_t height; // w23
  ManagerConfig_c *v15; // x8
  float v16; // s0
  int32_t v17; // w22
  float v18; // s8
  int v19; // w8
  _DWORD *v20; // x21
  _DWORD *v21; // x9
  _DWORD *v22; // x8
  int v23; // w9
  Il2CppClass *v24; // x21
  float y; // s8
  int v26; // w8
  Il2CppClass *v27; // x8
  Il2CppClass *v28; // x9
  float v29; // s8
  _DWORD *v30; // x21
  int v31; // w8
  Il2CppClass *v32; // x8
  _DWORD *v33; // x9
  Il2CppClass *v34; // x21
  WarBoardSimplePopup_c *v35; // x0
  float v36; // s8
  Il2CppClass *v37; // x8
  int v38; // w10
  int v39; // w10
  int v40; // w9
  Il2CppClass *v41; // x21
  float v42; // s8
  int v43; // w8
  Il2CppClass *v44; // x8
  Il2CppClass *v45; // x9
  float v46; // s8
  int v47; // w8
  Il2CppClass *v48; // x21
  WarBoardSimplePopup_c *v49; // x0
  float v50; // s8
  int v51; // w8
  int v52; // w9
  int v53; // w10
  _DWORD *v54; // x9

  if ( (byte_4C40C96 & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&WarBoardSimplePopup_TypeInfo);
    byte_4C40C96 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_130;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       mainView,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( FSUtility__IsUnderVista(0) )
    {
      x = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0);
      if ( !Component_object )
        goto LABEL_130;
      if ( (int)mainView >= 0 )
        v6 = (int)mainView;
      else
        v6 = (_DWORD)mainView + 1;
      if ( x < (float)(v6 >> 1) )
      {
        monitor = Component_object[2].monitor;
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v8 = *(_DWORD *)(mainView[7].fields.m_CachedPtr + 80);
        if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        if ( !monitor )
          goto LABEL_130;
        monitor[7] = v8 - WarBoardSimplePopup_TypeInfo->static_fields->RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v9 = Component_object[2].monitor;
        if ( !v9 )
          goto LABEL_130;
        klass = Component_object[2].klass;
        if ( !klass )
          goto LABEL_130;
        v11 = v9[7] - LODWORD(Component_object[10].monitor);
        goto LABEL_64;
      }
      v24 = Component_object[2].klass;
      mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
      if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
      if ( v24 )
      {
        HIDWORD(v24->_1.namespaze) = WarBoardSimplePopup_TypeInfo->static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( mainView )
        {
          if ( LODWORD(mainView[21].monitor) == 1 )
          {
            y = this->fields.targetPiecePosition.fields.y;
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0);
            v26 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
            if ( y >= (float)(v26 >> 1) )
            {
              v27 = Component_object[2].klass;
              if ( !v27 )
                goto LABEL_130;
              HIDWORD(v27->_1.namespaze) += 48;
            }
          }
          v28 = Component_object[2].klass;
          if ( v28 )
          {
            klass = Component_object[2].monitor;
            if ( klass )
            {
              v11 = HIDWORD(v28->_1.namespaze) + LODWORD(Component_object[10].monitor);
LABEL_64:
              klass[7] = v11;
              v29 = this->fields.targetPiecePosition.fields.y;
              mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0);
              v30 = Component_object[3].monitor;
              if ( !v30 )
                goto LABEL_130;
              if ( (int)mainView >= 0 )
                v31 = (int)mainView;
              else
                v31 = (_DWORD)mainView + 1;
              if ( v29 < (float)(v31 >> 1) )
              {
                v30[6] = 1065353216;
                v32 = Component_object[3].klass;
                if ( !v32 )
                  goto LABEL_130;
                LODWORD(v32->_1.namespaze) = 1065353216;
                mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
                if ( WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
                {
                  v33 = v30;
                }
                else
                {
                  j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
                  mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
                  v32 = Component_object[3].klass;
                  v33 = Component_object[3].monitor;
                }
                v53 = *(_DWORD *)(mainView[7].fields.m_CachedPtr + 12);
LABEL_126:
                v30[7] = -v53;
                if ( v33 && v32 )
                {
                  HIDWORD(v32->_1.namespaze) = v33[7] - HIDWORD(Component_object[10].monitor);
                  return;
                }
                goto LABEL_130;
              }
              v30[6] = 0;
              v34 = Component_object[3].klass;
              if ( !v34 )
                goto LABEL_130;
              LODWORD(v34->_1.namespaze) = 0;
              v35 = WarBoardSimplePopup_TypeInfo;
              if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
                v35 = WarBoardSimplePopup_TypeInfo;
              }
              HIDWORD(v34->_1.namespaze) = v35->static_fields->BOTTOM_MARGIN;
              mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !mainView )
                goto LABEL_130;
              if ( LODWORD(mainView[21].monitor) == 1 )
              {
                v36 = this->fields.targetPiecePosition.fields.x;
                mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0);
                v37 = Component_object[3].klass;
                if ( !v37 )
                  goto LABEL_130;
                if ( (int)mainView >= 0 )
                  v38 = (int)mainView;
                else
                  v38 = (_DWORD)mainView + 1;
                if ( v36 >= (float)(v38 >> 1) )
                  v39 = -1;
                else
                  v39 = 12;
                v40 = HIDWORD(v37->_1.namespaze) + v39;
LABEL_121:
                HIDWORD(v37->_1.namespaze) = v40;
LABEL_122:
                v54 = Component_object[3].monitor;
                if ( v54 )
                {
                  v54[7] = HIDWORD(v37->_1.namespaze) + HIDWORD(Component_object[10].monitor);
                  return;
                }
                goto LABEL_130;
              }
              v37 = Component_object[3].klass;
              goto LABEL_115;
            }
          }
        }
      }
LABEL_130:
      sub_1C372B4(mainView);
    }
    mainView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !mainView )
      goto LABEL_130;
    v12 = UnityEngine_GameObject__GetComponent_object_(
            mainView,
            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0) )
    {
      width = UnityEngine_Screen__get_width(0);
      height = UnityEngine_Screen__get_height(0);
      v15 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v15 = ManagerConfig_TypeInfo;
      }
      v16 = (float)((float)((float)width / (float)height) / 1.7778) * (float)v15->static_fields->WIDTH;
      if ( v16 == INFINITY )
        v17 = 0x80000000;
      else
        v17 = (int)v16;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      mainView = (UnityEngine_GameObject_o *)FSUtility__IsOverScope(0);
      if ( ((unsigned __int8)mainView & 1) != 0 )
      {
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v17 = *(_DWORD *)(mainView[7].fields.m_CachedPtr + 84);
      }
      if ( !v12 )
        goto LABEL_130;
      UIWidget__set_width((UIWidget_o *)v12, v17, 0);
      v18 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0);
      if ( !Component_object )
        goto LABEL_130;
      if ( (int)mainView >= 0 )
        v19 = (int)mainView;
      else
        v19 = (_DWORD)mainView + 1;
      if ( v18 >= (float)(v19 >> 1) )
      {
        v41 = Component_object[2].klass;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        if ( !v41 )
          goto LABEL_130;
        HIDWORD(v41->_1.namespaze) = WarBoardSimplePopup_TypeInfo->static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !mainView )
          goto LABEL_130;
        if ( LODWORD(mainView[21].monitor) == 1 )
        {
          v42 = this->fields.targetPiecePosition.fields.y;
          mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0);
          v43 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
          if ( v42 >= (float)(v43 >> 1) )
          {
            v44 = Component_object[2].klass;
            if ( !v44 )
              goto LABEL_130;
            HIDWORD(v44->_1.namespaze) += 52;
          }
        }
        v45 = Component_object[2].klass;
        if ( !v45 )
          goto LABEL_130;
        v22 = Component_object[2].monitor;
        if ( !v22 )
          goto LABEL_130;
        v23 = HIDWORD(v45->_1.namespaze) + LODWORD(Component_object[10].monitor);
      }
      else
      {
        v20 = Component_object[2].monitor;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        if ( !v20 )
          goto LABEL_130;
        v20[7] = v17 - WarBoardSimplePopup_TypeInfo->static_fields->FS_RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v21 = Component_object[2].monitor;
        if ( !v21 )
          goto LABEL_130;
        v22 = Component_object[2].klass;
        if ( !v22 )
          goto LABEL_130;
        v23 = v21[7] - LODWORD(Component_object[10].monitor);
      }
      v22[7] = v23;
      v46 = this->fields.targetPiecePosition.fields.y;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0);
      v30 = Component_object[3].monitor;
      if ( !v30 )
        goto LABEL_130;
      if ( (int)mainView >= 0 )
        v47 = (int)mainView;
      else
        v47 = (_DWORD)mainView + 1;
      if ( v46 < (float)(v47 >> 1) )
      {
        v30[6] = 1065353216;
        v32 = Component_object[3].klass;
        if ( !v32 )
          goto LABEL_130;
        LODWORD(v32->_1.namespaze) = 1065353216;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          v33 = v30;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
          mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
          v32 = Component_object[3].klass;
          v33 = Component_object[3].monitor;
        }
        v53 = *(_DWORD *)(mainView[7].fields.m_CachedPtr + 28);
        goto LABEL_126;
      }
      v30[6] = 0;
      v48 = Component_object[3].klass;
      if ( !v48 )
        goto LABEL_130;
      LODWORD(v48->_1.namespaze) = 0;
      v49 = WarBoardSimplePopup_TypeInfo;
      if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        v49 = WarBoardSimplePopup_TypeInfo;
      }
      HIDWORD(v48->_1.namespaze) = v49->static_fields->FS_BOTTOM_MARGIN;
      v50 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0);
      if ( (int)mainView >= 0 )
        v51 = (int)mainView;
      else
        v51 = (_DWORD)mainView + 1;
      v52 = v51 >> 1;
      v37 = Component_object[3].klass;
      if ( v50 >= (float)v52 )
      {
        if ( !v37 )
          goto LABEL_130;
        v40 = HIDWORD(v37->_1.namespaze) - 13;
        goto LABEL_121;
      }
LABEL_115:
      if ( !v37 )
        goto LABEL_130;
      goto LABEL_122;
    }
  }
}


void WarBoardSimplePopup__CleanPopup(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C40C97 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40C97 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_13;
  mainView = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mainView, 0);
  if ( !mainView )
    goto LABEL_13;
  v4 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)mainView, 0) - 1;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      mainView = this->fields.mainView;
      if ( !mainView )
        break;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mainView, 0);
      if ( !mainView )
        break;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)mainView, v4, 0);
      if ( !mainView )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainView, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(gameObject, 0);
      if ( --v4 < 0 )
        return;
    }
LABEL_13:
    sub_1C372B4(mainView);
  }
}


void WarBoardSimplePopup__MainViewContentsFit(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  Il2CppObject *Component_object; // x20
  int v5; // w22
  int32_t v6; // w21
  int32_t i; // w23
  Il2CppObject *v8; // x24
  int monitor_high; // w28
  _DWORD *monitor; // x8
  Il2CppClass *klass; // x9

  if ( (byte_4C40C95 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40C95 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_23;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       mainView,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    mainView = this->fields.mainView;
    if ( mainView )
    {
      mainView = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mainView, 0);
      if ( mainView )
      {
        mainView = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_childCount(
                                                 (UnityEngine_Transform_o *)mainView,
                                                 0);
        if ( (int)mainView < 1 )
        {
          v6 = 0;
          if ( Component_object )
          {
LABEL_21:
            UIWidget__set_height((UIWidget_o *)Component_object, v6, 0);
            return;
          }
        }
        else
        {
          v5 = (int)mainView;
          v6 = 0;
          for ( i = 0; i != v5; ++i )
          {
            mainView = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(this->fields.mainView, i, 0);
            if ( !mainView )
              goto LABEL_23;
            v8 = UnityEngine_Component__GetComponent_object_(
                   (UnityEngine_Component_o *)mainView,
                   (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
            if ( ((unsigned __int8)mainView & 1) != 0 )
            {
              if ( !v8 )
                goto LABEL_23;
              monitor_high = HIDWORD(v8[10].monitor);
              UIRect__SetAnchor_49412404((UIRect_o *)v8, this->fields.mainView, 0);
              monitor = v8[3].monitor;
              if ( !monitor )
                goto LABEL_23;
              monitor[6] = 1065353216;
              klass = v8[3].klass;
              if ( !klass )
                goto LABEL_23;
              LODWORD(klass->_1.namespaze) = 1065353216;
              monitor[7] = -v6;
              HIDWORD(klass->_1.namespaze) = -v6 - monitor_high;
              v6 += monitor_high;
              UIRect__ResetAnchors((UIRect_o *)v8, 0);
              UIRect__UpdateAnchors((UIRect_o *)v8, 0);
            }
          }
          if ( Component_object )
            goto LABEL_21;
        }
      }
    }
LABEL_23:
    sub_1C372B4(mainView);
  }
}


void WarBoardSimplePopup__OnBeforeShow(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  WarBoardInfoPopupBase__OnBeforeShow((WarBoardInfoPopupBase_o *)this, method);
  WarBoardSimplePopup__MainViewContentsFit(this, v3);
  WarBoardSimplePopup__AdjustMainViewPosition(this, v4);
}


void WarBoardSimplePopup__OnDestroy(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(WarBoardSimplePopup_o *, const MethodInfo *))this->klass->vtable._9_CleanPopup.methodPtr)(
    this,
    this->klass->vtable._9_CleanPopup.method);
}


void WarBoardSimplePopup__SetTargetPiecePosition(
        WarBoardSimplePopup_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  this->fields.targetPiecePosition = pos;
}