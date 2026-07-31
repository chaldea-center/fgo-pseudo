void WarBoardSimplePopup___cctor(const MethodInfo *method)
{
  struct WarBoardSimplePopup_StaticFields *static_fields; // x8

  if ( (byte_59362A6 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardSimplePopup_TypeInfo);
    byte_59362A6 = 1;
  }
  static_fields = WarBoardSimplePopup_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = xmmword_E93060;
  *(_OWORD *)&static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE = xmmword_E93930;
}


void WarBoardSimplePopup___ctor(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardInfoPopupBase_c *v4; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_59362A5 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardInfoPopupBase_TypeInfo);
    byte_59362A5 = 1;
  }
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v4 = WarBoardInfoPopupBase_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.targetPiecePosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.targetPiecePosition.fields.z = z;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_GameObject_o *WarBoardSimplePopup__AddElement(
        WarBoardSimplePopup_o *this,
        UnityEngine_GameObject_o *elemPrefab,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_59362A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362A1 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    sub_21FFECC(0, elemPrefab);
  transform = UnityEngine_GameObject__get_transform(mainView, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__59506996(
                                       (Il2CppObject *)elemPrefab,
                                       transform,
                                       (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
}


void WarBoardSimplePopup__AdjustMainViewPosition(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  float x; // s8
  __int64 v10; // x2
  int v11; // w8
  _DWORD *monitor; // x21
  int v13; // w22
  _DWORD *v14; // x8
  _DWORD *klass; // x9
  int v16; // w8
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x21
  int32_t width; // w22
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t height; // w23
  ManagerConfig_c *v24; // x8
  float v25; // s0
  int32_t v26; // w22
  __int64 v27; // x2
  float v28; // s8
  __int64 v29; // x2
  int v30; // w8
  _DWORD *v31; // x21
  _DWORD *v32; // x8
  _DWORD *v33; // x9
  int v34; // w8
  Il2CppClass *v35; // x21
  const MethodInfo_476E8C0 *v36; // x0
  float y; // s8
  int v38; // w8
  float v39; // s0
  Il2CppClass *v40; // x8
  Il2CppClass *v41; // x21
  const MethodInfo_476E8C0 *v42; // x0
  float v43; // s8
  int v44; // w8
  float v45; // s0
  Il2CppClass *v46; // x8
  float v47; // s8
  __int64 v48; // x2
  _DWORD *v49; // x21
  int v50; // w8
  _DWORD *v51; // x8
  int32_t TOP_MARGIN; // w9
  Il2CppClass *v53; // x22
  WarBoardSimplePopup_c *v54; // x0
  int32_t BOTTOM_MARGIN; // w8
  const MethodInfo_476E8C0 *v56; // x0
  float v57; // s8
  Il2CppClass *v58; // x9
  int v59; // w8
  int v60; // w8
  int v61; // w8
  int32_t FS_TOP_MARGIN; // w10
  float v63; // s8
  __int64 v64; // x2
  int v65; // w8
  Il2CppClass *v66; // x22
  WarBoardSimplePopup_c *v67; // x0
  float v68; // s8
  int v69; // w8
  int v70; // w9
  _DWORD *v71; // x9

  if ( (byte_59362A3 & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardSimplePopup_TypeInfo);
    byte_59362A3 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_136;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       mainView,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v7, v8);
    if ( FSUtility__IsUnderVista(0) )
    {
      x = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0);
      if ( (int)mainView >= 0 )
        v11 = (int)mainView;
      else
        v11 = (_DWORD)mainView + 1;
      if ( x < (float)(v11 >> 1) )
      {
        if ( !Component_object )
          goto LABEL_136;
        monitor = Component_object[2].monitor;
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v10);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v13 = *(_DWORD *)(mainView[7].fields.m_CachedPtr + 80);
        if ( !*(&WarBoardSimplePopup_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method, v10);
        if ( !monitor )
          goto LABEL_136;
        v14 = Component_object[2].monitor;
        monitor[7] = v13 - WarBoardSimplePopup_TypeInfo->static_fields->RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        if ( !v14 )
          goto LABEL_136;
        klass = Component_object[2].klass;
        if ( !klass )
          goto LABEL_136;
        v16 = v14[7] - LODWORD(Component_object[10].monitor);
        goto LABEL_78;
      }
      if ( !Component_object )
        goto LABEL_136;
      v35 = Component_object[2].klass;
      mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
      if ( !*(&WarBoardSimplePopup_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method, v10);
      if ( !v35 )
        goto LABEL_136;
      v36 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
      HIDWORD(v35->_1.namespaze) = WarBoardSimplePopup_TypeInfo->static_fields->LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
      mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance(v36);
      if ( !mainView )
        goto LABEL_136;
      if ( LODWORD(mainView[21].monitor) == 1 )
      {
        y = this->fields.targetPiecePosition.fields.y;
        mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0);
        if ( (int)mainView >= 0 )
          v38 = (int)mainView;
        else
          v38 = (_DWORD)mainView + 1;
        v39 = (float)(v38 >> 1);
        v40 = Component_object[2].klass;
        if ( y >= v39 )
        {
          if ( !v40 )
            goto LABEL_136;
          HIDWORD(v40->_1.namespaze) += 48;
LABEL_76:
          klass = Component_object[2].monitor;
          if ( !klass )
            goto LABEL_136;
          v16 = HIDWORD(v40->_1.namespaze) + LODWORD(Component_object[10].monitor);
LABEL_78:
          v47 = this->fields.targetPiecePosition.fields.y;
          klass[7] = v16;
          mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0);
          v49 = Component_object[3].monitor;
          if ( (int)mainView >= 0 )
            v50 = (int)mainView;
          else
            v50 = (_DWORD)mainView + 1;
          if ( v47 < (float)(v50 >> 1) )
          {
            if ( !v49 )
              goto LABEL_136;
            v51 = Component_object[3].klass;
            v49[6] = 1065353216;
            if ( !v51 )
              goto LABEL_136;
            v51[6] = 1065353216;
            if ( *(&WarBoardSimplePopup_TypeInfo->_2.cctor_finished + 1) )
            {
              TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->TOP_MARGIN;
LABEL_114:
              v49[7] = -TOP_MARGIN;
LABEL_133:
              v70 = v49[7] - HIDWORD(Component_object[10].monitor);
              goto LABEL_134;
            }
            j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method, v48);
            FS_TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->TOP_MARGIN;
LABEL_131:
            v51 = Component_object[3].klass;
            v71 = Component_object[3].monitor;
            v49[7] = -FS_TOP_MARGIN;
            if ( v71 )
            {
              v49 = v71;
              if ( v51 )
                goto LABEL_133;
            }
LABEL_136:
            sub_21FFECC(mainView, method);
          }
          if ( !v49 )
            goto LABEL_136;
          v53 = Component_object[3].klass;
          v49[6] = 0;
          if ( !v53 )
            goto LABEL_136;
          LODWORD(v53->_1.namespaze) = 0;
          v54 = WarBoardSimplePopup_TypeInfo;
          if ( !*(&WarBoardSimplePopup_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method, v48);
            v54 = WarBoardSimplePopup_TypeInfo;
          }
          BOTTOM_MARGIN = v54->static_fields->BOTTOM_MARGIN;
          v56 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
          HIDWORD(v53->_1.namespaze) = BOTTOM_MARGIN;
          mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance(v56);
          if ( !mainView )
            goto LABEL_136;
          if ( LODWORD(mainView[21].monitor) == 1 )
          {
            v57 = this->fields.targetPiecePosition.fields.x;
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0);
            v58 = Component_object[3].klass;
            if ( !v58 )
              goto LABEL_136;
            if ( (int)mainView >= 0 )
              v59 = (int)mainView;
            else
              v59 = (_DWORD)mainView + 1;
            if ( v57 >= (float)(v59 >> 1) )
              v60 = -1;
            else
              v60 = 12;
            v61 = HIDWORD(v58->_1.namespaze) + v60;
LABEL_127:
            HIDWORD(v58->_1.namespaze) = v61;
LABEL_128:
            v51 = Component_object[3].monitor;
            if ( v51 )
            {
              v70 = HIDWORD(v58->_1.namespaze) + HIDWORD(Component_object[10].monitor);
LABEL_134:
              v51[7] = v70;
              return;
            }
            goto LABEL_136;
          }
          v58 = Component_object[3].klass;
          goto LABEL_123;
        }
      }
      else
      {
        v40 = Component_object[2].klass;
      }
      if ( !v40 )
        goto LABEL_136;
      goto LABEL_76;
    }
    mainView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !mainView )
      goto LABEL_136;
    v19 = UnityEngine_GameObject__GetComponent_object_(
            mainView,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0, 0) )
    {
      width = UnityEngine_Screen__get_width(0);
      height = UnityEngine_Screen__get_height(0);
      v24 = ManagerConfig_TypeInfo;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v21, v22);
        v24 = ManagerConfig_TypeInfo;
      }
      v25 = (float)((float)((float)width / (float)height) / 1.7778) * (float)v24->static_fields->WIDTH;
      if ( v25 == INFINITY )
        v26 = 0x80000000;
      else
        v26 = (int)v25;
      if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v21, v22);
      mainView = (UnityEngine_GameObject_o *)FSUtility__IsOverScope(0);
      if ( ((unsigned __int8)mainView & 1) != 0 )
      {
        mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v27);
          mainView = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
        }
        v26 = *(_DWORD *)(mainView[7].fields.m_CachedPtr + 84);
      }
      if ( !v19 )
        goto LABEL_136;
      UIWidget__set_width((UIWidget_o *)v19, v26, 0);
      v28 = this->fields.targetPiecePosition.fields.x;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0);
      if ( (int)mainView >= 0 )
        v30 = (int)mainView;
      else
        v30 = (_DWORD)mainView + 1;
      if ( v28 < (float)(v30 >> 1) )
      {
        if ( !Component_object )
          goto LABEL_136;
        v31 = Component_object[2].monitor;
        mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
        if ( !*(&WarBoardSimplePopup_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method, v29);
        if ( !v31 )
          goto LABEL_136;
        v32 = Component_object[2].monitor;
        v31[7] = v26 - WarBoardSimplePopup_TypeInfo->static_fields->FS_RIGHT_MARGIN_WHEN_LOCATING_ON_RIGHT_SIDE;
        if ( !v32 )
          goto LABEL_136;
        v33 = Component_object[2].klass;
        if ( !v33 )
          goto LABEL_136;
        v34 = v32[7] - LODWORD(Component_object[10].monitor);
LABEL_106:
        v63 = this->fields.targetPiecePosition.fields.y;
        v33[7] = v34;
        mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0);
        v49 = Component_object[3].monitor;
        if ( (int)mainView >= 0 )
          v65 = (int)mainView;
        else
          v65 = (_DWORD)mainView + 1;
        if ( v63 < (float)(v65 >> 1) )
        {
          if ( !v49 )
            goto LABEL_136;
          v51 = Component_object[3].klass;
          v49[6] = 1065353216;
          if ( !v51 )
            goto LABEL_136;
          v51[6] = 1065353216;
          if ( *(&WarBoardSimplePopup_TypeInfo->_2.cctor_finished + 1) )
          {
            TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->FS_TOP_MARGIN;
            goto LABEL_114;
          }
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method, v64);
          FS_TOP_MARGIN = WarBoardSimplePopup_TypeInfo->static_fields->FS_TOP_MARGIN;
          goto LABEL_131;
        }
        if ( !v49 )
          goto LABEL_136;
        v66 = Component_object[3].klass;
        v49[6] = 0;
        if ( !v66 )
          goto LABEL_136;
        LODWORD(v66->_1.namespaze) = 0;
        v67 = WarBoardSimplePopup_TypeInfo;
        if ( !*(&WarBoardSimplePopup_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method, v64);
          v67 = WarBoardSimplePopup_TypeInfo;
        }
        v68 = this->fields.targetPiecePosition.fields.x;
        HIDWORD(v66->_1.namespaze) = v67->static_fields->FS_BOTTOM_MARGIN;
        mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_width(0);
        v58 = Component_object[3].klass;
        if ( (int)mainView >= 0 )
          v69 = (int)mainView;
        else
          v69 = (_DWORD)mainView + 1;
        if ( v68 >= (float)(v69 >> 1) )
        {
          if ( !v58 )
            goto LABEL_136;
          v61 = HIDWORD(v58->_1.namespaze) - 13;
          goto LABEL_127;
        }
