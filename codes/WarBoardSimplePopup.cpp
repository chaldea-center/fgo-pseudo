void __fastcall WarBoardSimplePopup___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct WarBoardSimplePopup_StaticFields *static_fields; // x8

  if ( (byte_49B8CC8 & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardSimplePopup_TypeInfo, v1);
    byte_49B8CC8 = 1;
  }
  static_fields = WarBoardSimplePopup_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = xmmword_BAA650;
  *(_OWORD *)&static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = xmmword_BA97A0;
}


void __fastcall WarBoardSimplePopup___ctor(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_49B8CC7 & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardInfoPopupBase_TypeInfo, method);
    byte_49B8CC7 = 1;
  }
  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, method);
    byte_49B5361 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.targetPiecePosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.targetPiecePosition.fields.z = z;
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardSimplePopup__AddElement(
        WarBoardSimplePopup_o *this,
        UnityEngine_GameObject_o *elemPrefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *mainView; // x0
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_49B8CC3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, elemPrefab);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B8CC3 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    sub_1B4D1EC(0LL, elemPrefab);
  transform = UnityEngine_GameObject__get_transform(mainView, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49839864(
                                       (Il2CppObject *)elemPrefab,
                                       transform,
                                       (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
}


void __fastcall WarBoardSimplePopup__AdjustMainViewPosition(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *mainView; // x0
  Il2CppObject *Component_object; // x19
  float x; // s8
  int v11; // w8
  _DWORD *monitor; // x21
  int v13; // w22
  _DWORD *v14; // x9
  _DWORD *klass; // x8
  int v16; // w9
  Il2CppObject *v17; // x21
  int32_t width; // w22
  int32_t height; // w23
  ManagerConfig_c *v20; // x8
  float v21; // s0
  int32_t v22; // w22
  float v23; // s8
  int v24; // w8
  _DWORD *v25; // x21
  _DWORD *v26; // x9
  _DWORD *v27; // x8
  int v28; // w9
  Il2CppClass *v29; // x21
  float y; // s8
  int v31; // w8
  Il2CppClass *v32; // x8
  Il2CppClass *v33; // x9
  float v34; // s8
  _DWORD *v35; // x21
  int v36; // w8
  Il2CppClass *v37; // x8
  _DWORD *v38; // x9
  Il2CppClass *v39; // x21
  WarBoardSimplePopup_c *v40; // x0
  float v41; // s8
  Il2CppClass *v42; // x8
  int v43; // w10
  int v44; // w10
  int v45; // w9
  Il2CppClass *v46; // x21
  float v47; // s8
  int v48; // w8
  Il2CppClass *v49; // x8
  Il2CppClass *v50; // x9
  float v51; // s8
  int v52; // w8
  Il2CppClass *v53; // x21
  WarBoardSimplePopup_c *v54; // x0
  float v55; // s8
  int v56; // w8
  int v57; // w9
  int v58; // w10
  _DWORD *v59; // x9

  if ( (byte_49B8CC5 & 1) == 0 )
  {
    sub_1B4CF90(&FSUtility_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_1B4CF90(&ManagerConfig_TypeInfo, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B4CF90(&WarBoardSimplePopup_TypeInfo, v7);
    byte_49B8CC5 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_130;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       mainView,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( FSUtility__IsUnderVista(0LL) )
    {
      x = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( !Component_object )
        goto LABEL_130;
      if ( (int)mainView >= 0 )
        v11 = (int)mainView;
      else
        v11 = (_DWORD)mainView + 1;
      if ( x < (float)(v11 >> 1) )
      {
        monitor = Component_object[2].monitor;
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v13 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 80LL);
        if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        if ( !monitor )
          goto LABEL_130;
        monitor[7] = v13 - WarBoardSimplePopup_TypeInfo->static_fields->RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v14 = Component_object[2].monitor;
        if ( !v14 )
          goto LABEL_130;
        klass = Component_object[2].klass;
        if ( !klass )
          goto LABEL_130;
        v16 = v14[7] - LODWORD(Component_object[10].monitor);
        goto LABEL_64;
      }
      v29 = Component_object[2].klass;
      mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
      if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
      if ( v29 )
      {
        HIDWORD(v29->_1.namespaze) = WarBoardSimplePopup_TypeInfo->static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( mainView )
        {
          if ( LODWORD(mainView[21].monitor) == 1 )
          {
            y = this->fields.targetPiecePosition.fields.y;
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
            v31 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
            if ( y >= (float)(v31 >> 1) )
            {
              v32 = Component_object[2].klass;
              if ( !v32 )
                goto LABEL_130;
              HIDWORD(v32->_1.namespaze) += 48;
            }
          }
          v33 = Component_object[2].klass;
          if ( v33 )
          {
            klass = Component_object[2].monitor;
            if ( klass )
            {
              v16 = HIDWORD(v33->_1.namespaze) + LODWORD(Component_object[10].monitor);
LABEL_64:
              klass[7] = v16;
              v34 = this->fields.targetPiecePosition.fields.y;
              mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
              v35 = Component_object[3].monitor;
              if ( !v35 )
                goto LABEL_130;
              if ( (int)mainView >= 0 )
                v36 = (int)mainView;
              else
                v36 = (_DWORD)mainView + 1;
              if ( v34 < (float)(v36 >> 1) )
              {
                v35[6] = 1065353216;
                v37 = Component_object[3].klass;
                if ( !v37 )
                  goto LABEL_130;
                LODWORD(v37->_1.namespaze) = 1065353216;
                mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
                if ( WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
                {
                  v38 = v35;
                }
                else
                {
                  j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
                  mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
                  v37 = Component_object[3].klass;
                  v38 = Component_object[3].monitor;
                }
                v58 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 12LL);
LABEL_126:
                v35[7] = -v58;
                if ( v38 && v37 )
                {
                  HIDWORD(v37->_1.namespaze) = v38[7] - HIDWORD(Component_object[10].monitor);
                  return;
                }
                goto LABEL_130;
              }
              v35[6] = 0;
              v39 = Component_object[3].klass;
              if ( !v39 )
                goto LABEL_130;
              LODWORD(v39->_1.namespaze) = 0;
              v40 = WarBoardSimplePopup_TypeInfo;
              if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
                v40 = WarBoardSimplePopup_TypeInfo;
              }
              HIDWORD(v39->_1.namespaze) = v40->static_fields->BOTTOM_MARGIN;
              mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !mainView )
                goto LABEL_130;
              if ( LODWORD(mainView[21].monitor) == 1 )
              {
                v41 = this->fields.targetPiecePosition.fields.x;
                mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
                v42 = Component_object[3].klass;
                if ( !v42 )
                  goto LABEL_130;
                if ( (int)mainView >= 0 )
                  v43 = (int)mainView;
                else
                  v43 = (_DWORD)mainView + 1;
                if ( v41 >= (float)(v43 >> 1) )
                  v44 = -1;
                else
                  v44 = 12;
                v45 = HIDWORD(v42->_1.namespaze) + v44;
LABEL_121:
                HIDWORD(v42->_1.namespaze) = v45;
LABEL_122:
                v59 = Component_object[3].monitor;
                if ( v59 )
                {
                  v59[7] = HIDWORD(v42->_1.namespaze) + HIDWORD(Component_object[10].monitor);
                  return;
                }
                goto LABEL_130;
              }
              v42 = Component_object[3].klass;
              goto LABEL_115;
            }
          }
        }
      }
LABEL_130:
      sub_1B4D1EC(mainView, method);
    }
    mainView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !mainView )
      goto LABEL_130;
    v17 = UnityEngine_GameObject__GetComponent_object_(
            mainView,
            (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
    {
      width = UnityEngine_Screen__get_width(0LL);
      height = UnityEngine_Screen__get_height(0LL);
      v20 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v20 = ManagerConfig_TypeInfo;
      }
      v21 = (float)((float)((float)width / (float)height) / 1.7778) * (float)v20->static_fields->WIDTH;
      if ( v21 == INFINITY )
        v22 = 0x80000000;
      else
        v22 = (int)v21;
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      mainView = (UnityEngine_GameObject_o *)FSUtility__IsOverScope(0LL);
      if ( ((unsigned __int8)mainView & 1) != 0 )
      {
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v22 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 84LL);
      }
      if ( !v17 )
        goto LABEL_130;
      UIWidget__set_width((UIWidget_o *)v17, v22, 0LL);
      v23 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( !Component_object )
        goto LABEL_130;
      if ( (int)mainView >= 0 )
        v24 = (int)mainView;
      else
        v24 = (_DWORD)mainView + 1;
      if ( v23 >= (float)(v24 >> 1) )
      {
        v46 = Component_object[2].klass;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        if ( !v46 )
          goto LABEL_130;
        HIDWORD(v46->_1.namespaze) = WarBoardSimplePopup_TypeInfo->static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
        mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !mainView )
          goto LABEL_130;
        if ( LODWORD(mainView[21].monitor) == 1 )
        {
          v47 = this->fields.targetPiecePosition.fields.y;
          mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
          v48 = (int)mainView >= 0 ? (int)mainView : (_DWORD)mainView + 1;
          if ( v47 >= (float)(v48 >> 1) )
          {
            v49 = Component_object[2].klass;
            if ( !v49 )
              goto LABEL_130;
            HIDWORD(v49->_1.namespaze) += 52;
          }
        }
        v50 = Component_object[2].klass;
        if ( !v50 )
          goto LABEL_130;
        v27 = Component_object[2].monitor;
        if ( !v27 )
          goto LABEL_130;
        v28 = HIDWORD(v50->_1.namespaze) + LODWORD(Component_object[10].monitor);
      }
      else
      {
        v25 = Component_object[2].monitor;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        if ( !v25 )
          goto LABEL_130;
        v25[7] = v22 - WarBoardSimplePopup_TypeInfo->static_fields->FS_RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        v26 = Component_object[2].monitor;
        if ( !v26 )
          goto LABEL_130;
        v27 = Component_object[2].klass;
        if ( !v27 )
          goto LABEL_130;
        v28 = v26[7] - LODWORD(Component_object[10].monitor);
      }
      v27[7] = v28;
      v51 = this->fields.targetPiecePosition.fields.y;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0LL);
      v35 = Component_object[3].monitor;
      if ( !v35 )
        goto LABEL_130;
      if ( (int)mainView >= 0 )
        v52 = (int)mainView;
      else
        v52 = (_DWORD)mainView + 1;
      if ( v51 < (float)(v52 >> 1) )
      {
        v35[6] = 1065353216;
        v37 = Component_object[3].klass;
        if ( !v37 )
          goto LABEL_130;
        LODWORD(v37->_1.namespaze) = 1065353216;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
        {
          v38 = v35;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
          mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
          v37 = Component_object[3].klass;
          v38 = Component_object[3].monitor;
        }
        v58 = *(_DWORD *)(*(_QWORD *)&mainView[7].fields.m_CachedPtr + 28LL);
        goto LABEL_126;
      }
      v35[6] = 0;
      v53 = Component_object[3].klass;
      if ( !v53 )
        goto LABEL_130;
      LODWORD(v53->_1.namespaze) = 0;
      v54 = WarBoardSimplePopup_TypeInfo;
      if ( !WarBoardSimplePopup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo);
        v54 = WarBoardSimplePopup_TypeInfo;
      }
      HIDWORD(v53->_1.namespaze) = v54->static_fields->FS_BOTTOM_MARGIN;
      v55 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0LL);
      if ( (int)mainView >= 0 )
        v56 = (int)mainView;
      else
        v56 = (_DWORD)mainView + 1;
      v57 = v56 >> 1;
      v42 = Component_object[3].klass;
      if ( v55 >= (float)v57 )
      {
        if ( !v42 )
          goto LABEL_130;
        v45 = HIDWORD(v42->_1.namespaze) - 13;
        goto LABEL_121;
      }
