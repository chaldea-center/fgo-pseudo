void ServantStatusParameterGauge___ctor(ServantStatusParameterGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C24B57 & 1) == 0 )
  {
    sub_1C2D490(&UISprite___TypeInfo);
    byte_4C24B57 = 1;
  }
  v3 = (struct UISprite_array *)sub_1C2D538(UISprite___TypeInfo, 5);
  this->fields.gaugeSpriteList = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.gaugeSpriteList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusParameterGauge__Set(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x23
  __int64 v9; // x24
  int v10; // w8
  __int64 v11; // x10
  System_String_o *v12; // x22
  int v13; // w9
  unsigned int v14; // w25
  int v15; // w10
  System_String_o *v16; // x21
  int v17; // w26
  float v18; // s8
  float v19; // s10
  __int64 *v20; // x8
  __int64 *v21; // x8
  __int64 *v22; // x8
  int v23; // w27
  float v24; // s9
  UISprite_o *evaluationSprite; // x0
  struct UISprite_o **p_evaluationAdd2Sprite; // x22
  UnityEngine_Transform_o *v27; // x20
  __int64 v28; // x2
  UnityEngine_Transform_o *v29; // x20
  unsigned __int64 i; // x20
  struct UISprite_array *gaugeSpriteList; // x8
  System_String_o *v32; // x8
  System_String_o *v33; // x1
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24B55 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20457/*"img_parameter_C"*/);
    sub_1C2D490(&StringLiteral_20472/*"img_parametergage_edge"*/);
    sub_1C2D490(&StringLiteral_20473/*"img_parametergage_edge_ex"*/);
    sub_1C2D490(&StringLiteral_20454/*"img_parameter_)"*/);
    sub_1C2D490(&StringLiteral_20464/*"img_parameter_minus"*/);
    sub_1C2D490(&StringLiteral_20456/*"img_parameter_B"*/);
    sub_1C2D490(&StringLiteral_20458/*"img_parameter_D"*/);
    sub_1C2D490(&StringLiteral_20471/*"img_parametergage_bar_ex"*/);
    sub_1C2D490(&StringLiteral_20466/*"img_parameter_plus"*/);
    sub_1C2D490(&StringLiteral_20455/*"img_parameter_A"*/);
    sub_1C2D490(&StringLiteral_20453/*"img_parameter_("*/);
    sub_1C2D490(&StringLiteral_20470/*"img_parametergage_bar"*/);
    sub_1C2D490(&StringLiteral_20467/*"img_parameter_question"*/);
    sub_1C2D490(&StringLiteral_20459/*"img_parameter_E"*/);
    sub_1C2D490(&StringLiteral_20460/*"img_parameter_EX"*/);
    byte_4C24B55 = 1;
  }
  ServantStatusParameterGauge__SetParameterTitleSprite(this, kind, *(const MethodInfo **)&rank);
  v8 = StringLiteral_20470/*"img_parametergage_bar"*/;
  v9 = StringLiteral_20472/*"img_parametergage_edge"*/;
  v10 = 0;
  v11 = 0;
  switch ( rank )
  {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
      v12 = (System_String_o *)StringLiteral_20455/*"img_parameter_A"*/;
      v10 = 5;
      goto LABEL_15;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 28:
    case 29:
    case 30:
      v11 = StringLiteral_20456/*"img_parameter_B"*/;
      v10 = 4;
      goto LABEL_8;
    case 27:
    case 37:
    case 38:
    case 47:
    case 48:
    case 49:
    case 57:
    case 58:
    case 59:
    case 60:
      goto LABEL_7;
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 39:
    case 40:
      v11 = StringLiteral_20457/*"img_parameter_C"*/;
      v10 = 3;
      goto LABEL_7;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 50:
      v13 = 2;
      v11 = StringLiteral_20458/*"img_parameter_D"*/;
      goto LABEL_19;
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
      v13 = 1;
      v11 = StringLiteral_20459/*"img_parameter_E"*/;
      goto LABEL_22;
    case 61:
      v8 = StringLiteral_20471/*"img_parametergage_bar_ex"*/;
      v9 = StringLiteral_20473/*"img_parametergage_edge_ex"*/;
      v11 = StringLiteral_20460/*"img_parameter_EX"*/;
      v13 = 5;
      goto LABEL_22;
    default:
      v10 = 0;
      if ( rank == 98 )
        v11 = StringLiteral_20467/*"img_parameter_question"*/;
      else
        v11 = 0;
LABEL_7:
      v13 = v10;
      if ( rank > 38 )
      {
LABEL_19:
        if ( (unsigned int)(rank - 47) >= 3 )
        {
LABEL_22:
          if ( (unsigned int)(rank - 57) <= 3 )
            v12 = (System_String_o *)StringLiteral_20459/*"img_parameter_E"*/;
          else
            v12 = (System_String_o *)v11;
        }
        else
        {
          v12 = (System_String_o *)StringLiteral_20458/*"img_parameter_D"*/;
        }
        v15 = 2;
        v10 = 3;
        v14 = 4;
        switch ( rank )
        {
          case '/':
          case '9':
            goto LABEL_26;
          case '0':
          case ':':
            goto LABEL_29;
          case '1':
          case ';':
            goto LABEL_27;
          case '<':
LABEL_30:
            v17 = 0;
            v18 = 0.0;
            v19 = 16.0;
            v16 = (System_String_o *)StringLiteral_20458/*"img_parameter_D"*/;
            v14 = v15;
            break;
          default:
            v10 = v13;
            goto LABEL_27;
        }
      }
      else
      {
LABEL_8:
        if ( rank == 27 )
        {
          v12 = (System_String_o *)StringLiteral_20456/*"img_parameter_B"*/;
          goto LABEL_26;
        }
        if ( (unsigned int)(rank - 37) <= 1 )
          v12 = (System_String_o *)StringLiteral_20457/*"img_parameter_C"*/;
        else
          v12 = (System_String_o *)v11;
        if ( rank <= 37 )
        {
LABEL_15:
          if ( rank != 27 && rank != 37 )
          {
LABEL_27:
            v14 = v10;
            v16 = 0;
            v17 = 0;
            v18 = 0.0;
            v19 = 16.0;
            v15 = v10;
            switch ( rank )
            {
              case 12:
              case 22:
              case 32:
              case 42:
              case 52:
                v20 = &StringLiteral_20466/*"img_parameter_plus"*/;
                goto LABEL_33;
              case 13:
              case 23:
              case 33:
              case 43:
              case 53:
                v21 = &StringLiteral_20466/*"img_parameter_plus"*/;
                v17 = 2;
                goto LABEL_36;
              case 14:
              case 24:
              case 34:
              case 44:
              case 54:
                v20 = &StringLiteral_20464/*"img_parameter_minus"*/;
LABEL_33:
                v16 = (System_String_o *)*v20;
                v17 = 1;
                goto LABEL_41;
              case 15:
              case 25:
              case 35:
              case 45:
              case 55:
                v21 = &StringLiteral_20466/*"img_parameter_plus"*/;
                v17 = 3;
                v18 = -2.0;
                v19 = 10.0;
                goto LABEL_36;
              case 16:
              case 26:
              case 36:
              case 46:
              case 56:
                v21 = &StringLiteral_20467/*"img_parameter_question"*/;
                v17 = 1;
                v18 = 5.0;
                goto LABEL_36;
              case 17:
              case 38:
              case 48:
              case 58:
                goto LABEL_29;
              case 18:
              case 28:
              case 49:
              case 59:
                v22 = &StringLiteral_20457/*"img_parameter_C"*/;
                goto LABEL_40;
              case 19:
              case 29:
              case 39:
              case 60:
                goto LABEL_30;
              case 20:
              case 30:
              case 40:
              case 50:
                v22 = &StringLiteral_20459/*"img_parameter_E"*/;
                goto LABEL_40;
              case 27:
              case 37:
              case 47:
              case 57:
                v22 = &StringLiteral_20455/*"img_parameter_A"*/;
LABEL_40:
                v16 = (System_String_o *)*v22;
                v17 = 0;
                break;
              default:
                goto LABEL_41;
            }
            goto LABEL_41;
          }
LABEL_26:
          v10 = 5;
          goto LABEL_27;
        }
        v14 = 4;
LABEL_29:
        v21 = &StringLiteral_20456/*"img_parameter_B"*/;
        v17 = 0;
        v18 = 0.0;
        v19 = 16.0;
LABEL_36:
        v16 = (System_String_o *)*v21;
      }
LABEL_41:
      if ( rank > 30 )
      {
        v23 = 0;
        v24 = 1.0;
        if ( (unsigned int)rank > 0x3C || ((1LL << rank) & 0x1E0781E000000000LL) == 0 )
          goto LABEL_48;
LABEL_47:
        v24 = 0.7;
        v17 = 3;
        v18 = -6.0;
        v19 = 12.0;
        v23 = 1;
        goto LABEL_48;
      }
      v23 = 0;
      v24 = 1.0;
      if ( (unsigned int)rank <= 0x1E && ((1 << rank) & 0x781E0000) != 0 )
        goto LABEL_47;
LABEL_48:
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_115;
      UISprite__set_spriteName(evaluationSprite, v12, 0);
      if ( v12 )
      {
        evaluationSprite = this->fields.evaluationSprite;
        if ( !evaluationSprite )
          goto LABEL_115;
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
          evaluationSprite,
          evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
      }
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
LABEL_115:
        sub_1C2D6EC(evaluationSprite, v7);
      if ( v17 < 1 )
      {
        UISprite__set_spriteName(evaluationSprite, 0, 0);
        p_evaluationAdd2Sprite = &this->fields.evaluationAdd2Sprite;
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_115;
LABEL_66:
        UISprite__set_spriteName(evaluationSprite, 0, 0);
        goto LABEL_67;
      }
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_115;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_115;
      v34.fields.y = 0.0;
      v34.fields.z = 0.0;
      v34.fields.x = v18;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v34, 0);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_115;
      UISprite__set_spriteName(evaluationSprite, v16, 0);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_115;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        evaluationSprite,
        evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
      p_evaluationAdd2Sprite = &this->fields.evaluationAdd2Sprite;
      evaluationSprite = this->fields.evaluationAdd2Sprite;
      if ( !evaluationSprite )
        goto LABEL_115;
      if ( v17 < 2 )
        goto LABEL_66;
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_115;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_115;
      v35.fields.x = v19 + v18;
      v35.fields.y = 0.0;
      v35.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v35, 0);
      evaluationSprite = *p_evaluationAdd2Sprite;
      if ( !*p_evaluationAdd2Sprite )
        goto LABEL_115;
      UISprite__set_spriteName(evaluationSprite, v16, 0);
      evaluationSprite = *p_evaluationAdd2Sprite;
      if ( !*p_evaluationAdd2Sprite )
        goto LABEL_115;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        evaluationSprite,
        evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