LABEL_123:
        if ( !v58 )
          goto LABEL_136;
        goto LABEL_128;
      }
      if ( !Component_object )
        goto LABEL_136;
      v41 = Component_object[2].klass;
      mainView = (UnityEngine_GameObject_o *)WarBoardSimplePopup_TypeInfo;
      if ( !*(&WarBoardSimplePopup_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardSimplePopup_TypeInfo, method, v29);
      if ( !v41 )
        goto LABEL_136;
      v42 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
      HIDWORD(v41->_1.namespaze) = WarBoardSimplePopup_TypeInfo->static_fields->FS_LEFT_MARGIN_WHEN_LOCATING_ON_LEFT_SIDE;
      mainView = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance(v42);
      if ( !mainView )
        goto LABEL_136;
      if ( LODWORD(mainView[21].monitor) == 1 )
      {
        v43 = this->fields.targetPiecePosition.fields.y;
        mainView = (UnityEngine_GameObject_o *)UnityEngine_Screen__get_height(0);
        if ( (int)mainView >= 0 )
          v44 = (int)mainView;
        else
          v44 = (_DWORD)mainView + 1;
        v45 = (float)(v44 >> 1);
        v46 = Component_object[2].klass;
        if ( v43 >= v45 )
        {
          if ( !v46 )
            goto LABEL_136;
          HIDWORD(v46->_1.namespaze) += 52;
LABEL_104:
          v33 = Component_object[2].monitor;
          if ( !v33 )
            goto LABEL_136;
          v34 = HIDWORD(v46->_1.namespaze) + LODWORD(Component_object[10].monitor);
          goto LABEL_106;
        }
      }
      else
      {
        v46 = Component_object[2].klass;
      }
      if ( !v46 )
        goto LABEL_136;
      goto LABEL_104;
    }
  }
}