LABEL_115:
      if ( !v42 )
        goto LABEL_130;
      goto LABEL_122;
    }
  }
}


void __fastcall WarBoardSimplePopup__CleanPopup(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_49B8CC6 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B8CC6 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_13;
  mainView = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mainView, 0LL);
  if ( !mainView )
    goto LABEL_13;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_68804644(gameObject, 0LL);
      if ( --v4 < 0 )
        return;
    }
LABEL_13:
    sub_1B4D1EC(mainView, method);
  }
}


void __fastcall WarBoardSimplePopup__MainViewContentsFit(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *mainView; // x0
  Il2CppObject *Component_object; // x20
  int v7; // w22
  int32_t v8; // w21
  int32_t i; // w23
  Il2CppObject *v10; // x24
  int monitor_high; // w28
  _DWORD *monitor; // x8
  Il2CppClass *klass; // x9

  if ( (byte_49B8CC4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    byte_49B8CC4 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_23;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       mainView,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v8 = 0;
          if ( Component_object )
          {
LABEL_21:
            UIWidget__set_height((UIWidget_o *)Component_object, v8, 0LL);
            return;
          }
        }
        else
        {
          v7 = (int)mainView;
          v8 = 0;
          for ( i = 0; i != v7; ++i )
          {
            mainView = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(this->fields.mainView, i, 0LL);
            if ( !mainView )
              goto LABEL_23;
            v10 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)mainView,
                    (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v10,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)mainView & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_23;
              monitor_high = HIDWORD(v10[10].monitor);
              UIRect__SetAnchor_47487188((UIRect_o *)v10, this->fields.mainView, 0LL);
              monitor = v10[3].monitor;
              if ( !monitor )
                goto LABEL_23;
              monitor[6] = 1065353216;
              klass = v10[3].klass;
              if ( !klass )
                goto LABEL_23;
              LODWORD(klass->_1.namespaze) = 1065353216;
              monitor[7] = -v8;
              HIDWORD(klass->_1.namespaze) = -v8 - monitor_high;
              v8 += monitor_high;
              UIRect__ResetAnchors((UIRect_o *)v10, 0LL);
              UIRect__UpdateAnchors((UIRect_o *)v10, 0LL);
            }
          }
          if ( Component_object )
            goto LABEL_21;
        }
      }
    }
LABEL_23:
    sub_1B4D1EC(mainView, method);
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