void __fastcall ServantStatusParameterGauge___ctor(ServantStatusParameterGauge_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UISprite_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42ECBA6 & 1) == 0 )
  {
    sub_B5D5C4(&UISprite___TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECBA6 = 1;
  }
  v5 = (struct UISprite_array *)sub_B5D5DC(UISprite___TypeInfo, 5LL);
  this->fields.gaugeSpriteList = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gaugeSpriteList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusParameterGauge__Set(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        int32_t rank,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  __int64 v43; // x1
  __int64 v44; // x23
  __int64 v45; // x24
  unsigned __int64 v46; // x25
  System_String_o *v47; // x21
  __int64 *v48; // x8
  System_String_o *v49; // x20
  unsigned int v50; // w26
  float v51; // s8
  float v52; // s9
  __int64 *v53; // x8
  __int64 *v54; // x8
  UISprite_o *evaluationSprite; // x0
  unsigned __int64 v56; // x20
  struct UISprite_array *gaugeSpriteList; // x8
  System_String_o *v58; // x8
  System_String_o *v59; // x1
  __int64 v61; // x0
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECBA4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19790/*"img_parameter_C"*/, kind, rank, method);
    sub_B5D5C4(&StringLiteral_19805/*"img_parametergage_edge"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_19806/*"img_parametergage_edge_ex"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_19797/*"img_parameter_minus"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_19789/*"img_parameter_B"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_19791/*"img_parameter_D"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_19804/*"img_parametergage_bar_ex"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_19799/*"img_parameter_plus"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_19788/*"img_parameter_A"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_19803/*"img_parametergage_bar"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_19800/*"img_parameter_question"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_19792/*"img_parameter_E"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_19793/*"img_parameter_EX"*/, v40, v41, v42);
    byte_42ECBA4 = 1;
  }
  ServantStatusParameterGauge__SetParameterTitleSprite(this, kind, *(const MethodInfo **)&rank);
  v44 = StringLiteral_19803/*"img_parametergage_bar"*/;
  v45 = StringLiteral_19805/*"img_parametergage_edge"*/;
  v46 = 0LL;
  v47 = 0LL;
  switch ( rank )
  {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      v48 = &StringLiteral_19788/*"img_parameter_A"*/;
      v46 = 5LL;
      goto LABEL_9;
    case 17:
    case 18:
    case 19:
    case 20:
    case 27:
    case 28:
    case 29:
    case 30:
    case 37:
    case 38:
    case 39:
    case 40:
    case 47:
    case 48:
    case 49:
    case 50:
    case 57:
    case 58:
    case 59:
    case 60:
      goto LABEL_10;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
      v48 = &StringLiteral_19789/*"img_parameter_B"*/;
      v46 = 4LL;
      goto LABEL_9;
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
      v48 = &StringLiteral_19790/*"img_parameter_C"*/;
      v46 = 3LL;
      goto LABEL_9;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
      v48 = &StringLiteral_19791/*"img_parameter_D"*/;
      v46 = 2LL;
      goto LABEL_9;
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
      v48 = &StringLiteral_19792/*"img_parameter_E"*/;
      v46 = 1LL;
LABEL_9:
      v47 = (System_String_o *)*v48;
      goto LABEL_10;
    case 61:
      v50 = 0;
      v44 = StringLiteral_19804/*"img_parametergage_bar_ex"*/;
      v45 = StringLiteral_19806/*"img_parametergage_edge_ex"*/;
      v47 = (System_String_o *)StringLiteral_19793/*"img_parameter_EX"*/;
      v49 = 0LL;
      v51 = 0.0;
      v52 = 16.0;
      v46 = 5LL;
      goto LABEL_18;
    default:
      v46 = 0LL;
      if ( rank == 98 )
        v47 = (System_String_o *)StringLiteral_19800/*"img_parameter_question"*/;
      else
        v47 = 0LL;
LABEL_10:
      v49 = 0LL;
      v50 = 0;
      v51 = 0.0;
      v52 = 16.0;
      switch ( rank )
      {
        case 12:
        case 22:
        case 32:
        case 42:
        case 52:
          v53 = &StringLiteral_19799/*"img_parameter_plus"*/;
          goto LABEL_14;
        case 13:
        case 23:
        case 33:
        case 43:
        case 53:
          v54 = &StringLiteral_19799/*"img_parameter_plus"*/;
          v50 = 2;
          goto LABEL_17;
        case 14:
        case 24:
        case 34:
        case 44:
        case 54:
          v53 = &StringLiteral_19797/*"img_parameter_minus"*/;
LABEL_14:
          v49 = (System_String_o *)*v53;
          v50 = 1;
          break;
        case 15:
        case 25:
        case 35:
        case 45:
        case 55:
          v54 = &StringLiteral_19799/*"img_parameter_plus"*/;
          v50 = 3;
          v51 = -2.0;
          v52 = 10.0;
          goto LABEL_17;
        case 16:
        case 26:
        case 36:
        case 46:
        case 56:
          v54 = &StringLiteral_19800/*"img_parameter_question"*/;
          v50 = 1;
          v51 = 5.0;
LABEL_17:
          v49 = (System_String_o *)*v54;
          break;
        default:
          break;
      }
LABEL_18:
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      UISprite__set_spriteName(evaluationSprite, v47, 0LL);
      if ( !v47 )
        goto LABEL_22;
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
        evaluationSprite,
        evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
LABEL_22:
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      if ( v50 )
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        v62.fields.y = 0.0;
        v62.fields.z = 0.0;
        v62.fields.x = v51;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v62, 0LL);
        evaluationSprite = this->fields.evaluationAdd1Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        UISprite__set_spriteName(evaluationSprite, v49, 0LL);
        evaluationSprite = this->fields.evaluationAdd1Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      else
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
      }
      evaluationSprite = this->fields.evaluationAdd2Sprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      if ( v50 >= 2 )
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        v63.fields.x = v52 + v51;
        v63.fields.y = 0.0;
        v63.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v63, 0LL);
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        UISprite__set_spriteName(evaluationSprite, v49, 0LL);
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      else
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
      }
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      if ( v50 != 3 )
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
        goto LABEL_46;
      }
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite )
        goto LABEL_66;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite
        || (v64.fields.x = v51 + (float)(v52 + v52),
            v64.fields.y = 0.0,
            v64.fields.z = 0.0,
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v64, 0LL),
            (evaluationSprite = this->fields.evaluationAdd3Sprite) == 0LL)
        || (UISprite__set_spriteName(evaluationSprite, v49, 0LL),
            (evaluationSprite = this->fields.evaluationAdd3Sprite) == 0LL) )
      {
LABEL_66:
        sub_B5D69C(evaluationSprite, v43);
      }
      evaluationSprite = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
                                         evaluationSprite,
                                         evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