void WarBoardSimplePopup__CleanPopup(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  int32_t childCount; // w0
  int v5; // w20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_59362A4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362A4 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_14;
  mainView = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mainView, 0);
  if ( !mainView )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)mainView, 0);
  if ( childCount - 1 >= 0 )
  {
    v5 = childCount;
    while ( 1 )
    {
      mainView = this->fields.mainView;
      if ( !mainView )
        break;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mainView, 0);
      if ( !mainView )
        break;
      mainView = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                               (UnityEngine_Transform_o *)mainView,
                                               --v5,
                                               0);
      if ( !mainView )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainView, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      UnityEngine_Object__DestroyImmediate_83246828(gameObject, 0);
      if ( v5 <= 0 )
        return;
    }
LABEL_14:
    sub_21FFECC(mainView, method);
  }
}


void WarBoardSimplePopup__MainViewContentsFit(WarBoardSimplePopup_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainView; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x20
  int v7; // w22
  int32_t v8; // w21
  int32_t i; // w23
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x24
  int monitor_high; // w28
  _DWORD *monitor; // x8
  Il2CppClass *klass; // x9
  int v16; // w8

  if ( (byte_59362A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362A2 = 1;
  }
  mainView = this->fields.mainView;
  if ( !mainView )
    goto LABEL_23;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       mainView,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
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
          v8 = 0;
          if ( Component_object )
          {
LABEL_21:
            UIWidget__set_height((UIWidget_o *)Component_object, v8, 0);
            return;
          }
        }
        else
        {
          v7 = (int)mainView;
          v8 = 0;
          for ( i = 0; i != v7; ++i )
          {
            mainView = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(this->fields.mainView, i, 0);
            if ( !mainView )
              goto LABEL_23;
            v12 = UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)mainView,
                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
            mainView = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
            if ( ((unsigned __int8)mainView & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_23;
              monitor_high = HIDWORD(v12[10].monitor);
              UIRect__SetAnchor_56273748((UIRect_o *)v12, this->fields.mainView, 0);
              monitor = v12[3].monitor;
              if ( !monitor )
                goto LABEL_23;
              klass = v12[3].klass;
              monitor[6] = 1065353216;
              if ( !klass )
                goto LABEL_23;
              monitor[7] = -v8;
              v16 = -v8 - monitor_high;
              v8 += monitor_high;
              LODWORD(klass->_1.namespaze) = 1065353216;
              HIDWORD(klass->_1.namespaze) = v16;
              UIRect__ResetAnchors((UIRect_o *)v12, 0);
              UIRect__UpdateAnchors((UIRect_o *)v12, 0);
            }
          }
          if ( Component_object )
            goto LABEL_21;
        }
      }
    }
LABEL_23:
    sub_21FFECC(mainView, method);
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