LABEL_67:
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_115;
      if ( v17 >= 3 )
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0);
        if ( !evaluationSprite )
          goto LABEL_115;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0);
        if ( !evaluationSprite )
          goto LABEL_115;
        v36.fields.x = v18 + (float)(v19 + v19);
        v36.fields.y = 0.0;
        v36.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v36, 0);
        evaluationSprite = this->fields.evaluationAdd3Sprite;
        if ( !evaluationSprite )
          goto LABEL_115;
        UISprite__set_spriteName(evaluationSprite, v16, 0);
        evaluationSprite = this->fields.evaluationAdd3Sprite;
        if ( !evaluationSprite )
          goto LABEL_115;
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
          evaluationSprite,
          evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
      }
      else
      {
        UISprite__set_spriteName(evaluationSprite, 0, 0);
      }
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_115;
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_115;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0);
      v27 = (UnityEngine_Transform_o *)evaluationSprite;
      if ( !v23 )
      {
        if ( !byte_4C20DA6 )
        {
          evaluationSprite = (UISprite_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA6 = 1;
        }
        if ( v27 )
        {
          UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          evaluationSprite = *p_evaluationAdd2Sprite;
          if ( *p_evaluationAdd2Sprite )
          {
            evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)evaluationSprite,
                                               0);
            if ( evaluationSprite )
            {
              evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)evaluationSprite,
                                                 0);
              v29 = (UnityEngine_Transform_o *)evaluationSprite;
              if ( !byte_4C20DA6 )
              {
                evaluationSprite = (UISprite_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                byte_4C20DA6 = 1;
              }
              if ( v29 )
              {
                UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
                goto LABEL_96;
              }
            }
          }
        }
        goto LABEL_115;
      }
      if ( !evaluationSprite )
        goto LABEL_115;
      v37.fields.y = 1.0;
      v37.fields.z = 1.0;
      v37.fields.x = v24;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)evaluationSprite, v37, 0);
      evaluationSprite = *p_evaluationAdd2Sprite;
      if ( !*p_evaluationAdd2Sprite )
        goto LABEL_115;
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_115;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_115;
      v38.fields.y = 1.0;
      v38.fields.z = 1.0;
      v38.fields.x = v24;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)evaluationSprite, v38, 0);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_115;
      UISprite__set_spriteName(evaluationSprite, (System_String_o *)StringLiteral_20453/*"img_parameter_("*/, 0);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_115;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        evaluationSprite,
        evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_115;
      UISprite__set_spriteName(evaluationSprite, (System_String_o *)StringLiteral_20454/*"img_parameter_)"*/, 0);
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_115;
      evaluationSprite = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                         evaluationSprite,
                                         evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