LABEL_46:
      v56 = 0LL;
      do
      {
        gaugeSpriteList = this->fields.gaugeSpriteList;
        if ( !gaugeSpriteList )
          goto LABEL_66;
        if ( v56 >= gaugeSpriteList->max_length )
        {
          v61 = sub_B5D6C8(evaluationSprite);
          sub_B5D668(v61, 0LL);
        }
        evaluationSprite = gaugeSpriteList->m_Items[v56];
        if ( v56 >= v46 )
        {
          if ( !evaluationSprite )
            goto LABEL_66;
          v59 = 0LL;
        }
        else
        {
          if ( !evaluationSprite )
            goto LABEL_66;
          if ( v56 >= 4 )
            v58 = (System_String_o *)v45;
          else
            v58 = (System_String_o *)v44;
          if ( v56 )
            v59 = v58;
          else
            v59 = (System_String_o *)v45;
        }
        UISprite__set_spriteName(evaluationSprite, v59, 0LL);
      }
      while ( v56++ < 4 );
      return;
  }
}


void __fastcall ServantStatusParameterGauge__SetParameterTitleSprite(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UnityEngine_Object_o *parameterTitleSprite; // x21
  __int64 v25; // x1
  UISprite_o *v26; // x0
  __int64 *v27; // x8

  if ( (byte_42ECBA5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, kind, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_19796/*"img_parameter_magic"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_19798/*"img_parameter_np"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19802/*"img_parameter_strength"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_19795/*"img_parameter_luck"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_19794/*"img_parameter_endurance"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_19801/*"img_parameter_speed"*/, v21, v22, v23);
    byte_42ECBA5 = 1;
  }
  parameterTitleSprite = (UnityEngine_Object_o *)this->fields.parameterTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(parameterTitleSprite, 0LL, 0LL) )
  {
    switch ( kind )
    {
      case 0:
        v26 = this->fields.parameterTitleSprite;
        if ( !v26 )
          goto LABEL_21;
        v27 = &StringLiteral_19802/*"img_parameter_strength"*/;
        goto LABEL_20;
      case 1:
        v26 = this->fields.parameterTitleSprite;
        if ( !v26 )
          goto LABEL_21;
        v27 = &StringLiteral_19794/*"img_parameter_endurance"*/;
        goto LABEL_20;
      case 2:
        v26 = this->fields.parameterTitleSprite;
        if ( !v26 )
          goto LABEL_21;
        v27 = &StringLiteral_19801/*"img_parameter_speed"*/;
        goto LABEL_20;
      case 3:
        v26 = this->fields.parameterTitleSprite;
        if ( !v26 )
          goto LABEL_21;
        v27 = &StringLiteral_19796/*"img_parameter_magic"*/;
        goto LABEL_20;
      case 4:
        v26 = this->fields.parameterTitleSprite;
        if ( !v26 )
          goto LABEL_21;
        v27 = &StringLiteral_19795/*"img_parameter_luck"*/;
        goto LABEL_20;
      case 5:
        v26 = this->fields.parameterTitleSprite;
        if ( !v26 )
LABEL_21:
          sub_B5D69C(v26, v25);
        v27 = &StringLiteral_19798/*"img_parameter_np"*/;
LABEL_20:
        UISprite__set_spriteName(v26, (System_String_o *)*v27, 0LL);
        break;
      default:
        return;
    }
  }
}