LABEL_96:
      for ( i = 0; i != 5; ++i )
      {
        gaugeSpriteList = this->fields.gaugeSpriteList;
        if ( !gaugeSpriteList )
          goto LABEL_115;
        if ( i >= LODWORD(gaugeSpriteList->max_length) )
          sub_1C2D6F4(evaluationSprite, v7, v28);
        evaluationSprite = gaugeSpriteList->m_Items[i];
        if ( i >= v14 )
        {
          if ( !evaluationSprite )
            goto LABEL_115;
          v33 = 0;
        }
        else
        {
          if ( !evaluationSprite )
            goto LABEL_115;
          if ( i >= 4 )
            v32 = (System_String_o *)v9;
          else
            v32 = (System_String_o *)v8;
          if ( i )
            v33 = v32;
          else
            v33 = (System_String_o *)v9;
        }
        UISprite__set_spriteName(evaluationSprite, v33, 0);
      }
      return;
  }
}


void ServantStatusParameterGauge__SetParameterTitleSprite(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parameterTitleSprite; // x21
  __int64 v6; // x1
  UISprite_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4C24B56 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20463/*"img_parameter_magic"*/);
    sub_1C2D490(&StringLiteral_20465/*"img_parameter_np"*/);
    sub_1C2D490(&StringLiteral_20469/*"img_parameter_strength"*/);
    sub_1C2D490(&StringLiteral_20462/*"img_parameter_luck"*/);
    sub_1C2D490(&StringLiteral_20461/*"img_parameter_endurance"*/);
    sub_1C2D490(&StringLiteral_20468/*"img_parameter_speed"*/);
    byte_4C24B56 = 1;
  }
  parameterTitleSprite = (UnityEngine_Object_o *)this->fields.parameterTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(parameterTitleSprite, 0, 0) )
  {
    switch ( kind )
    {
      case 0:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_20;
        v8 = &StringLiteral_20469/*"img_parameter_strength"*/;
        goto LABEL_19;
      case 1:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_20;
        v8 = &StringLiteral_20461/*"img_parameter_endurance"*/;
        goto LABEL_19;
      case 2:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_20;
        v8 = &StringLiteral_20468/*"img_parameter_speed"*/;
        goto LABEL_19;
      case 3:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_20;
        v8 = &StringLiteral_20463/*"img_parameter_magic"*/;
        goto LABEL_19;
      case 4:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_20;
        v8 = &StringLiteral_20462/*"img_parameter_luck"*/;
        goto LABEL_19;
      case 5:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
LABEL_20:
          sub_1C2D6EC(v7, v6);
        v8 = &StringLiteral_20465/*"img_parameter_np"*/;
LABEL_19:
        UISprite__set_spriteName(v7, (System_String_o *)*v8, 0);
        break;
      default:
        return;
    }
  }
}